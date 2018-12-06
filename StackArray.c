#include <stdio.h>
#include <stdlib.h>

#define SIZE 256
float stack[SIZE];
int top = -1;

void push(float n){
	if (top < SIZE-1) stack[++top] = n;
	else printf("ERROR : stack is full\n");
}

float pop() {
	if (top > -1) {
		float r = stack[top--];
		return r;
	} else printf("ERROR : stack is empty\n");
	return 0;
}

void mult(float b) {
	float a = pop();
	push(a*b);
}

void add(float b) {
	float a = pop();
	push(a+b);
}

void sub(float b) {
	float a = pop();
	push(a-b);
}

void divd(float b) {
	float a = pop();
	if(a!=0){
		push(a/b);
	} else {
		printf("undefined");
	}
}

void print() {
	float val = pop();
	printf("%f\n",val);
}

void main() {
	float val;
	
	push(1);
	push(3);
	push(2);
	
	mult(2);
	print(); //4
	
	divd(3);
	sub(4);
	print(); //-3
	
	add(10);
	mult(2);
	divd(7);
	print(); //3.14
	
}
	