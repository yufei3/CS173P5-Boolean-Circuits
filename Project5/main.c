/*
 * File: main.c
 * Creator: George Ferguson
 * Created: Mon Nov 28 14:11:17 2016
 * Time-stamp: <Tue Jul 17 16:02:29 EDT 2018 ferguson>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "Circuit.h"
#include "ParseTree.h"
#include "Parser.h"
#define strSize 1

/**
 * Two AND gates connected to make a 3-input AND circuit.
 */
static Circuit* and3_Circuit() {
	Boolean* x = new_Boolean(false);
	Boolean* y = new_Boolean(false);
	Boolean* z = new_Boolean(false);
	Boolean** inputs = new_Boolean_array(3);
	inputs[0] = x;
	inputs[1] = y;
	inputs[2] = z;

	Boolean* out = new_Boolean(false);
	Boolean** outputs = new_Boolean_array(1);
	outputs[0] = out;

	Gate* A1 = new_AndGate();
	Gate* A2 = new_AndGate();
	Gate** gates = new_Gate_array(2);
	gates[0] = A1;
	gates[1] = A2;

	Circuit *circuit = new_Circuit(3, inputs, 1, outputs, 2, gates);
	Circuit_connect(circuit, x, Gate_getInput(A1, 0));
	Circuit_connect(circuit, y, Gate_getInput(A1, 1));
	Circuit_connect(circuit, Gate_getOutput(A1), Gate_getInput(A2, 0));
	Circuit_connect(circuit, z, Gate_getInput(A2, 1));
	Circuit_connect(circuit, Gate_getOutput(A2), out);
	return circuit;
}

static char* b2s(bool b) {
	return b ? "T" : "F";
}

//static void test2In1Out(Circuit* circuit, bool in0, bool in1){
//    Circuit_setInput(circuit, 0, in0);
//    Circuit_setInput(circuit, 1, in1);
//    Circuit_update(circuit);
//    bool out0 = Circuit_getOutput(circuit, 0);
//    printf("%s %s -> %s\n", b2s(in0), b2s(in1), b2s(out0));
//}

static void test3In1Out(Circuit* circuit, bool in0, bool in1, bool in2){
	Circuit_setInput(circuit, 0, in0);
	Circuit_setInput(circuit, 1, in1);
	Circuit_setInput(circuit, 2, in2);
	Circuit_update(circuit);
	bool out0 = Circuit_getOutput(circuit, 0);
	printf("%s %s %s -> %s\n", b2s(in0), b2s(in1), b2s(in2), b2s(out0));
}

//static void test3In2Out(Circuit* circuit, bool in0, bool in1, bool in2){
//    Circuit_setInput(circuit, 0, in0);
//    Circuit_setInput(circuit, 1, in1);
//    Circuit_setInput(circuit, 2, in2);
//    Circuit_update(circuit);
//    bool out0 = Circuit_getOutput(circuit, 0);
//    bool out1 = Circuit_getOutput(circuit, 1);
//    printf("%s %s %s -> %s %s\n", b2s(in0), b2s(in1), b2s(in2), b2s(out0), b2s(out1));
//}

static Circuit* circuitA(){
    Boolean* inputX=new_Boolean(false);
    Boolean* inputY=new_Boolean(false);
    Boolean** inputs=new_Boolean_array(2);
    inputs[0]=inputX;
    inputs[1]=inputY;

    Boolean* out=new_Boolean(false);
    Boolean** outputs=new_Boolean_array(1);
    outputs[0]=out;

   Gate* and0=new_AndGate();
   Gate* or0=new_OrGate();
   Gate* not0=new_Inverter();
   Gate* and1=new_AndGate();
   Gate** gates=new_Gate_array(4);
   gates[0]=and0;
   gates[1]=or0;
   gates[2]=not0;
   gates[3]=and1;

   Circuit* circuit = new_Circuit(2, inputs, 1, outputs, 4, gates);
   Circuit_connect(circuit, inputX, Gate_getInput(and0, 0));
   Circuit_connect(circuit, inputY, Gate_getInput(and0, 1));
   Circuit_connect(circuit, inputX, Gate_getInput(or0, 0));
   Circuit_connect(circuit, inputY, Gate_getInput(or0, 1));
   Circuit_connect(circuit, Gate_getOutput(and0), Gate_getInput(not0, 0));
   Circuit_connect(circuit, Gate_getOutput(not0), Gate_getInput(and1, 0));
   Circuit_connect(circuit, Gate_getOutput(or0), Gate_getInput(and1, 1));
   Circuit_connect(circuit, Gate_getOutput(and1), out);
   return circuit;
}

