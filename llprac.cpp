#include <iostream>

using namespace std;

struct node {
	int data;
	node *next;
};

node* newnode(int d) {
	node *temp = new node;
	temp->data = d;
	temp->next = NULL;
	return temp;
}

void traverse (node* n) {
	while (n != NULL) {
		cout<<n->data<<" ";
		n = n->next;
	}
}

bool detectcycle (node *n) {
	node *slow = n;
	node *fast = n;

	while (slow->next != NULL && fast->next->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast || slow == fast->next) return true;
	}
	return false;
}

int loopstart(node *n) {
	if (detectcycle(n)) {
		node *slow = n;
		node *fast = n;

	while (slow != fast) {
		slow = slow->next;
		fast = fast->next->next;
	}
	
	slow = n;
	
	while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
	}
	return slow->data;
	}

	else return -1;
}

int main() {
	node *p = newnode(1);
	p->next = newnode(2);
	p->next->next = newnode(3);
	p->next->next->next = newnode(4);
	p->next->next->next = p->next;
	//traverse(p);
	cout<<endl<<detectcycle(p)<<endl;
	cout<<loopstart(p)<<endl;
}

