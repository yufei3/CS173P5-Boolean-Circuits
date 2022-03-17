//
// Created by Rainy ZHAO on 2020/12/7.
//

#include "Parser.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#define FAILED NULL

Tree makeNode0(char* label){
    Tree root;
    root=(Tree) malloc(sizeof(struct Node));
    root->label=label;
    root->leftchild=NULL;
    root->rightchild=NULL;
    return root;
}

Tree makeNode1(char* label, Tree t1){
    Tree root;
    root=makeNode0(label);
    root->leftchild=t1;
    return root;
}

Tree makeNode2(char* label, Tree t1, Tree t2){
    Tree root;
    root=makeNode0(label);
    root->leftchild=t1;
    root->rightchild=t2;
    return root;
}

Tree makeNode3(char* label, Tree t1, Tree t2, Tree t3){
    Tree root;
    root=makeNode0(label);
    root->leftchild=t1;
    root->middlechild=t2;
    root->rightchild=t3;
    return root;
}

Tree search_add(Tree root, char* x, Tree child1, Tree child2, Tree child3){
    if (root==NULL){
        return FAILED;
    }
    else if (root->label==x && (root->leftchild==NULL) && root->rightchild==NULL
             && root->middlechild==NULL){
        add(root, child1, child2, child3);
        return root;
    }
    else {
        Tree result;
        result=search_add(root->leftchild, x, child1, child2, child3);
        if (result==FAILED){
            result=search_add(root->middlechild, x, child1, child2, child3);
            if (result==FAILED){
                result=search_add(root->rightchild, x, child1, child2, child3);
                if (result==FAILED){
                    return FAILED;
                }
            }
        }
        return result;
    }
}

void add(Tree subroot, Tree t1, Tree t2, Tree t3){
    subroot->leftchild=t1;
    subroot->middlechild=t2;
    subroot->rightchild=t3;
}

bool isOperator(char symbol){
    if (symbol=='+' || symbol=='*' || symbol=='~'){
        return true;
    }
    else return false;
}

bool isParenthesis(char symbol){
    if (symbol=='(' || symbol==')'){
        return true;
    }
    else return false;
}

int precedence(char symbol){
    if (symbol=='~'){
        return 3;
    }
    else if (symbol=='*'){
        return 2;
    }
    else if (symbol=='+'){
        return 1;
    }
    else if (symbol=='(' || symbol==')'){
        return 0;
    }
    else return -1;
}

void printTree(Tree t){
    printTree_space(t, 0);
}

void printTree_space(Tree t, int space){
    //printf("%d\n", space);
    if (t==NULL){
        return;
    }
    for (int i=0; i<space; i++){
        printf(" ");
    }
    if(strcmp(t->label, "E")==0){
        printf("E\n");
    }
    else if (strcmp(t->label, "M")==0){
        printf("ET\n");
    }
    else if (strcmp(t->label, "C")==0){
        printf("C\n");
    }
    else if (strcmp(t->label, "N")==0){
        printf("CT\n");
    }
    else if (strcmp(t->label, "S")==0){
        printf("S\n");
    }
    else if (strcmp(t->label, "P")==0){
        printf("ST\n");
    }
    else if (strcmp(t->label, "A")==0){
        printf("A\n");
    }
    else if (strcmp(t->label, "$")==0){
        printf("eps\n");
    }
    else{
        printf("%s\n", t->label);
    }

    if (t->leftchild!=NULL){
        printTree_space(t->leftchild, space+4);
    }
    if (t->middlechild!=NULL){
        printTree_space(t->middlechild, space+4);
    }
    if (t->rightchild!=NULL){
        printTree_space(t->rightchild, space+4);
    }
}

char* toPrefix(char* input){
    int num=0;
    Stack inputExpression=new_Stack();
    for (int i=0; i<strlen(input); i++){
        Stack_add(inputExpression, input[i]);
        num++;
    }

    Stack operation=new_Stack();
    Stack result=new_Stack();

    while (!Stack_isEmpty(inputExpression)){
        char current=Stack_pop(inputExpression);
        if (isOperator(current) || isParenthesis(current)){
            if (isParenthesis(current)){
                num--;
            }
            if (Stack_isEmpty(operation)){
                Stack_add(operation, current);
            }
            //Since I reverse the order of symbols in the input, the opening parenthesis is actually )
            else if (precedence((current)) > precedence(Stack_peek(operation)) || current==')'){
                Stack_add(operation, current);
            }
            else {
                //when encoutering the actual closing parenthesis (
                if (current=='('){
                    while (!Stack_isEmpty(operation) && Stack_peek(operation)!=')'){
                        Stack_add(result, Stack_pop(operation));
                    }
                    Stack_pop(operation);
                }
                else {
                    while (!Stack_isEmpty(operation) && precedence((current)) <= precedence(Stack_peek(operation))){
                        char top=Stack_pop(operation);
                        Stack_add(result, top);
                    }
                    Stack_add(operation, current);
                }
            }
        }
        else {
            Stack_add(result, current);
        }
    }
    while (!Stack_isEmpty(operation)){
        char top=Stack_pop(operation);
        Stack_add(result, top);
    }

//    Boolean** inputs=new_Boolean_array(numInputs);
//    Boolean** outputs=new_Boolean_array(1);
//    Gate** gates=new_Gate_array(numGates);
//    Circuit* circuit=new_Circuit(numInputs, inputs, 1, outputs, numGates, gates);
    char* prefix=malloc(num+1);
    int index=0;
    while(!Stack_isEmpty(result)){
        char top=Stack_pop(result);
        strncat(prefix, &top, 1);
        index++;
    }
    return prefix;

//    char* prefix;
//    int OperandIndex=numInputs;
//    int usedOperatorIndex=0;
//    int GateIndex=numGates;
//    char top;
//
//    while(!Stack_isEmpty(result)){
//        top=Stack_pop(result);
//        if (isOperator(top)){
//            if (top=='~'){
//                gates[--GateIndex]=new_Inverter();
//
//                if (isOperator(Stack_peek(result))){
//                    Circuit_connect(circuit, Gate_getOutput(gates[GateIndex-1]), Gate_getInput(gates[GateIndex], 0));
//                }
//                else {
//                    Circuit_connect(circuit, inputs[OperandIndex-1], Gate_getInput(gates[GateIndex], 0));
//                }
//            }
//            else if (top=='*'){
//                gates[--GateIndex]=new_AndGate();
//
//                if (isOperator(Stack_peek(result))){
//                    Circuit_connect(circuit, Gate_getOutput(gates[GateIndex-1]), Gate_getInput(gates[GateIndex], 1));
//                }
//                else {
//                    Circuit_connect(circuit, inputs[OperandIndex-1], Gate_getInput(gates[GateIndex], 1));
//                }
//                if (isOperator((Stack_secondpeek(result)))){
//                    Circuit_connect(circuit, Gate_getOutput(gates[GateIndex-1]), Gate_getInput(gates[GateIndex], 1));
//                }
//            }
//        }
//    }
}


