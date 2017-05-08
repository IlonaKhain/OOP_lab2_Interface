#pragma once
#include "PushPopContainer.h"


class Stack : virtual public PushPopContainer {
	struct node
	{
		int data;
		struct node *next;
	};
		struct node *top;
	public:
		Stack() // constructure
		{
			top = NULL;
		}
		 bool push(int value); // to insert an element
		 int pop();  // to delete an element
		 int peek() const; //recognize element
		 string toString() const; // to show the stack
		 bool isEmpty() const;
		 int size() const;
		 ~Stack();
	};