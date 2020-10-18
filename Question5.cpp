// 5.Check if two numbers are equal without using arithmetic operators or comparison operators.

#include <iostream>

void areSame(int a, int b)
{
	if (a^b)
		std::cout << "\nNot Same!\n";
	else
		std::cout << "\nSame!\n";
}

int main()
{
	areSame(10, 20);
	areSame(5,5);
	areSame(1,2);
}
