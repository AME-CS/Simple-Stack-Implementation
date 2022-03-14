/*
 * This is a program that will setup a simple ADT, specifically an int stack.
 * Note the header structure and files.
 * The only thing included in mylist.cpp is this functions.h file
 * mylist.h contains all directives for functions.cpp
 */
/* 
 * File:   stack.h
 * Author: Ahmed Eid
 */

#ifndef STACK_H
#define STACK_H
#define DEFAULT -1
#define SIZE 10
#define ERROR 1

#include <iostream>   

class Stack {
public:
    Stack(int size = SIZE);
    ~Stack();


    bool push(int);
    bool isEmpty();
    int pop();
    int peek();
    bool isFull();


private:
    int top;
    int *arr;
    int maxcap;
};

#endif //STACK_H