// 4.Print to the screen if a number is odd or even without using any conditional statement.

#include <iostream>
#include <string>

int main()
{
	int n;
	std::cout << "Enter a number: ";
	std::cin >> n;
	std::string arr[2] = {"Even", "Odd"};
	std::cout << "The number is: " << arr[n%2] << "\n";
}
