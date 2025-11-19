// Fall2025ADTLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "LinkedList.h"
#include <iostream>
using namespace std; 

int main()
{
	LinkedList list1;

	list1.insertAtStart(5);
	list1.insertAtStart(2);
	list1.insertAtStart(1);
	list1.insertAtStart(7);
	//[7,1,2,5]

	list1.insertAtEnd(20);

	//[7,1,2,5,20]

	list1.insertAtIndex(2, 500);

	//[7,1,500,2,5,20]

	list1.deleteFirst();
	list1.deleteFirst();
	//[500,2,5,20]

	list1.deleteAtIndex(1);
	//[500,5,20]

	list1.deleteAtIndex(2);
	//[500,5]

	list1.printList();

	//cout << list1.searchForItem(10) << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
