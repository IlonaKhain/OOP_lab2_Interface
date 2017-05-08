#include "stdafx.h"
#include "StaticArray.h"

#include<iostream>
using namespace std;

int StaticArray::get(int index) const {
	if (index >= size() || index < 0)
	{
		cout << "element with such index doesn't exist";
		return NULL;
	}
	else
	{
		return array[index];
	}	
}
bool StaticArray::set(int index, int value) {
	
	if (index >= size() || index < 0)
	{
		cout << "element with such index doesn't exist";
		return NULL;
	}
	array[index] = value;
	return true;	
}

int StaticArray::size() const
{
	return Number;
}
string  StaticArray::toString() const {
	string str="";
	int s = size();
	int i=0;
	while(i <s)
	{	
		str += to_string(array[i]);
		str += ", ";
		i++;
	}
	return str;
}
bool StaticArray::isEmpty() const {
	if (size() == 0) {
		return true;
	}
	else return false;
}