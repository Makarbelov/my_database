#pragma once      
#include "../include/record.h"
class Stack {
private:
    Record* data;
    int size;
    int capacity;
public:
    Stack(int capacity);
    ~Stack();
    void Push(Record r);
    Record Pop();
    Record Peek();
    bool IsEmpty();
    void Print();
};