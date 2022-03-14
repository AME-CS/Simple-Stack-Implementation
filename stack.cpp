/*
 * This is a program that will setup a simple ADT, specifically an int stack.
 * Note the header structure and files.
 * The only thing included here is mylist.h
 * mylist.h contains all other directives 
 */
/* 
 * File:   stack.cpp
 * Author: Ahmed Eid
 */
#include "stack.h"

// constructor
Stack::Stack(int size){
    arr = new int[size];
    maxcap = SIZE;
    top = DEFAULT;
}

// destructor
Stack::~Stack(){
    delete [] arr;
}

bool Stack::push(int pushVal) {
    bool response;
    if (isFull()==true) {
        response = false;
    } else {
        arr[++top] = pushVal;
        response = true;
    }
    return response;
}

bool Stack::isEmpty(){
    return top == -1;
}

int Stack::pop(){
    if (isEmpty()) {
        throw ERROR;
    }
    return arr[top--];
}

int Stack::peek(){
    if (isEmpty()) {
        throw ERROR;
    }
    return arr[top];
}

bool Stack::isFull(){
    return top==maxcap-1;
}






