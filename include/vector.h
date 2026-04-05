#pragma once
#include "../include/record.h"

class Vector {
private:
	int size = 0;
	int capacity = 1;
	Record* mas;
public:
	Vector();
	Record PopBack();
	Record& operator[](int index);
	int Size();
	void Print();
	void push_back(Record a);
	~Vector();

};