static Circuit* circuitB(){
    Boolean* inputX=new_Boolean(false);
    Boolean* inputY=new_Boolean(false);
    Boolean* inputZ=new_Boolean(false);
    Boolean** inputs=new_Boolean_array(3);
    inputs[0]=inputX;
    inputs[1]=inputY;
    inputs[2]=inputZ;

    Boolean* out=new_Boolean(false);
    Boolean** outputs=new_Boolean_array(1);
    outputs[0]=out;

    Gate* and0=new_AndGate();
    Gate* and1=new_AndGate();
    Gate* not0=new_Inverter();
    Gate* or0=new_OrGate();
    Gate** gates=new_Gate_array(4);
    gates[0]=and0;
    gates[1]=and1;
    gates[2]=not0;
    gates[3]=or0;

    Circuit* circuit=new_Circuit(3, inputs, 1, outputs, 4, gates);
    Circuit_connect(circuit, inputX, Gate_getInput(and0, 0));
    Circuit_connect(circuit, inputY, Gate_getInput(and0, 1));
    Circuit_connect(circuit, inputY, Gate_getInput(and1, 0));
    Circuit_connect(circuit, inputZ, Gate_getInput(and1, 1));
    Circuit_connect(circuit, Gate_getOutput(and1), Gate_getInput(not0, 0));
    Circuit_connect(circuit, Gate_getOutput(and0), Gate_getInput(or0, 0));
    Circuit_connect(circuit, Gate_getOutput(not0), Gate_getInput(or0, 1));
    Circuit_connect(circuit, Gate_getOutput(or0), out);
    return circuit;
}

static Circuit* circuitC(){
    Boolean* inputX=new_Boolean(false);
    Boolean* inputY=new_Boolean(false);
    Boolean* inputZ=new_Boolean(false);
    Boolean** inputs=new_Boolean_array(3);
    inputs[0]=inputX;
    inputs[1]=inputY;
    inputs[2]=inputZ;

    Boolean* out=new_Boolean(false);
    Boolean** outputs=new_Boolean_array(1);
    outputs[0]=out;

    Gate* not0 = new_Inverter();
    Gate* not1 = new_Inverter();
    Gate* not2 = new_Inverter();
    Gate* and0 = new_AndGate();
    Gate* and1 = new_AndGate();
    Gate* and2 = new_AndGate();
    Gate* or0 = new_OrGate();
    Gate* or1 = new_OrGate();
    Gate** gates=new_Gate_array(8);
    gates[0]=not0;
    gates[1]=not1;
    gates[2]=not2;
    gates[3]=and0;
    gates[4]=and1;
    gates[5]=and2;
    gates[6]=or0;
    gates[7]=or1;

    Circuit* circuit=new_Circuit(3, inputs, 1, outputs, 8, gates);
    Circuit_connect(circuit, inputX, Gate_getInput(not2, 0));
    Circuit_connect(circuit, inputY, Gate_getInput(not0, 0));
    Circuit_connect(circuit, inputZ, Gate_getInput(not1, 0));
    Circuit_connect(circuit, inputX, Gate_getInput(and0, 0));
    Circuit_connect(circuit, Gate_getOutput(not0), Gate_getInput(and0, 1));
    Circuit_connect(circuit, inputY, Gate_getInput(and1, 0));
    Circuit_connect(circuit, Gate_getOutput(not1), Gate_getInput(and1, 1));
    Circuit_connect(circuit, inputZ, Gate_getInput(and2, 0));
    Circuit_connect(circuit, Gate_getOutput(not2), Gate_getInput(and2, 1));
    Circuit_connect(circuit, Gate_getOutput(and0), Gate_getInput(or0, 0));
    Circuit_connect(circuit, Gate_getOutput(and1), Gate_getInput(or0, 1));
    Circuit_connect(circuit, Gate_getOutput(or0), Gate_getInput(or1, 0));
    Circuit_connect(circuit, Gate_getOutput(and2), Gate_getInput(or1, 1));
    Circuit_connect(circuit, Gate_getOutput(or1), out);
    return circuit;
}

