#include <iostream>
#include <queue>
#include <list>
#include <map>

using namespace std;

struct node {
	int data;
	node *left;
	node *right;
};

int max(int a, int b) {
	return a>b?a:b;
}

map<node*, bool> m;

node* newnode(int d) {
	node *temp = new node;
	temp->data = d;
	temp->left = temp->right = NULL;
	return temp;
}

int ctr = 0;

void traverse(node* s) {
	queue<node*> q, next;
	q.push(s);

	while (!q.empty()) {
		node *p = new node;
		p = q.front();
		cout<<p->data<<" ";
		ctr++;
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

int getheight(node *n) {
	if (n == NULL) return 0;
	else return max(getheight(n->left), getheight(n->right)) + 1;
}

int main() {

	node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);

	root->left->left = newnode(4);

	root->left->right = newnode(5);
	root->right->right = newnode(6);
	root->right->right->right = newnode(7);

	traverse(root);
	cout<<getheight(root)<<endl;
	cout<<ctr<<endl;
	return 0;
}