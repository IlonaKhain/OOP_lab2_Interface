#pragma once
#include "Deque.h"


class LinkedDeque : virtual public Deque {
	struct node
	{
		int data;
		struct node *next;
		struct node *prev;
	};
	struct node *top;
	struct node *tail;
	int count;
public:
	LinkedDeque ()// constructor
	{
		top = NULL;
		tail = NULL;
		count = 0;
	}
 bool pushFront(int value);
 bool pushBack(int value);
 int popFront();
 int popBack();
 int peekFront() const;
 int peekBack() const;
	string toString() const; 
	bool isEmpty() const;
	int size() const;
	~LinkedDeque();
};