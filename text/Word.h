#pragma once
#include <vector>
#include "Symbol.h"

class Word : public std::vector<Symbol>
{
public:
	Word() : std::vector<Symbol>() {}
	Word(size_type n) :  std::vector<Symbol>(n) {}
	Word(const Word &word) :  std::vector<Symbol>(word) {}
};

