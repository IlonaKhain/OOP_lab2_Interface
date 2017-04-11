#pragma once
#include "Container.h"


class PushPopContainer : virtual public Container {
public:
	virtual bool push(int value)=0;
	virtual int pop()=0;
	virtual int peek() const=0;
	virtual ~PushPopContainer() {};
};