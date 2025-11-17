#include "LinkedList.h"

void LinkedList::insertAtStart(int newelement)
{
	// step1: create a new node 
	node * newNode= new node();
	newNode->info = newelement;
	newNode->next = nullptr;
	// step2: make the next pointer inside the newnode equal to the head
	newNode->next = head;
	//step3: make the head point to the new node
	head = newNode;
	// step4: increment the size of the linkedlist
	size++;

}

void LinkedList::printList()
{
	// step1: create a temp pointer that points to the head
	node* temp = head;
	// step2: loop while the temp is not NULL
	while (temp != nullptr)
	{
		cout << temp->info << endl;// prints the info inside the current node
		temp = temp->next; // move to the next node 
	}

}

LinkedList::LinkedList()
{
	size = 0;
	head = nullptr;

}
