//
// Created by Meldred Emilio on 11/26/20.
//

#ifndef CPP07_ITER_HPP
#define CPP07_ITER_HPP

# include <iostream>

template <typename T>
void 	iter(T *addr, size_t length, void (*f)(T const &data)) {
	for (size_t i = 0; i < length; i++)
		f(addr[i]);
}

#endif //CPP07_ITER_HPP
