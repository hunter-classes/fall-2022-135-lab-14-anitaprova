#include <iostream>
#include <string>
#include "funcs.h"

int main() {
	MyVector<int> i; 
	//std::cout << i.empty() << std::endl;
	std::cout << "size: " << i.size() << " capacity: " << i.capacity() << std::endl;
	
	i.push_back(5);	
	i.push_back(8);
	i.push_back(99);
	i.push_back(1);
	std::cout << "size: " << i.size() << " capacity: " << i.capacity() << std::endl;
	i.push_back(5);
	i.push_back(5);
	i.push_back(7);
	i.push_back(3);
	i.push_back(28);
	i.push_back(67);
	i.push_back(100); //over capacity 
	i.print();
	std::cout << "size: " << i.size() << " capacity: " << i.capacity() << std::endl;

	/*i.pop_back();
	std::cout << i.size() << std::endl;
        std::cout << i.capacity() << std::endl;
	i.print();

	std::cout << i[0] << std::endl;
	*/
	return 0;
}
