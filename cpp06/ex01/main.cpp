//
// Created by Meldred Emilio on 11/24/20.
//

#include <string>
#include <iostream>

struct Data {
	std::string	s1;
	int			n;
	std::string	s2;
};

// Приведение типов без проверки. reinterpret_cast — непосредственное указание компилятору.
// Применяется только в случае полной уверенности программиста в собственных действиях.
// Не снимает константность и volatile. применяется для приведения указателя к указателю,
// указателя к целому и наоборот.
// TYPE reinterpret_cast<TYPE> (object)

char randomChar() {
	const std::string setOfChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	return setOfChars[rand() % 62];
}

void * serialize(void) {
	char *str = new char[20];

	std::srand(time(0));
	for (int i = 0; i < 8; i++)
		str[i] = randomChar();
	*reinterpret_cast<int*>(str + 8) = rand();
	for (int i = 12; i < 20; i++)
		str[i] = randomChar();
	return str;
}

Data * deserialize(void *ptr) {
	Data *data = new Data;
	char	*raw_in_char = static_cast<char*>(ptr);

	data->s1.assign(raw_in_char, 8);
	data->s1 += '\0';
	data->n = *reinterpret_cast<int*>(raw_in_char + 8);
	data->s2.assign(raw_in_char + 12, 8);
	data->s2 += '\0';
	return data;
}

int main() {
	Data	*data;
	char	*serial;

	serial = static_cast<char *>(serialize());
	data = deserialize(serial);
	std::cout << data->s1 << std::endl << data->n << std::endl << data->s2 << std::endl;
	delete serial;
	delete data;
	return 0;
}
