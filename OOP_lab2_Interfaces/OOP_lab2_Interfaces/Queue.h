#pragma once
#include "PushPopContainer.h"


class Queue : virtual public PushPopContainer {
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *top;
	struct node *tail;
public:
	virtual bool push(int value);
	virtual int pop();
	int peek() const;
	string toString() const; // to show the stack
	bool isEmpty() const;
	int size() const;
	virtual ~Queue();
};