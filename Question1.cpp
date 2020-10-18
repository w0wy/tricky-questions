// 1.How can you make sure a C++ function can be called as e.g. void foo(int, int) but not as any other type like void foo(long, long)?

#include <iostream>

void foo(int x, int y)
{
	std::cout << "\n" <<  x << y << "\n";
}

template <typename T>
void foo(T x, T y) = delete;

int main()
{
	int x = 1;
	int y = 2;
	foo(x, y);

	return 1;
}
