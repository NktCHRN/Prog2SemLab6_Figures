#include "NotARhombusException.h"

NotARhombusException::NotARhombusException() {	};

NotARhombusException::NotARhombusException(const char* const message) : std::exception(message) {	};