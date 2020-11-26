#include <iostream>
#include <string>
#include "whatever.hpp"

int main() {
	{
		std::cout << "Testing int" << std::endl;
		int num1 = 10;
		int num2 = 99;
		std::cout << "Num1 = " << num1 << std::endl;
		std::cout << "Num2 = " << num2 << std::endl;
		std::cout << "Min = " << min(num1, num2) << std::endl;
		std::cout << "Max = " << max(num1, num2) << std::endl;
		std::cout << "After swap:" << std::endl;
		swap(num1, num2);
		std::cout << "Num1 = " << num1 << std::endl;
		std::cout << "Num2 = " << num2 << std::endl;
		std::cout << "------------" << std::endl;
	}
	{
		std::cout << "Testing string" << std::endl;
		std::string str1 = "Hello";
		std::string str2 = "World";
		std::cout << "str1 = " << str1 << std::endl;
		std::cout << "str2 = " << str2 << std::endl;
		std::cout << "Min = " << min(str1, str2) << std::endl;
		std::cout << "Max = " << max(str1, str2) << std::endl;
		std::cout << "After swap:" << std::endl;
		swap(str1, str2);
		std::cout << "str1 = " << str1 << std::endl;
		std::cout << "str2 = " << str2 << std::endl;
		std::cout << "------------" << std::endl;
	}
	{
		std::cout << "Testing float" << std::endl;
		float f1 = 42.42;
		float f2 = 21.21;
		std::cout << "float1 = " << f1 << std::endl;
		std::cout << "float2 = " << f2 << std::endl;
		std::cout << "Min = " << min(f1, f2) << std::endl;
		std::cout << "Max = " << max(f1, f2) << std::endl;
		std::cout << "After swap:" << std::endl;
		swap(f1, f2);
		std::cout << "float1 = " << f1 << std::endl;
		std::cout << "float2 = " << f2 << std::endl;
		std::cout << "------------" << std::endl;
	}
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return 0;
}
