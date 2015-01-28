#include <iostream>
#include <queue>

using namespace std;

struct node {
	int data;
	node *left;
	node *right;
};

node* newnode(int d) {
	node* temp = new node;
	temp->data = d;
	temp->left = temp->right = NULL;
	return temp;
}

void traverse(node* n) {
	queue<node*> q, next;
	q.push(n);

	while (!q.empty()) {
		node *p = new node;
		p = q.front();
		cout<<p->data<<" ";
		q.pop();

		if (p->left != NULL) 
			next.push(p->left);

		if (p->right != NULL)
			next.push(p->right);

		if (q.empty()) {
			cout<<endl;
			swap(q, next);
		}
	}
}

int main() {

	node* root = newnode(100);

	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left= newnode(4);

	root->left->right = newnode(6);
	root->right->left = newnode(91);
	root->right->right = newnode(1003);

	traverse(root);

	return 0;
}