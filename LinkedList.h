#pragma once
#include <iostream>
using namespace std;
struct node
{
	int info;

	node* next;

};


class LinkedList
{
private:
	int size; // how many nodes we have
	node* head; // pointer to the first node
    
public:
	void insertAtStart(int newelement);
	void insertAtEnd(int newelement);
	void insertAtIndex(int index, int newelement);
	void deleteAtStart();
	void deleteAtIndex(int index);
	//void deleteLast(); lab 
	void printList();
	bool searchForItem(int item); 
	int sumTheList();
	int getSize();
	bool isEmpty(); 
	LinkedList();

};

