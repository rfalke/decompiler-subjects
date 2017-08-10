#include <iostream>

class MyClass {
	int x_;
public:
	MyClass(int x):
		x_(x)
	{
		std::cout << "MyClass::MyClass()" << std::endl;
	}

	~MyClass() {
		std::cout << "MyClass::~MyClass()" << std::endl;
	}

	void method(int y) {
		std::cout << x_ + y << std::endl;
	}
};

int main() {
	MyClass a(10);
	a.method(20);
}
