#include "stdafx.h"
#include "LinkedList.h"
#include<iostream>
using namespace std;

bool LinkedList::push(int value) {
	struct node *temp = new node;	
	temp->data = value;
	temp->next = NULL;
	if (top == NULL) {
		top = temp;
	}
	else {
		tail->next = temp;
	}
	tail = temp;
	return true;

 }

int LinkedList::pop() {
	struct node *temp;	
		if (top == NULL)
		{
			cout << "nThe list is empty!!!";
			return NULL;
		}
		if (top == tail)
		{
			//cout << "nPOP Operation........nPoped value is " << 
			return tail->data;		
			delete top;
			top = NULL;
			tail = NULL;	
		}
		node *current = top;
		while (current->next != tail)
		{
			current = current->next;
		}
	//	cout << "nPOP Operation........nPoped value is " << 
		int answer = tail->data;
		tail = current;
		tail->next = NULL;
		
		return answer;	
		delete current;
		
 }
int LinkedList::peek() const {
	struct node *temp;
	if (top == NULL)
	{
		cout << "nThe list is empty!!!";
		return NULL;
	}
	if (top == tail)
	{
		//cout << "nPOP Operation........nPoped value is " << 
		return tail->data;		
	}
	node *current = top;
	while (current->next != tail)
	{
		current = current->next;
	}
	//	cout << "nPOP Operation........nPoped value is " << 
	return tail->data;	
}

string LinkedList::toString() const {
	string str = "  The list is ";
	struct node *ptr1 = top;
	while (ptr1 != NULL)
	{
		str += to_string(ptr1->data) + " -> ";
		ptr1 = ptr1->next;
	}
	return str;
}

bool LinkedList::isEmpty() const {
	if (size() == 0) {
		return true;
	}
	else return false;
}
int LinkedList::size() const {
	int count = 0;
	struct node *temp = top;
	count++;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return count - 1;
}
LinkedList::  ~LinkedList() {
	/*struct node *temp = top;
	while (temp != NULL)
	{
		delete temp;
		temp = temp->next;
	}*/
	cout << "~linkedList()" << endl;
}
bool LinkedList :: insertAt(int index, int value)
{
	int i;
	struct node *temp = top;
	for (i = 1; i<index-1; i++)
	{
		temp = temp->next;
	}
	struct node *newnode = new node();
	newnode->data = value;

	newnode->next = temp->next;
	
	temp->next = newnode;


	return true;
}
int LinkedList::removeAt(int index) {
	node *current = top;
	node *prev=new node;
	int count = 1;
	while (count != index)
	{
		prev = current;
		current = current->next;
		count++;
	}
	return current->data;
	if (current == top)
	{		
		top = top->next;
		
	}
	else if(current == tail)
	{		
		tail = prev;
		tail->next = 0;
	}
	else
	{
		prev->next = current->next;
	}
	//	cout << "nPOP Operation........nPoped value is " << 
	return current->data;
	delete current;
	//tail = current;
	//tail->next = NULL;
}
int LinkedList::get(int index) const
{
	if (index<0 || index>size())
	{
		cout << "Index is out of range";
		return NULL;
	}
	node *current = top;
	int count = 1;
	while (count != index)
	{		
		current = current->next;
		count++;
	}
	return current->data;
}