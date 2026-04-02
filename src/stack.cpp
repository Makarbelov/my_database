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
		std::cout << "Стек пуст" << std::endl;
	}
	size--;
	return data[size];
}

Record Stack::Peek() {
	return data[size - 1];
}

void Stack::Print() {
	if (size > 0) {
		for (size_f i = 0; i < size; i++) {
			std::cout << data[i] << std::endl;
		}
	}
}