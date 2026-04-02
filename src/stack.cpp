#include "../include/stack.h"
#include<iostream>
Stack::Stack(int capacity) {
	this->capacity = capacity;
	size = 0;
	data = new Record[capacity];
}
Stack::~Stack() {
	delete[] data;
}
void Stack::Push(Record r) {
	data[size] = r;
	size++;
}

bool Stack::IsEmpty() {
	return size == 0;
}

Record Stack::Pop() {
	if (IsEmpty()) {
		std::cout << "Stack Pust!" << std::endl;
		return Record();
	}
	size--;
	return data[size];
}

Record Stack::Peek() {
	data[size - 1].Print();
	return data[size - 1];
}

void Stack::Prints() {
	if (!IsEmpty()) {
		for (int i = 0; i < size; i++) {
			data[i].Print();
		}
	}
	else {
		std::cout << "Stack Pust!" << std::endl;
	}
}