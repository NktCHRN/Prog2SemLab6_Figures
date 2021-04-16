#pragma once
#include <exception>

class NotARhombusException : public std::exception {
public:
	NotARhombusException();
	NotARhombusException(const char* const message);
};