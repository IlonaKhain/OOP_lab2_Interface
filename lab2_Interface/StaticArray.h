#pragma once
#include "IndexedContainer.h"

class StaticArray : virtual public IndexedContainer {
	
	int array[10000];
	int Number;
public:
	StaticArray(int number)
	{
		for (int i=0; i<number; i++)
		{
			array[i] = 0;
		}
		Number = number;
		
	}
	int get(int index) const;
	bool set(int index, int value);
	string toString() const; // to show the stack
	bool isEmpty() const;
	int size() const;
	~StaticArray() {};
};