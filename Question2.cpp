// 2.Is it possible to call a private function member of a class ?

#include <iostream>

class A
{
	private:
		virtual void someFunc()
		{
			// can we call it ?
			std::cout << "\nCalled A!\n";
		}
};

class B : public A
{
	public:
		void someFunc() override
		{
			std::cout << "\nCalled B!\n";
		}
};

int main()
{
	B* b = static_cast<B*>(new A());
	b->someFunc();

	return 1;
}
