#include<iostream>
#include<string>
#include "../include/record.h"

void Record::Zapis(int age, std::string name, std::string phone) {
	this->age = age;
	this->name = name;
	this->phone = phone;
}

void Record::Print() {
	std::cout << "Age: " << this->age << " Name: " << this->name << " Phone: " << this->phone;
}

std::string Record::GetName() {
	return this->name;
}

int Record::GetAge() {
	return this->age;
}