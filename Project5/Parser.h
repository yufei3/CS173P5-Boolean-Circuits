//
// Created by Rainy ZHAO on 2020/12/7.
//

#ifndef CSC173_PROJECT_5_BOOLEAN_CIRCUIT_SIMULATOR_PARSER_H
#define CSC173_PROJECT_5_BOOLEAN_CIRCUIT_SIMULATOR_PARSER_H

#define Size 4
#include <stdbool.h>
#include "Boolean.h"
#include "Circuit.h"
#include "Stack.h"
typedef struct Node* Tree;

struct Node{
    char* label;
    Tree leftchild, middlechild, rightchild;
};

Tree makeNode0(char* label);
Tree makeNode1(char* label, Tree t1);
Tree makeNode2(char* label, Tree t1, Tree t2);
Tree makeNode3(char* label, Tree t1, Tree t2, Tree t3);
Tree search_add(Tree root, char* x, Tree child1, Tree child2, Tree child3);
void add(Tree subroot, Tree t1, Tree t2, Tree t3);
void printTree(Tree t);
void printTree_space(Tree t, int space);
bool isOperator(char symbol);
bool isParenthesis(char symbol);
int precedence(char symbol);
char* toPrefix(char* input);



#endif //CSC173_PROJECT_5_BOOLEAN_CIRCUIT_SIMULATOR_PARSER_H