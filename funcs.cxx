#include <iostream>
#include "funcs.h"

template<class T>
MyVector<T>::MyVector() {
	s = 0;
}

template<class T>
MyVector<T>::MyVector(int i) {
	s = 0;
	cap = i;
}

template<class T>
int MyVector<T>::size(){
	return s;
}

template<class T>
int MyVector<T>::capacity() {
	return cap;
}

template<class T>
bool MyVector<T>::empty(){
	if(size() != 0) {
		return false;
	}
	return true;
}

template<class T>
void MyVector<T>::push_back(T item){
	if(s < cap) {
		arr[s] = item;
		s++;
	}
	else { //dynamically allocate the memory to a bigger array 
		cap++;		
		T* temp = new T[cap];
		for(int i = 0; i < size(); i++){
			temp[i] = arr[i];
		}	
		temp[s] = item;
		s++;
		delete[] arr;
		arr = temp;
	}
}

template<class T>
void MyVector<T>::pop_back() {
	s--;
}

template<class T>
void MyVector<T>::clear() {
	s = 0;
}

template<class T>
T &MyVector<T>::operator[] (int i){
	return arr[i];
}

template<class T>
void MyVector<T>::print() {
	for(int i = 0; i < size(); i++) {
		std::cout << arr[i] << " "; 
	}
	std::cout << "\n";
}
