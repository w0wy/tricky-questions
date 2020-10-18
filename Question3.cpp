// 3.Print all natural numbers upto N without using a semi-colon (;).

#include <iostream>

#define N 20

int main(int num, char *argv[])
{
	while(num <= N && std::cout << num && num++)
	{}
}
