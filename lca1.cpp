#include <iostream>

node struct {
	int data;
	node *left;
	node *right;
};

node* lca(node* root, node *p, node *q) {
	if (root==NULL || p == NULL || q == NULL) return NULL;
	if (min(p->data, q->data)>root) 
		return lca(root->right, p, q);
	else if (max(p->data, q->data) < root) 
		return lca(root->left, p, q);
	else return root;
}