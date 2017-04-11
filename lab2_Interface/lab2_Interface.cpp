// lab2_Interface.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Container.h"
#include "PushPopContainer.h"
#include "Stack.h"
#include "Queue.h"
#include "LinkedDeque.h"
#include "StaticArray.h"
#include<iostream>
using namespace std;

int main()
{
	Stack *s = new Stack();
	Queue *q = new Queue;
	LinkedDeque *ld = new LinkedDeque();
	StaticArray *sta = new StaticArray();
	
	int choice, value, number, choseStructure;
	int index;
	int i = 0;
	cout << "Input struct want to be tested: 1: Stack 2: queue 3: linked deque 4. static array" << endl;
	cin >> choseStructure;
	cout << "Input number of items ";	
	cin >> number;
	while ( i < number)
	{
		cout << "input item value ";
		cin >> value;
		s->push(value);
		q->push(value);
		ld->pushBack(value);
		sta->set(i, value);
		i++;
	}
	
	while (1)
	{
		switch (choseStructure)
		{
		case 1:
		{
			cout << "1:PUSHn2:POPn3:DISPLAY STACKn4:EXIT 5. size 6. isEmpty 7. peek"<<endl;
			cout << "nEnter your choice(1-7): ";
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
			default:
				cout << "Please enter correct choice(1-7)!!";
				break;
			}
			break;
		}
		case 2:
		{
			cout << "1:PUSH 2:POP 3:DISPLAY Queue 4:EXIT 5. size 6. isEmpty 7. peek"<<endl;
			cout << "nEnter your choice(1-7): ";
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
			default:
				cout << "Please enter correct choice(1-7)!!";
				break;
			}
		}
		case 3:
		{
			cout << "1:PUSH Front 2:POP Front 3:DISPLAY linked deque 4:EXIT 5. size 6. isEmpty 7. peek front 8. Push back 9. Pop back 10. Peek Back" << endl;
			cout << "nEnter your choice(1-10): ";
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
	}
		
	}
	return 0;
}
   
