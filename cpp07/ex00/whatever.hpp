//
// Created by Meldred Emilio on 11/26/20.
//

#ifndef CPP07_WHATEVER_HPP
#define CPP07_WHATEVER_HPP

template <typename T>
T &max(T &a, T &b) {return (a > b) ? a : b;}

template <typename T>
T &min(T &a, T &b) {return (a < b) ? a : b;}

template <typename T> void swap(T &a, T &b) {
	T tmp(a);
	a = b;
	b = tmp;
}

#endif //CPP07_WHATEVER_HPP
