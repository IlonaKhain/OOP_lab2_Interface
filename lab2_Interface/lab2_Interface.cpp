// lab2_Interface.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Container.h"
#include "PushPopContainer.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedDeque.h"
#include "LinkedList.h"
#include "StaticArray.h"
#include<iostream>
using namespace std;

int main()
{
	int choice, value, number, choseStructure;
	int index;
	int i = 0;
	cout << "Input struct want to be tested: 1: Stack 2: queue 3: linked deque 4. static array 5. Linked list" << endl;
	cin >> choseStructure;
	cout << "Input number of items ";
	cin >> number;
	Stack *s = new Stack();
	Queue *q = new Queue;
	LinkedDeque *ld = new LinkedDeque();
	StaticArray *sta = new StaticArray(number);
	LinkedList *ll = new LinkedList();
	
	
	while ( i < number)
	{
		cout << "input item value ";
		cin >> value;
		s->push(value);
		q->push(value);
		ld->pushBack(value);
		sta->set(i, value);
		ll->push(value);
		i++;
	}
	
	while (1)
	{
		switch (choseStructure)
		{
		case 1:
		{
			cout << "1:PUSHn2:POPn3:DISPLAY STACKn4:EXIT 5. size 6. isEmpty 7. peek 8. Destrustor"<<endl;
			cout << "nEnter your choice(1-8): ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "input item value ";
				cin >> value;
				s->push(value);
				break;
			case 2:
				cout << "poped value is " << s->pop() << endl;
				break;
			case 3:
				cout << s->toString() << endl;
				break;
			case 4:
				return 0;
				break;
			case 5:
				cout << "size is " << s->size() << endl;
				break;
			case 6:
				cout << s->isEmpty() << endl;
				break;
			case 7:
				cout<<"Peeked element: " << s->peek() << endl;
				break;
			case 8:
				delete s;
				break;
			default:
				cout << "Please enter correct choice(1-7)!!";
				break;
			}
			break;
		}
		case 2:
		{
			cout << "1:PUSH 2:POP 3:DISPLAY Queue 4:EXIT 5. size 6. isEmpty 7. peek 8. Destructor"<<endl;
			cout << "nEnter your choice(1-8): ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "input item value ";
				cin >> value;
				q->push(value);
				break;
			case 2:
				cout << "poped value is " << q->pop() << endl;
				break;
			case 3:
				cout << q->toString() << endl;
				break;
			case 4:
				return 0;
				break;
			case 5:
				cout << "size is " << q->size() << endl;
				break;
			case 6:
				cout << q->isEmpty() << endl;
				break;
			case 7:
				cout << "Peeked element: " << q->peek() << endl;
				break;
			case 8:
				delete q;
				break;
			default:
				cout << "Please enter correct choice(1-7)!!";
				break;
			}
		}
		case 3:
		{
			cout << "1:PUSH Front 2:POP Front 3:DISPLAY linked deque 4:EXIT 5. size 6. isEmpty 7. peek front 8. Push back 9. Pop back 10. Peek Back 11. Destructor" << endl;
			cout << "nEnter your choice(1-11): ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "input item value ";
				cin >> value;
				ld->pushFront(value);
				break;
			case 2:
				cout << "poped value is " << ld->popFront() << endl;
				break;
			case 3:
				cout << ld->toString() << endl;
				break;
			case 4:
				return 0;
				break;
			case 5:
				cout << "size is " << ld->size() << endl;
				break;
			case 6:
				cout << ld->isEmpty() << endl;
				break;
			case 7:
				cout << "Peeked element: " << ld->peekFront() << endl;
				break;
			case 8:
				cout << "input item value ";
				cin >> value;
				ld->pushBack(value);
				break;
			case 9:
				cout << "poped value is " << ld->popBack() << endl;
				break;
			case 10:
				cout << "Peeked element: " << ld->peekBack() << endl;
				break;
			case 11:
				delete ld;
				break;
			default:
				cout << "Please enter correct choice(1-10)!!";
				break;
			}
			break;
		}
		case 4:
		{
			cout << "1: Set 2: Get 3:DISPLAY array 4:EXIT 5. size 6. isEmpty" << endl;
			cout << "nEnter your choice(1-6): ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				
				cout << "input item value ";
				cin >> value;
				cout << "input item index";
				cin >> index;
				sta->set(index,value);
				break;
			case 2:
				cout << "Input index of element wanted to  be got";
				cin >> index;
				cout << "got value is " << sta->get(index) << endl;
				break;
			case 3:
				cout << sta->toString() << endl;
				break;
			case 4:
				return 0;
				break;
			case 5:
				cout << "size is " << sta->size() << endl;
				break;
			case 6:
				cout << sta->isEmpty() << endl;
				break;
			
			
			default:
				cout << "Please enter correct choice(1-6)!!";
				break;
			}
			break;
		}
		case 5:
		{
			cout << "1:PUSH  2:POP 3:DISPLAY linked deque 4:EXIT 5. size 6. isEmpty 7. peek front 8. getByIndex 9. InsertAt 10. RemoveAt 11. Destructor" << endl;
			cout << "nEnter your choice(1-11): ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "input item value ";
				cin >> value;
				ll->push(value);
				break;
			case 2:
				cout << "poped value is " << ll->pop() << endl;
				break;
			case 3:
				cout << ll->toString() << endl;
				break;
			case 4:
				return 0;
				break;
			case 5:
				cout << "size is " << ll->size() << endl;
				break;
			case 6:
				cout << ll->isEmpty() << endl;
				break;
			case 7:
				cout << "Peeked element: " << ll->peek() << endl;
				break;
			case 8:
				cout << "input item index ";
				cin >> index;
				cout<< "got item "<< ll->get (index)<<endl;
				break;
			case 9:
				cout << "input item value ";
				cin >> value;
				cout << "input item index ";
				cin >> index;
				 ll->insertAt(index,value);
				break;
			case 10:
				cout << "input item index ";
				cin >> index;
				cout << "Removed item: " << ll->removeAt(index) << endl;
				break;
			case 11:
				delete ll;
				break;
			default:
				cout << "Please enter correct choice(1-10)!!";
				break;
			}
			break;
		}
	}
		
	}
	return 0;
}
   
