#include <stdio.h>
#include <stdlib.h>

struct treeNode {
	struct treeNode *left;
	struct treeNode *right;
	int key;
}

struct treeNode *root;

void addLeaf(int n) {
	struct treeNode *newLeaf;	//create new leaf
	newLeaf->left = NULL;
	newLeaf->right = NULL;
	newLeaf->key = n;
	
	if (count == 0) root->key = n;	//find location for new leaf
	else recurAdd(n);				//INCOMPLETE - create recursive function to find appropriate placement for new
}