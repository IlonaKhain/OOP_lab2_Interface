#include "stdafx.h"
#include "Container.h"
#include "Stack.h"

#include<iostream>
using namespace std;
bool Stack::push(int value)
{
	//int value;
	struct node *ptr= new node;
	//cout << "nPUSH Operationn";
	//cout << "Enter a number to insert: ";
	//cin >> value;
	//ptr = new node;
	ptr->data = value;
	ptr->next = NULL;
	if (top != NULL)
		ptr->next = top;
	top = ptr;
	return true;
	//cout << "nNew item is inserted to the stack!!!";

}

// POP Operation
int Stack::pop()
{
	struct node *temp;
	if (top == NULL)
	{
		cout << "nThe stack is empty!!!";
		//exit(1);
		return NULL;
	}
	temp = top;
	top = top->next;
	//cout << "nPOP Operation........nPoped value is " << temp->data<<endl;	
	return temp->data;
	delete temp;
}
int Stack::peek() const
{
	if (top == NULL)
	{
		cout << "nThe stack is empty!!!";
		exit(1);
	}
	return top->data;

}
// Show stack
string Stack::toString() const
{
	string str = "  The stack is ";
	struct node *ptr1 = top;
	
	while (ptr1 != NULL)
	{
		str += to_string(ptr1->data) + " -> ";
		ptr1 = ptr1->next;
	}
	return str;
}
int Stack::size() const
{
	int count = 0;
	struct node *temp = top;	
	count++;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count-1;
}
bool Stack::isEmpty() const {
	if (size() == 0) {
		return true;
	}
	else return false;
		
}
Stack::~Stack()
{/*
	struct node *temp = top;
	while (temp != NULL)
	{
		delete temp;
		temp = temp->next;
	}*/
	cout << "~Stack()" << endl;
}

