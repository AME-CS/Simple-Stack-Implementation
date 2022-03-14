/*
 * This is a program that will setup a simple ADT, specifically an int stack.
 * Note the header structure and files.
 * main.h contains all other directives 
 * The only thing included here is main.h
 */
/* 
 * File:   main.cpp
 * Author: Ahmed Eid
 */

#include "main.h"

int main(int argc, char** argv) {
    /* Initializing Constructor to LISTSIZE*/
    Stack Stack(LISTSIZE);
    // Testing push function with different int inputs
    cout << "attempting to push element 50 using: int Stack::push(int);" << endl;
    if (Stack.push(50)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    cout << endl;
    cout << "attempting to push element 0 using: int Stack::push(int);" << endl;
    if (Stack.push(0)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    cout << endl;
    cout << "attempting to push element -50 using: int Stack::push(int);" << endl;
    if (Stack.push(-50)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    cout<<endl;
    cout << "attempting to pop element -50 using: int Stack::pop();" << endl;
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    cout << endl;
    cout << "attempting to pop element 0 using: int Stack::pop();" << endl;
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    cout << endl;
    cout << "attempting to pop element 50 using: int Stack::pop();" << endl;
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    cout << endl;
    cout << "Testing the isEmpty function - should return 'empty'"<<endl;
    if (Stack.isEmpty()==1){
        cout<<"Stack is Empty"<<endl;
    } else {
        cout<<"Stack is not Empty"<<endl;
    }
    cout << endl;
    cout<<"Testing the isFull function- should return 'not full'"<<endl;
    if (Stack.isFull()==1){
        cout<<"Stack is Full"<<endl;
    } else {
        cout<<"Stack is not Full"<<endl;
    }
    cout << endl;
    cout<< "attempting to pop an empty element using: int Stack::pop()- should throw an error and get caught" << endl;
    try{
        Stack.pop();
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    cout << endl;
    cout<< "attempting to peek an empty element using: int Stack::pop()- should throw an error and get caught" << endl;
    try{
        Stack.peek();
        cout<<"Peeking Element "<<Stack.peek()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    cout<<endl;
    cout<<"pushing 10 elements to fill up the stack"<<endl;
    if (Stack.push(10)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(20)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(30)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(40)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(50)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(60)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(70)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(80)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(90)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(100)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    cout<<endl;
    cout<<"pushing 2 more elements to check how the function handles a full Stack"<<endl;
    if (Stack.push(110)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    if (Stack.push(120)==1){
        cout<<"Element "<<Stack.peek()<<" Inserted"<<endl;
    } else {
        cout<<"Stack Overflow"<<endl;
    }
    cout << endl;
    cout<<"Testing the isEmpty function when the stack is full"<<endl;
    if (Stack.isEmpty()==1){
        cout<<"Stack is Empty"<<endl;
    } else {
        cout<<"Stack is not Empty"<<endl;
    }
    cout << endl;
    cout<<"Testing the isFull function when the stack is full"<<endl;
    if (Stack.isFull()==1){
        cout<<"Stack is Full"<<endl;
    } else {
        cout<<"Stack is not Full"<<endl;
    }
    cout<<endl;
    cout<<"'peeking' into the current stack element, then popping until the last stack element and 'peeking' at that point;"<<endl;
    cout<<endl;
    try{
        Stack.peek();
        cout<<"Peeking at Element "<<Stack.peek()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    cout << endl;
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    cout << endl;
    try{
        Stack.peek();
        cout<<"Peeking at Element "<<Stack.peek()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    cout << endl;
    cout<<"Popping the last stack element and peeking after the last element has been popped -should return a stack underflow;"<<endl;
    cout<<endl;
    try{
        cout<<"Removing Element "<<Stack.pop()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }
    cout<<endl;
    try{
        Stack.peek();
        cout<<"Peeking Element "<<Stack.peek()<<endl;
    }
    catch (int error){
        cout << "Stack Underflow"<< endl;
    }

    cout<<endl;
    return 0;
}