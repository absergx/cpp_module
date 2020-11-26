//
// Created by Meldred Emilio on 11/26/20.
//

#include <iostream>
#include <string>
#include "Base.hpp"

// TYPE& dynamic_cast<TYPE&> (object);
// TYPE* dynamic_cast<TYPE*> (object);
// Используется для динамического приведения типов во время выполнения.
// В случае неправильного приведения типов для ссылок вызывается
// исключительная ситуация std::bad_cast, а для указателей будет
// возвращен 0. Использует систему RTTI (Runtime Type Information).
// Безопасное приведение типов по иерархии наследования, в том числе
// для виртуального наследования.

Base * generate(void) {
	std::srand(time(0));

	int rnd = rand() % 3;
	if (rnd == 0) {
		std::cout << "Randomly creating class A" << std::endl;
		return new A;
	} else if (rnd == 1) {
		std::cout << "Randomly creating class B" << std::endl;
		return new B;
	} else {
		std::cout << "Randomly creating class C" << std::endl;
		return new C;
	}
}

void identify_from_pointer(Base * p) {
	A *identA = dynamic_cast<A*>(p);
	B *identB = dynamic_cast<B*>(p);
	C *identC = dynamic_cast<C*>(p);

	if (identA)
		std::cout << "A" << std::endl;
	else if (identB)
		std::cout << "B" << std::endl;
	else if (identC)
		std::cout << "C" << std::endl;
	else
		std::cerr << "Base";
}

void identify_from_reference(Base & p) {
	try {
		A &identA = dynamic_cast<A&>(p);
		static_cast<void>(identA);
		std::cout << "A" << std::endl;
		return ;
	} catch (std::bad_cast &e) {}
	try {
		B &identB = dynamic_cast<B&>(p);
		static_cast<void>(identB);
		std::cout << "B" << std::endl;
		return ;
	} catch (std::bad_cast &e) {}
	try {
		C &identC = dynamic_cast<C&>(p);
		static_cast<void>(identC);
		std::cout << "C" << std::endl;
		return ;
	} catch (std::bad_cast &e) {}
	std::cout << "Base" << std::endl;
}

int main() {
	Base *base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	return 0;
}
