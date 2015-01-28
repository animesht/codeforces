#include <iostream>

using namespace std;

struct node {
	node *next;
	int v;
};

void reverse(node *head) {
	node *next;
	node *current = head;
	node *prev = NULL;

	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
}

void printlist(node *head) {
	cout<<head->v<<endl;
	if (head->next!=NULL) {
		printlist(head->next);
	}
}

int main() {

	node a,b,c,d,e,f;
	a.v = 1; b.v = 2; c.v = 3; d.v = 4, e.v = 5, f.v = 6;
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = &e;
	e.next = &f;
	f.next = NULL;

	printlist(&a);
	reverse(&a);
	printlist(&f);

	return 0;
}

