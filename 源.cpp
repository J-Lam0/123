
#pragma once
#include<iostream>
#include"AStack.h"
using namespace std;
int main()
{
	int x;
	int size = 0;
	cout << "Please input the size of Array Stack: ";
	cin >> size;
	AStack<int> *head = new AStack<int>(size);
	cout << "0.Exit" << endl;
	cout << "1.clear" << endl;
	cout << "2.push" << endl;
	cout << "3.pop" << endl;
	cout << "4.topValue" << endl;
	cout << "5.length" << endl;
	while (cin >> x)
	{
		switch (x)
		{
		case 0:
			return 0;
		case 1:
			head->clear();
			head->print();
		case 2:
			int a;
			cout << "ÇëÊäÈë";
			cin >> a;
			head->push(a);
			head->print();
		case 3:
			cout << head->pop();
		case 4:
			cout << head->topValue();
		case 5:
			cout << head->length();
		}
	}
	system("PAUSE ");
}