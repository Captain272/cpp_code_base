#include <iostream>
using namespace std;

struct node
{
	int val;
	node *prev;
	node *next;
};

node *start;

void insert(int x)
{
	node *t = start;
	if (start != NULL)
	{
		while (t->next != NULL)
		{
			t = t->next;
		}
		node *n = new node;
		t->next = n;
		n->prev = t;
		n->val = x;
		n->next = NULL;
	}
	else
	{
		node *n = new node;
		n->val = x;
		n->prev = NULL;
		n->next = NULL;
		start = n;
	}
}

void remove(int x)
{
	node *t = start;
	while (t->val != x)
	{
		t = t->next;
	}
	t->prev->next = t->next;
	t->next->prev = t->prev;
	delete t;
}



void show()
{
	node *t = start;
	while (t != NULL)
	{
		cout << t->val << "\t";
		t = t->next;
	}
}



int main()
{
	int choice, x;
	do
	{
		cout << "\n1. Insert";
		cout << "\n2. Delete";
		cout << "\n3. Forward print";
		cout << "\n\nEnter you choice : ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\nEnter the element to be inserted : ";
			cin >> x;
			;
			insert(x);
			break;
		case 2:
			cout << "\nEnter the element to be removed : ";
			cin >> x;
			remove(x);
			break;
		case 3:
			show();
			break;

			break;
		}
	} while (choice != 0);

	return 0;
}
