#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	
	int data;

	struct Node* left;
	struct Node* right;

} Node;


Node* root = NULL;

Node* createNewNode(int newData) {

	Node* newNode = NULL;

}