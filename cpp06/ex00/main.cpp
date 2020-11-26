#include <iostream>
#include <stdexcept>
#include <iomanip>

// static_cast преобразует выражения одного статического типа в объекты и
// значения другого статического типа. Поддерживается преобразование численных
// типов, указателей и ссылок по иерархии наследования как вверх, так и вниз.
// Проверка производится на уровне компиляции, так что в случае ошибки сообщение
// будет получено в момент сборки приложения или библиотеки.
// TYPE static_cast<TYPE> (object);

void castNumber(std::string const &arg) {
	{
		std::cout << "char: ";
		try {
			int num = std::stoi(arg);
			if (num >= -128 && num <= 127) {
				if (isprint(num))
					std::cout << "'" << static_cast<char>(num) << "'";
				else
					std::cout << "Non displayable";
			} else
				std::cout << "impossible";
		} catch (std::out_of_range &e) {
			std::cout << "impossible";
		}
		std::cout << std::endl;
	}
	{
		std::cout << "int: ";
		try {
			std::cout << std::stoi(arg);
		} catch (std::out_of_range &e) {
			std::cout << "impossible";
		}
		std::cout << std::endl;
	}
	{
		std::cout << "float: ";
		try {
			std::cout << std::fixed << std::setprecision(1) << std::stof(arg) << "f";
		} catch (std::out_of_range &e) {
			std::cout << "impossible";
		}
		std::cout << std::endl;
	}
	{
		std::cout << "double: ";
		try {
			std::cout << std::fixed << std::setprecision(1) << std::stod(arg);
		} catch (std::out_of_range &e) {
			std::cout << "impossible";
		}
		std::cout << std::endl;
	}
}

int main(int ac, char *av[]) {
	if (ac != 2) {
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string arg(av[1]);
	if (arg.find("inf") != std::string::npos || arg.find("nan") != std::string::npos) {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << std::stof(arg) << "f" << std::endl;
		std::cout << "double: " << std::stod(arg) << std::endl;
	}
	else if (arg.length() == 1 && isprint(arg[0]) && !isdigit(arg[0])) {
		std::cout << "char: " << "'" << arg[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1)
			<< static_cast<float>(arg[0]) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1)
			<< static_cast<double>(arg[0]) << std::endl;
	}
	else {
		try {
			castNumber(arg);
		} catch (std::exception const &e) {
			std::cerr << "Wrong argument" << std::endl;
		}
	}
	return 0;
}
