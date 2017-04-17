#include "stdafx.h"
#include "Queue.h"

#include<iostream>
using namespace std;

int Queue::pop()
{
	struct node *temp;

	if (top == NULL)
	{
		cout << "The queue is empty!!!";
		//exit(1);
		return NULL;
	}
	temp = top;
	top = top->next;
	//cout << "POP Operation........Poped value is " << temp->data;
	return temp->data;
	delete temp;
	
}
int Queue::peek() const
{
	if (top == NULL)
	{
		cout << "The queue is empty!!!";
		//exit(1);
		return NULL;
	}
	return top->data;
}
	
bool Queue::push(int value)
{
	struct node *temp = new node;
	//cout << "nPUSH Operationn";
	//cout << "Enter a number to insert: ";
	//cin >> value;
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
	
string Queue::toString() const
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
int Queue::size() const
{
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
bool Queue::isEmpty() const {
	if (size() == 0) {
		return true;
	}
	else return false;

}
Queue:: ~Queue() {
	/*struct node *temp = top;
	while (temp != NULL)
	{
		delete temp;
		temp = temp->next;
	}*/
	cout << "~queue()" << endl;
}


