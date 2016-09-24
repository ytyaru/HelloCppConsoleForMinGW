#include<iostream>
class MyClass
{
public:
	void Show() { std::cout << "Hello World C++ !!" << std::endl; }
};
int main()
{
	MyClass cls;
	cls.Show();
	system("pause");
	return 0;
}
