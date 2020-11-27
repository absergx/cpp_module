//
// Created by Meldred Emilio on 11/27/20.
//

#ifndef CPP08_TMP_EASYFIND_HPP
#define CPP08_TMP_EASYFIND_HPP
# include <map>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T& data, int value) {
	return (std::find(data.begin(), data.end(), value));
}

#endif //CPP08_TMP_EASYFIND_HPP
