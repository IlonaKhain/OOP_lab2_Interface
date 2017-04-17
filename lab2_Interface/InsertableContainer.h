#pragma once
#include "IndexedContainer.h"
#include "Deque.h"

class InsertableContainer : virtual public IndexedContainer, virtual public Deque {
public:
	virtual bool insertAt(int index, int value)=0;
	virtual int removeAt(int index)=0;
	virtual ~InsertableContainer() {};
};