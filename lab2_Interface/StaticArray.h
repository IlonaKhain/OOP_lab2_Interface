#pragma once
#include "IndexedContainer.h"

class StaticArray : virtual public IndexedContainer {
	
	int *array[10000];
	
public:
	StaticArray()
	{
		for (int i=0; i<10000; i++)
		{
			array[i] = NULL;
		}
		
	}
	int get(int index) const;
	void set(int index, int value);
	string toString() const; // to show the stack
	bool isEmpty() const;
	int size() const;
	~StaticArray() {};
};