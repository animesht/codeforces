#include <iostream>
#include <queue>

using namespace std;

int min(int a, int b) {
	return a<b?a:b;
}

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

node* lca (node* root, node *p, node *q) {
	if (root==NULL || p == NULL || q == NULL) return NULL;
	if (max(p->data, q->data) < root->data) 
		return lca(root->left, p, q);
	else if (min(p->data, q->data) > root->data) 
		return lca(root->right, p, q);
	return root;
}

void traverse (node* n) {
	queue<node*> q, next;

	q.push(n);

	while(!q.empty()) {
		node *p = new node;
		p = q.front();
		cout<<p->data<<" ";
		q.pop();

		if(p->left != NULL)
			next.push(p->left);
		if(p->right != NULL)
			next.push(p->right);

		if(q.empty()) {
			cout<<endl;
			swap(q, next);
		}
	}
}

int main() {
	node* root = newnode(6);
	root->left = newnode(2);
	root->right = newnode(12);
	root->left->left = newnode(1);
	root->left->right = newnode(4);
	
	traverse(root);
	node* t = lca (root, root->left, root->left->right);
	cout<<t->data;
}