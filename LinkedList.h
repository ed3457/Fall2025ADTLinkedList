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
	void printList();
	LinkedList();

};

