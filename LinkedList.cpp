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

void LinkedList::insertAtIndex(int index, int newelement)
{
	//step0: check for the index 
	if (index <0 || index>size - 1)
		throw 0;// index out of range 

	if (index == 0)
	{
		insertAtStart(newelement);
		return;
	}

	// step1: create a temp pointer that points to the head
	node* temp = head;
	// step2: loop until you get to index-1 
	int counter = 0;
	while (counter!=index-1)
	{
		temp = temp->next; // move to the next node 
		counter++;
	}

	// step3: create a new node 
	node* newNode = new node();
	newNode->info = newelement;
	newNode->next = nullptr;
	// step4: adjust the pointer 
	newNode->next = temp->next;
	temp->next = newNode;
	// step5: increment the size
	size++;


}

void LinkedList::deleteFirst()
{
	// step0: validation
	if (isEmpty())
	throw 1; // list is empty 

	// step1: create a pointer to the head 
	node* temp = head;

	// step2: move the head to head->next
	head = head->next;

	// step3: delete the temp node
	delete temp; 

	// step4: decrease the size
	size--;
}

void LinkedList::deleteAtIndex(int index)
{
	//step0: check for the index 
	if (index <0 || index>size - 1)
		throw 0;// index out of range 

	if (index == 0)
	{
		deleteFirst();
		return;
	}

	// step1: create a temp pointer that points to the head
	node* temp = head;

	// step2: loop until you get to index-1 
	int counter = 0;
	while (counter != index - 1)
	{
		temp = temp->next; // move to the next node 
		counter++;
	}
    // step3: create a pointer to the node we want to delete
	node* temp2 = temp->next;

	// step4: arrange the pointers
	//temp->next = temp->next->next;
	temp->next = temp2->next;

	// step5: delete temp2
	delete temp2;

	// step6: decrease the size
	size--;

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