static Circuit* One_Bit_Adder(){
    Boolean* inputX=new_Boolean(false);
    Boolean* inputY=new_Boolean(false);
    Boolean* inputC=new_Boolean(false);
    Boolean** inputs=new_Boolean_array(3);
    inputs[0]=inputX;
    inputs[1]=inputY;
    inputs[2]=inputC;

    Boolean* out1=new_Boolean(false);
    Boolean* out2=new_Boolean(false);
    Boolean** outputs=new_Boolean_array(2);
    outputs[0]=out1;
    outputs[1]=out2;

    Gate* not0 = new_Inverter();
    Gate* not1 = new_Inverter();
    Gate* not2 = new_Inverter();
    Gate* and1 = new_And3Gate(); //And Gate with index 1 on graph
    Gate* and2 = new_And3Gate(); //And Gate with index 2 on graph
    Gate* and3 = new_And3Gate(); //And Gate with index 3 on graph
    Gate* and4 = new_And3Gate(); //And Gate with index 4 on graph
    Gate* and5 = new_And3Gate(); //And Gate with index 5 on graph
    Gate* and6 = new_And3Gate(); //And Gate with index 6 on graph
    Gate* and7 = new_And3Gate(); //And Gate with index 7 on graph
    Gate* or0 = new_Or4Gate();
    Gate* or1 = new_Or4Gate();
    Gate** gates=new_Gate_array(12);
    gates[0]=not0;
    gates[1]=not1;
    gates[2]=not2;
    gates[3]=and1;
    gates[4]=and2;
    gates[5]=and3;
    gates[6]=and4;
    gates[7]=and5;
    gates[8]=and6;
    gates[9]=and7;
    gates[10]=or0;
    gates[11]=or1;

    Circuit* circuit=new_Circuit(3, inputs, 2, outputs, 12, gates);
    Circuit_connect(circuit, inputX, Gate_getInput(not0, 0));
    Circuit_connect(circuit, inputY, Gate_getInput(not1, 0));
    Circuit_connect(circuit, inputC, Gate_getInput(not2, 0));
    //And1
    Circuit_connect(circuit, Gate_getOutput(not0), Gate_getInput(and1, 0));
    Circuit_connect(circuit, Gate_getOutput(not1), Gate_getInput(and1, 1));
    Circuit_connect(circuit, inputC, Gate_getInput(and1, 2));
    //And2
    Circuit_connect(circuit, Gate_getOutput(not0), Gate_getInput(and2, 0));
    Circuit_connect(circuit, inputY, Gate_getInput(and2, 1));
    Circuit_connect(circuit, Gate_getOutput(not2), Gate_getInput(and2, 2));
    //And3
    Circuit_connect(circuit, Gate_getOutput(not0), Gate_getInput(and3, 0));
    Circuit_connect(circuit, inputY, Gate_getInput(and3, 1));
    Circuit_connect(circuit, inputC, Gate_getInput(and3, 2));
    //And4
    Circuit_connect(circuit, inputX, Gate_getInput(and4, 0));
    Circuit_connect(circuit, Gate_getOutput(not1), Gate_getInput(and4, 1));
    Circuit_connect(circuit, Gate_getOutput(not2), Gate_getInput(and4, 2));
    //And5
    Circuit_connect(circuit, inputX, Gate_getInput(and5, 0));
    Circuit_connect(circuit, Gate_getOutput(not1), Gate_getInput(and5, 1));
    Circuit_connect(circuit, inputC, Gate_getInput(and5, 2));
    //And6
    Circuit_connect(circuit, Gate_getOutput(not2), Gate_getInput(and6, 0));
    Circuit_connect(circuit, inputY, Gate_getInput(and6, 1));
    Circuit_connect(circuit, inputX, Gate_getInput(and6, 2));
    //And7
    Circuit_connect(circuit, inputX, Gate_getInput(and7, 0));
    Circuit_connect(circuit, inputY, Gate_getInput(and7, 1));
    Circuit_connect(circuit, inputC, Gate_getInput(and7, 2));
    //Or0
    Circuit_connect(circuit, Gate_getOutput(and1), Gate_getInput(or0, 0));
    Circuit_connect(circuit, Gate_getOutput(and2), Gate_getInput(or0, 1));
    Circuit_connect(circuit, Gate_getOutput(and4), Gate_getInput(or0, 2));
    Circuit_connect(circuit, Gate_getOutput(and7), Gate_getInput(or0, 3));
    //Or1
    Circuit_connect(circuit, Gate_getOutput(and3), Gate_getInput(or1, 0));
    Circuit_connect(circuit, Gate_getOutput(and5), Gate_getInput(or1, 1));
    Circuit_connect(circuit, Gate_getOutput(and6), Gate_getInput(or1, 2));
    Circuit_connect(circuit, Gate_getOutput(and7), Gate_getInput(or1 , 3));
    Circuit_connect(circuit, Gate_getOutput(or0), out1);
    Circuit_connect(circuit, Gate_getOutput(or1), out2);
    return circuit;
}

