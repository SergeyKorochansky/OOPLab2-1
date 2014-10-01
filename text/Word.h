#pragma once
#include <vector>
#include "Symbol.h"

class Word : public std::vector<Symbol>
{
public:
	Word() : std::vector<Symbol>() {}
	Word(size_type n) :  std::vector<Symbol>(n) {}
	Word(const Word &word) :  std::vector<Symbol>(word) {}
	Word(const std::string &word)
	{
		for(auto it = word.cbegin(); it != word.end(); ++it)
			push_back(Symbol(*it));
	}

	friend std::istream &operator>>(std::istream &stream, Word &word);
	friend std::ostream &operator<<(std::ostream &stream, Word &word);
};


