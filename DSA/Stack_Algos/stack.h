#pragma once
#ifndef STACK_H
#define STACK_H
const int maxsize = 100;
template<class T>
class stack {
private:
    T array[maxsize]; 
    int top_stack;
public:
    stack();
    bool isfull();
    bool isempty();
    void push(T data);
    void pop();
    T top();
    void print();
    ~stack();
};

#endif


