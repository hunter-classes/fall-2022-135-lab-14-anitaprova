#pragma once

template <class T>
class MyVector {
public:
	MyVector();
	MyVector(int i);
	int size();
	int capacity();
	bool empty();
	void push_back(T item);
	void pop_back();
	void clear();
	void print();
	T &operator[] (int i);
private:
	int cap = 10; 
	T* arr = new T[cap];
	int s; //size 
};

#include "funcs.cxx"
