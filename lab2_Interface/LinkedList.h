#pragma once
#include "PushPopContainer.h"
#include "InsertableContainer.h"
#include "Stack.h"


class LinkedList : virtual public PushPopContainer, virtual public InsertableContainer {
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *top;
	struct node *tail;
public:
	LinkedList() {
		top = NULL;
		tail = NULL;
	};
	 bool push(int value);
	 bool pushFront(int value) { return false; };
	 bool pushBack(int value) { return push(value); };
	int pop();
	int popBack() { return pop(); };
	int popFront() { return NULL; };
	int peek() const;
	int peekBack() const { return peek(); };
	int peekFront() const { return NULL; };
	int get(int index) const ;
    bool set(int index, int value) { return insertAt(index, value); };
	int removeAt(int index);
	string toString() const; // to show the stack
	bool isEmpty() const;
	int size() const;
	bool insertAt(int index, int value);
	virtual ~LinkedList();
};