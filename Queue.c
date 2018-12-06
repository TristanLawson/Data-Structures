#include <stdio.h>
#include <stdlib.h>

struct element{
	struct element *next;
	int order;
};

struct element *end = NULL, *front = NULL;
int count = 0;

void newOrder(int val) {
	struct element *new = malloc(sizeof(struct element));
	new->next = NULL;
	new->order = val;
	
	if(count == 0) {
		front = new;
		end = new;
	} else {
		end->next = new;
		end = new;
	}
	count++;
}

void deleteOrder() {
	if(count != 0) {
		struct element *temp;
		temp = front;
		front = front->next;
		free(temp);
		if(front == NULL) end = NULL;
		count--;
	}
}

void printOrder() {
	printf("next order : %d\n", front->order);
}

void main() {
	newOrder(1);
	newOrder(3);
	newOrder(4);
	
	printOrder();
	deleteOrder();
	
	printOrder();
	deleteOrder();
	
	newOrder(2);
	
	printf("%d orders in queue\n",count);
}