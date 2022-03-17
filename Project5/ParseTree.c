//
// Created by Rainy ZHAO on 2020/12/7.
//

#include "ParseTree.h"
#include <stdlib.h>
#include <stdio.h>
#define FAILED NULL
static char* lookForward;

Tree ParseTree(char *input){
    lookForward=input;
    Tree tree=E();
    if (*lookForward!='\0'){
        return FAILED;
    }
    return tree;
}
Tree E(){
    Tree c=C();
    if (c!=FAILED){
        Tree et = ET();
        if (et == FAILED){
            return FAILED;
        }
        else return makeNode2("E", c, et);
    }
    else return FAILED;
}
Tree ET(){
    if (*lookForward=='+'){
        lookForward++;

        Tree e=E();

        if (e==FAILED){
            return FAILED;
        }
        else return makeNode2("M", makeNode0("+"), e);
    }
    else return makeNode1("M", makeNode0("$"));
}
Tree C(){
    Tree s=S();
    if (s==FAILED){
        return FAILED;
    }
    Tree ct=CT();
    if (ct==FAILED){
        return FAILED;
    }
    return makeNode2("C", s, ct);
}
Tree CT(){
    if (*lookForward=='*'){
        lookForward++;
        Tree c=C();
        if (c!=FAILED){
            return makeNode2("N", makeNode0("*"), c);
        }
        else return FAILED;
    }
    else return makeNode1("N", makeNode0("$"));
}
Tree S(){
    Tree a=A();
    if (a==FAILED){
        return FAILED;
    }
    Tree st=ST();
    if (st==FAILED){
        return FAILED;
    }
    return makeNode2("S", a, st);
}
Tree ST(){
    if (*lookForward=='~'){
        lookForward++;
        Tree st=ST();
        if (st==FAILED){
            return FAILED;
        }
        else return makeNode2("P", makeNode0("~"), st);
    }
    else return makeNode1("P", makeNode0("$"));
}
Tree A(){
    if (*lookForward=='('){
        lookForward++;
        Tree e=E();
        if (e!=FAILED && *lookForward==')'){
            lookForward++;
            return makeNode3("A", makeNode0("("), e, makeNode0(")"));
        }
        else return FAILED;
    }
    else{
        Tree x=X();
        if (x==FAILED){
            return FAILED;
        }
        else return makeNode1("A", x);
    }
}
Tree X(){
    Tree leaf;
    switch(*lookForward){
        case 'a':
            leaf=makeNode1("X", makeNode0("a"));
            lookForward++;
            return leaf;
            break;
        case 'b':
            leaf=makeNode1("X", makeNode0("b"));
            lookForward++;
            return leaf;
            break;
        case 'c':
            leaf=makeNode1("X", makeNode0("c"));
            lookForward++;
            return leaf;
            break;
        case 'd':
            leaf=makeNode1("X", makeNode0("d"));
            lookForward++;
            return leaf;
            break;
        case 'e':
            leaf=makeNode1("X", makeNode0("e"));
            lookForward++;
            return leaf;
            break;
        case 'f':
            leaf=makeNode1("X", makeNode0("f"));
            lookForward++;
            return leaf;
            break;
        case 'g':
            leaf=makeNode1("X", makeNode0("g"));
            lookForward++;
            return leaf;
            break;
        case 'h':
            leaf=makeNode1("X", makeNode0("h"));
            lookForward++;
            return leaf;
            break;
        case 'i':
            leaf=makeNode1("X", makeNode0("i"));
            lookForward++;
            return leaf;
            break;
        case 'j':
            leaf=makeNode1("X", makeNode0("j"));
            lookForward++;
            return leaf;
            break;
        case 'k':
            leaf=makeNode1("X", makeNode0("k"));
            return leaf;
            break;
        case 'l':
            leaf=makeNode1("X", makeNode0("l"));
            lookForward++;
            return leaf;
            break;
        case 'm':
            leaf=makeNode1("X", makeNode0("m"));
            lookForward++;
            return leaf;
            break;
        case 'n':
            leaf=makeNode1("X", makeNode0("n"));
            lookForward++;
            return leaf;
            break;
        case 'o':
            leaf=makeNode1("X", makeNode0("o"));
            lookForward++;
            return leaf;
            break;
        case 'p':
            leaf=makeNode1("X", makeNode0("p"));
            lookForward++;
            return leaf;
            break;
        case 'q':
            leaf=makeNode1("X", makeNode0("q"));
            lookForward++;
            return leaf;
            break;
        case 'r':
            leaf=makeNode1("X", makeNode0("r"));
            lookForward++;
            return leaf;
            break;
        case 's':
            leaf=makeNode1("X", makeNode0("s"));
            lookForward++;
            return leaf;
            break;
        case 't':
            leaf=makeNode1("X", makeNode0("t"));
            lookForward++;
            return leaf;
            break;
        case 'u':
            leaf=makeNode1("X", makeNode0("u"));
            lookForward++;
            return leaf;
            break;
        case 'v':
            leaf=makeNode1("X", makeNode0("v"));
            lookForward++;
            return leaf;
            break;
        case 'w':
            leaf=makeNode1("X", makeNode0("w"));
            lookForward++;
            return leaf;
            break;
        case 'x':
            leaf=makeNode1("X", makeNode0("x"));
            lookForward++;
            return leaf;
            break;
        case 'y':
            leaf=makeNode1("X", makeNode0("y"));
            lookForward++;
            return leaf;
            break;
        case 'z':
            leaf=makeNode1("X", makeNode0("z"));
            lookForward++;
            return leaf;
            break;
        default:
            return FAILED;
            break;
    }
}