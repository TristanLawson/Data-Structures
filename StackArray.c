#include <stdio.h>
#include <stdlib.h>

#define SIZE 256
float stack[SIZE];
int top = -1;

void push(float n){
	if (top < SIZE-1) stack[++top] = n;
	else printf("ERROR : stack is full\n");
}

int pop() {
	if (top > -1) {
		float r = stack[top--];
		return r;
	} else printf("ERROR : stack is empty\n");
	return 0;
}

void main() {
	float val;
	
	push(1);
	push(3);
	push(2);
	
	val = pop();
	
	printf("value at top is : %f\n",val);
}
	