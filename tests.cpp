#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <string>

TEST_CASE("Methods and Assigning") {
	MyVector<int> i;
	MyVector<std::string> s(5);
	MyVector<double> d;
	
	d.push_back(6.5);
	d.push_back(22.3);
	d.push_back(789.0);
	i.push_back(5);
	i.pop_back();

	CHECK(i.empty() == 1);
	CHECK(d.empty() == 0);
	
	CHECK(d[0] == 6.5);
	CHECK(d[1] == 22.3);
	CHECK(d[2] == 789.0);

	CHECK(i.capacity() == 10);
	CHECK(s.capacity() == 5);
	CHECK(d.capacity() == 10);
	
	CHECK(i.size() == 0);
	CHECK(s.size() == 0);
	CHECK(d.size() == 3);

	d.clear();
	CHECK(d.size() == 0);

}

TEST_CASE("Dynamic Array") {
	MyVector<std::string> songs;
	songs.push_back("Out of Touch");
	songs.push_back("Lovers Rock");
	songs.push_back("Hot Sugar");
	songs.push_back("Washing Machine Heart");
	songs.push_back("Little Dark Age");
	songs.push_back("Tangerine");
	songs.push_back("Agnes");
	songs.push_back("7 Weeks & 3 Days");
	songs.push_back("Meet Me");
	songs.push_back("Die for You");
	songs.push_back("Black Out Days"); //pass initial capacity 
	
	CHECK(songs.size() ==  11);
	CHECK(songs.capacity() == 11);

}
