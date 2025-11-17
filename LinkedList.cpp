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

void LinkedList::insertAtEnd(int newelement)
{
	// step1: create a temp pointer that points to the head
	node* temp = head;
	// step2: loop while the temp->next is not NULL (stop at the last node)
	while (temp->next != nullptr)
	{
	  temp = temp->next; // move to the next node 
	}

	//step3: create a new node
	node* newNode = new node();
	newNode->info = newelement;
	newNode->next = nullptr;

	//step4: make the last node next pointer point to the newnode
	temp->next = newNode;

	//step5: increment the size of the linkedlist
	size++;

	//TODO: add a tail pointer 
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

bool LinkedList::searchForItem(int item)
{
	// step1: create a temp pointer that points to the head
	node* temp = head;
	// step2: loop while the temp is not NULL
	while (temp != nullptr)
	{
		if (temp->info == item)
			return true;
		temp = temp->next; // move to the next node 
	}

	return false;
}

int LinkedList::sumTheList()
{
	int sum = 0;
	// step1: create a temp pointer that points to the head
	node* temp = head;
	// step2: loop while the temp is not NULL
	while (temp != nullptr)
	{
		sum += temp->info;
		temp = temp->next; // move to the next node 
	}

	return sum;
}

int LinkedList::getSize()
{
	return size;
}

bool LinkedList::isEmpty()
{
	return size==0;
	//return head == nullptr;
}

LinkedList::LinkedList()
{
	size = 0;
	head = nullptr;

}
