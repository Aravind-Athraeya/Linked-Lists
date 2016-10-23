#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include <queue>
using namespace std;


typedef struct ListNode
{
	int value;
	struct ListNode *Next;
	struct ListNode *Prev;
}node;



void push(node** head_ref, int new_data)
{
	/* allocate node */
	node* new_node = new node();

	/* put in the data  */
	new_node->value = new_data;

	/* link the old list off the new node */
	new_node->Next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}



int CountList(node *nodex)
{
	int count = 0;
	while (nodex != NULL)
	{
		count = count + 1 ;
		nodex = nodex->Next;
	}

	return count;
}

node* RemoveDuplicates(node* head) {

	//	if (head == NULL || K == 1) return NULL;

	node *prev = head;
	node *nexter;

	while (prev->Next != NULL)
	{
		if (prev->value == prev->Next->value)
		{
			nexter = prev->Next->Next;
			free(prev->Next);
			prev->Next = nexter;


		}
		else {
		prev = prev->Next;
	}
}

	return head;
}





void printList(node *nodex)
{
	while (nodex != NULL)
	{
		cout << nodex->value;
		nodex = nodex->Next;
	}
}





int main()
{
	node *head = NULL;
	push(&head, 11);
	//push(&head, 5;
	push(&head, 11);
	push(&head, 11);
	push(&head, 23);
	push(&head, 43);
	push(&head, 43);
	push(&head, 60);
	node * nsew = RemoveDuplicates(head);
	printList(nsew);
	return 0;

}

