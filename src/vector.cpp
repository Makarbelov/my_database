#include "../include/record.h"
#include "../include/vector.h"

Vector::Vector() {
	mas = new Record[capacity];
}

void Vector::push_back(Record a) {
	if (size >= capacity) {
		capacity *= 2;
		Record* nmas = new Record[capacity];
		for (size_t i = 0; i < size; i++) {
			nmas[i] = mas[i];
		}
		delete[] mas;
		mas = nmas;
	}
	mas[size] = a;
	size++;
}

Record Vector::PopBack() {
	size--;
	return mas[size];
}

int Vector::Size() {
	return size;
}

Record& Vector::operator[](int index) {
	if (index > size){
		throw "Vihod za masiv";
	}
	return mas[index];
}

void Vector::Print() {
	for (size_t i = 0; i < size; i++) {
		mas[i].Print();
	}
}

Vector::~Vector(){
	delete[] mas;
}
