#include <stdio.h>
#include <stdlib.h>

#define max 4

int queue[max];
int front = 0;
int end = -1;
int length = 0;


void add(int value) {
	if (length < max) {
		queue[++end % max] = value;
		end = end % max;
		length++;
	} else {
		printf("queue is full\n");
	}
}

int rem() {
	if (length > 0) {
		int value = queue[front++];
		front = front % max;
		length--;
		return value;
	} else {
		printf("queue is empty\n");
		return 0;
	}
}

void print() {
	int value = rem();
	if (value != 0) printf("%d\n",value);
}

void values() {
	printf("\tfront %d : end %d : length %d\n",front,end,length);
}

void main() {
	add(1);
	values();
	add(2);
	values();
	add(3);
	values();
	add(4);
	values();
	add(5);
	values();
	
	print();
	values();
	
	add(6);
	values();
	add(7);
	values();
	
	for(int i=0; i<5; i++) {
		print();
		values();
	}
}