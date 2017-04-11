#pragma once
#include <iostream>
#include <string>
using namespace std;


class Container {
public:
	virtual int size() const = 0;
	virtual bool isEmpty() const = 0;
	virtual string toString() const = 0;
	virtual ~Container() {};
};