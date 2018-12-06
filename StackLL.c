#include <stdio.h>
#include <stdlib.h>

typedef struct stack_node {
	struct stack_node* next;
	int value;
} stkNode;

stkNode *head = NULL;

void push(int value) {
	stkNode *newNode = malloc(sizeof(stkNode));
	newNode->value = value;
	newNode->next = head;
	head = newNode;
}

int pop() {
	if(head != NULL) {
		int value = head->value;
		stkNode *rem;
		rem = head;
		head = head->next;
		free(rem);
		return value;}
	else return 0;
}

int *tos() { return &head->value;}

void main() {
	int *x,y=6;
	push(5);
	push(2);
	push(y);
	
	x = tos();
	printf("%d ",*x);
	pop();
	
	x = tos();
	
	push(22 + *x);
	

	pop();
	printf("%d ",*x);
}

/*
typedef struct _stk_node {
     struct _stk_node   *next;
     int                           nodval;
} StkNode;

StkNode  *head = NULL;

 void push (int n)  {
         StkNode *p = malloc(sizeof(StkNode));
         p->nodval = n;
         p->next = head;
         head = p;
 }

int  pop (void)   {
         StkNode *p = head;
         int    rslt = p->nodval;
         head = p->next;
         return rslt;
 }

int  *tos (void)  {       return &(head->nodval); }

 

void main() {

int *x, y = 6;
push(5);
push(2);
push(y);
x = tos();
printf("%d ", *x);
pop();
x = tos();
pop();
push(22+ *x);
printf("%d ", *x);
}
*/