static void testAll(Circuit* circuit){
    int num=Circuit_numInputs(circuit);
    int pownum=pow(2, num);
    int pownum1=pownum;
    int index=0;
    int combinations[pownum][num];

    //initialization
    for (int i=0; i<pownum; i++){
        for (int j=0; j<num; j++){
            combinations[i][j]=-1;
        }
    }
    //another initialization
    int values[20];
    for (int i=0; i<20; i++){
        values[i]=-1;
    }

    //only numbers (-1 as initialized number) in first num positions in values are modified
    while (pownum1>0){
        values[index]=pownum1/2;
        index++;
        pownum1=pownum1/2;
    }
    //after the while loop, the values array is: 2^(num-1), 2^(num-2), ..., 1, -1, -1, ...


    int temp;
    for (int i=0; i<num; i++){
        temp=1;
        /*by doing this step, we let the repetition of the same truth value for one input more frequently as the input index increases
         for example, if there are three inputs,
         the truth value for first input is FFFF and then TTTT. 4 repetition each time.
         the truth value of the second input is FF TT FF TT. 2 repetition each time.
         the truth value of the third input is F T F T F T F T. 1 repetition each time.
         Combined together, they form all combinations.
        */
        for (int j=0; j<pownum; j++){
            if (j%values[i]==0){ //this is the key that makes the repetition more frequently.
                temp=(temp+1)%2;
            }
            combinations[j][i]=temp;
        }
    }

    for (int i=0; i<pownum; i++){
        for (int j=0; j<num; j++){
            Circuit_setInput(circuit, j, combinations[i][j]); //set the input values as the ones in the combination
        }
        Circuit_update(circuit);
        int output=Circuit_numOutputs(circuit);
        int outputs[30];
        for (int s=0; s<output; s++){
            outputs[s]=Circuit_getOutput(circuit, s);
        }
        for (int m=0; m<num; m++){
            printf("%s ", b2s(combinations[i][m]));
        }
        printf("-> ");
        for (int n=0; n<output; n++){
            printf("%s ", b2s(outputs[n]));
        }
        printf("\n");
    }

}
/*
static void testAll3In2Out(Circuit* circuit){
    test3In2Out(circuit, true, true, true);
    test3In2Out(circuit, false, true, true);
    test3In2Out(circuit, true, false, true);
    test3In2Out(circuit, true, true, false);
    test3In2Out(circuit, false, false, true);
    test3In2Out(circuit, false, true, false);
    test3In2Out(circuit, true, false, false);
    test3In2Out(circuit, false, false, false);
}

static void testAll3In1Out(Circuit* circuit){
    test3In1Out(circuit, true, true, true);
    test3In1Out(circuit, false, true, true);
    test3In1Out(circuit, true, false, true);
    test3In1Out(circuit, true, true, false);
    test3In1Out(circuit, false, false, true);
    test3In1Out(circuit, false, true, false);
    test3In1Out(circuit, true, false, false);
    test3In1Out(circuit, false, false, false);
}

static void testAll2In1Out(Circuit* circuit){
    test2In1Out(circuit, true, true);
    test2In1Out(circuit, false, true);
    test2In1Out(circuit, true, false);
    test2In1Out(circuit, false, false);
}

static void testAll(Circuit* this){
    int numInput=Circuit_numInputs(this);
    int numOutput=Circuit_numOutputs(this);
    if (numInput==3 && numOutput==2){
        testAll3In2Out(this);
    }
    else if (numInput==3 && numOutput==1){
        testAll3In1Out(this);
    }
    else if (numInput==2 && numOutput==1){
        testAll2In1Out(this);
    }
    else {
        printf("The number of inputs or outputs exceeds capability or is invalid.\n");
    }
    printf("\n");
}
*/

