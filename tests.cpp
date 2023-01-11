#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <string>

TEST_CASE("All methods and assigning") {
	MyVector<int> i;
	MyVector<std::string> s(5);
	MyVector<double> d;
	
	d.push_back(6.5);
	
	CHECK(i.empty() == 1);
	CHECK(d.empty() == 0);
	CHECK(d[0] ==  6.5);
}
