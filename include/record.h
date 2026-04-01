#include<iostream>
#include<string>

class Record {
private:
	int age;
	std::string name;
	std::string phone;
public:
	void Zapis(int age, std::string name,std::string phone);
	void Print();
	std::string GetName();
	int GetAge();
};