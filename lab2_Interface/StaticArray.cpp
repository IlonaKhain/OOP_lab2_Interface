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
		return *array[index];
	}	
}
void StaticArray::set(int index, int value) {
	array[index] = &value;
	
}

int StaticArray::size() const
{
	int count = 0;
	int i = 0;
	while( array[i]!=NULL)
	{
		i++;
		count++;
	}
	return count;
}
string  StaticArray::toString() const {
	string str="";
	int s = size();
	int i=0;
	while(i <s)
	{
		
		str += to_string(*array[i]);
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