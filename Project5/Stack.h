//
// Created by Rainy ZHAO on 2020/12/8.
//

#include <stdbool.h>

#ifndef CSC173_PROJECT_5_BOOLEAN_CIRCUIT_SIMULATOR_STACK_H
#define CSC173_PROJECT_5_BOOLEAN_CIRCUIT_SIMULATOR_STACK_H

#endif //CSC173_PROJECT_5_BOOLEAN_CIRCUIT_SIMULATOR_STACK_H
typedef struct Stack* Stack;
Stack new_Stack();
bool Stack_isEmpty(Stack this);
void Stack_add(Stack this, char value);
char Stack_pop(Stack this);
char Stack_removeBottom(Stack this);
char Stack_peek(Stack this);
char Stack_secondpeek(Stack this);
char Stack_lookBottom(Stack this);
void Stack_TopPrint(Stack this);
void Stack_BottomPrint(Stack this);
