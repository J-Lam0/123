#pragma once
#include"Stack.h"
#include<assert.h>
#include<iostream>
using namespace std;
template <typename E> class AStack : public Stack<E> {
private:
	int maxSize;           
	int top;          
	E *listArray;        

public:
	AStack(int size = 10000)  
	{
		maxSize = size; top = 0; listArray = new E[size];
	}

	~AStack() { delete[] listArray; } 

	void clear() { top = 0; }      

	void push(E it) {       
		assert(top < maxSize, "Stack is full");
		listArray[top++] = it;
	}

	E pop() {            
		assert(top >= 0, "Stack is empty");
		return listArray[--top];
	}

	E topValue() const {   
		assert(top >= 0, "Stack is empty");
		return listArray[top - 1];
	}

	int length() const { return top; } 

	void print()  const {
		for (int i = top; i != 0; ) cout << listArray[--i] << "\t";
		cout << "\n";
	}
};

