#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <string>

TEST_CASE("Methods and assigning") {
	MyVector<int> i;
	MyVector<std::string> s(5);
	MyVector<double> d;
	
	d.push_back(6.5);
	
	CHECK(i.empty() == 1);
	CHECK(d.empty() == 0);
	CHECK(d[0] ==  6.5);

	CHECK(i.capacity() == 10);
	CHECK(s.capacity() == 5);
	CHECK(d.capacity() == 10);
	CHECK(i.size() == 0);
	CHECK(s.size() == 0);
	CHECK(d.size() == 1);
}
