#include "Word.h"
#include <string>

std::istream &operator>>(std::istream &stream, Word &word)
{
	Symbol symbol;
	std::string inputString;
	stream >> inputString;
	for (auto it = inputString.begin(); it != inputString.end(); ++it)
		word.push_back(Symbol (*it));
	return stream;
}

std::ostream &operator<<(std::ostream &stream, Word &word)
{
    for(auto it = word.begin(); it != word.end(); ++it)
		stream << *it;
	return stream;
}