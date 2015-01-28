#include <iostream>
#include <queue>

using namespace std;

struct node {
	node *left;
	node *right;
	int data;
};

node* newnode(int d) {
	node *temp = new node;
	temp->left = NULL;
	temp->right = NULL;
	temp->data = d;
	return temp;
}

void bfs(node *n) {
	if (n==NULL) return;
	queue<node*> q, next;
	q.push(n);
	int ctr;
	
	while(!q.empty()) {
		node *p = q.front();
		cout<<p->data<<" ";
		q.pop();
		if (p->left!=NULL)
			next.push(p->left);
		if (p->right!=NULL)
			next.push(p->right);
	
	if(q.empty()) {
		cout<<endl;
		swap(q, next);
	}
	
	}

}

int main() {
	node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	root->right->left = newnode(6);
	root->right->left->right = newnode(7);

	bfs(root);
	return 0;
}