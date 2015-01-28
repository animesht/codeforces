#include <iostream>

using namespace std;

struct node {
	int data;
	node *next;
};

void insertatend(node *head, int d) {
	node *temp = new node;
	temp->data = d;
	temp->next = NULL;
	if (head == NULL)
		head = temp;
	else {
		node *last = new node;
		last = head;
		while (last->next != NULL) 
			last = last->next;
		last->next = temp;
	}
}

void printlist(node *head) {
	node *temp = new node;
	temp = head;
	while (temp->next!=NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main() {

	node *n = new node;
 	n->data = 1;
	insertatend(n, 2);

	printlist(n);
	
	return 0;
}