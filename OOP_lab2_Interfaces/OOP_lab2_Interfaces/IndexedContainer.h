#pragma once

#include "Container.h"
class IndexedContainer : virtual public Container {
public:
	virtual int get(int index) const=0;
	virtual bool set(int index, int value)=0;
	virtual ~IndexedContainer() {};
};