int main(int argc, char **argv) {
	Circuit* circuit = and3_Circuit();
	printf("The and3 circuit (AND of three inputs):\n");
	Circuit_dump(circuit);
	printf("\n");
	printf("Testing: Some input(s) false: should be false\n");
	test3In1Out(circuit, true, true, false);
	printf("Testing: All inputs true: should be true\n");
	test3In1Out(circuit, true, true, true);
	printf("Note: Your program needs to test all possible combinations of input values,\nin order from all false to all true, using a single function.\n");
	Circuit_free(circuit);

	printf("-----Circuit (a)-----\n");
	Circuit* cA = circuitA();
	printf("x y -> result\n");
	testAll(cA);
    printf("-----Circuit (b)-----\n");
    Circuit* cB = circuitB();
    printf("x y z -> result\n");
    testAll(cB);
    printf("-----Circuit (c)-----\n");
    Circuit* cC = circuitC();
    printf("x y z -> result\n");
    testAll(cC);
    printf("-----Circuit Extra One-Bit-Adder-----\n");
    Circuit* cD = One_Bit_Adder();
    printf("x y c -> z d\n");
    testAll(cD);

    int current_size=strSize;
    char *str=malloc(current_size); //let's keep str pointing to beginning of string...
    char *next_read=str; //and next_read pointing to where next character should go
    printf("\nOnly enter strings with lower letters and do not type space within your input)");
    printf("\nNow enter your input (Enter # to quit): ");
    fgets(next_read, current_size, stdin);
    while (str[strlen(str)-1] != '\n'){ //if we got the whole string, the last char will be '\n'
        current_size=strlen(str)+strSize;
        str=realloc(str,current_size);
        next_read=str+strlen(str);
        fgets(next_read, strSize+1, stdin);
    }
    str[strlen(str)-1]='\0';
    Tree result=ParseTree(str);
    printTree(result);
    char* prefix=toPrefix(str);
    printf("prefix notation: %s\n", prefix);
}
