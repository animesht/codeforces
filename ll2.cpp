#include <iostream>

using namespace std;

struct node {
	int data;
	node *next;
};

node* newnode (int d) {
	node *temp = new node;
	temp->data = d;
	temp->next = NULL;
	return temp;
}
void insert(node *head, int d) {
	node *temp = new node;
	temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new node;
	temp->next->data = d;
	temp->next->next = NULL;
}

void insertat(node *head, int pos, int d) {
	node *temp = new node;
	temp = head;
	int ctr = 1;
	for (int ctr = 2; ctr<pos; ctr++) 
		if(temp->next != NULL) 
			temp = temp->next;
	node *store = temp->next;
	temp->next = newnode(d);
	temp->next->next = store;
}

node* reverse (node* head) {
	node *current = head;
	node *next = new node;
    node *prev = NULL; 

    while (current != NULL) {
    	next = current->next;
    	current->next = prev;
    	prev = current;
    	current = next;
    }	

    return prev;
}

bool detectcycle(node *head) {
	node *slow = new node;
	node *fast = new node;
	slow = fast = head;
	do {
		if (slow->next == NULL || fast->next->next == NULL) return false;
		slow = slow->next;
		fast = fast->next->next;
	} while (slow != fast && slow != fast->next);

	return true;
}

node* findcyclic(node *head) {
	if(detectcycle(head)) {
		node *slow = new node;
		node *fast = new node;
		slow = fast = head;
		do {
			slow = slow->next;
			fast = fast->next->next;
		} while (slow != fast->next && slow != fast);

		slow = head;
		
		while (slow != fast) {
		slow = slow->next;
		fast = fast->next;
		}
		return slow;
	}

	else {
		cout<<"No cycle found.\n";
		return newnode(-1);
	}
}

void print(node *head) {
	if (!detectcycle(head)) {
	node *temp = new node;
	temp = head;
	while (temp != NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
	}
	else
		cout<<"Cycle found\n";
}

int main() {
	node *root = newnode(1);
	insert(root, 2);
	insert(root, 4);
	insert(root, 5);
	insert(root, 7);
	insert(root, 10);

	insertat(root, 3, 100);
	insertat(root, 5, 999);
    
    root->next->next->next->next->next->next->next->next = root->next;
   // node *n = findcyclic(root);
    //cout<<n->data<<"is the cyclic node\n";

	print(root);
	print(reverse(root));
}