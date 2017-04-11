#include "stdafx.h"
#include "LinkedDeque.h"

bool LinkedDeque:: pushFront(int element)
{
	// Create a new node
	node* tmp = new node();
	tmp->data = element;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (isEmpty()) {
		// Add the first element
		top = tail = tmp;
	}
	else {
		// Prepend to the list and fix links
		tmp->next = top;
		top->prev = tmp;
		top = tmp;
	}

	count++;
	return true;
}

int LinkedDeque::popFront()
{
	if (isEmpty()) {
		//throw new DequeEmptyException();
		cout << "Deque is empty";
		return NULL;
	}

	//  Data in the top node
	int ret = top->data;

	// Delete the top node and fix the links
	node* tmp = top;
	if (top->next != NULL)
	{
		top = top->next;
		top->prev = NULL;
	}
	else
	{
		top = NULL;
	}
	count--;
	delete tmp;

	return ret;
}

bool LinkedDeque:: pushBack(int element)
{
	// Create a new node
	node* tmp = new node();
	tmp->data = element;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (isEmpty()) {
		// Add the first element
		top = tail = tmp;
	}
	else {
		// Append to the list and fix links
		tail->next = tmp;
		tmp->prev = tail;
		tail = tmp;
	}

	count++;
	return true;
}

int LinkedDeque:: popBack()
{
	if (isEmpty()) {
		cout<<"deque is empty"<<endl;
		return NULL;
	}
	
		//  Data in the tail node
		int ret = tail->data;

		// Delete the top node and fix the links
		node* tmp = tail;
		if (tail->prev != NULL)
		{
			tail = tail->prev;
			tail->next = NULL;
		}
		else
		{
			tail = NULL;
		}
		delete tmp;
		return ret;		
}

int LinkedDeque:: peekFront() const
{
	if (isEmpty())
		return NULL;

	return top->data;
}

int LinkedDeque:: peekBack() const
{
	if (isEmpty())
		return NULL;

	return tail->data;
}

int LinkedDeque :: size() const
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

bool LinkedDeque:: isEmpty() const
{ 
	if (size() == 0) {
		return true;
	}
	else return false;
}
string LinkedDeque :: toString() const
{
	string str = "  The linked deque is ";
	struct node *ptr1 = top;

	while (ptr1 != NULL)
	{
		str += to_string(ptr1->data) + " -> ";
		ptr1 = ptr1->next;
	}
	return str;
}
LinkedDeque:: ~LinkedDeque() {
	struct node *temp = top;
	while (temp != NULL)
	{
		delete temp;
		temp = temp->next;
	}

}
