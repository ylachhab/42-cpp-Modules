#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	std::srand(time(0));
	switch (std::rand() % 3)
	{
		case 0 :
			return new A();
		case 1 :
			return new B();
		default:
			break;
	}
	return new C();
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "The type of the object pointed is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The type of the object pointed is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The type of the object pointed is C" << std::endl;
}

void identify(Base& p) {
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The type of the object pointed is A" << std::endl;
	}
	catch (std::exception &e) {
		try {
			B& b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "The type of the object pointed is B" << std::endl;
		}
		catch (std::exception &e) {
			C& c = dynamic_cast<C&>(p);
			(void)c;
			std::cout << "The type of the object pointed is C" << std::endl;
		}
	}
}

int main() {
	std::cout << "--> Pointer:\n";
	Base *ptr;
	ptr = generate();
	identify(ptr);
	delete ptr;

	std::cout << "--> Reference:\n";
	A a;
	B b;
	C c;
	identify(a);
	identify(b);
	identify(c);


	std::cout << "--> Pointer:\n";
	ptr = generate();
	identify(ptr);
	delete ptr;
	return 0;
}