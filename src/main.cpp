#include<iostream>

#include "function.h"
#include "Fruit.h"

int main()
{
	std::cout<<"Program!"<<'\n';
	Print();
	Fruit test;
	test.Set(3.14f);
	std::cout << "Weight: " << test.Get() << '\n';
	return 0;
}