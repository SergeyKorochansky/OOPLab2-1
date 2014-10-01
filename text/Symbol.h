#pragma once
#include <iostream>

typedef unsigned char symbolType;

class Symbol
{
public:
	Symbol() : ch(0) {}
	Symbol(symbolType symbol) : ch(symbol) {}

	unsigned int toDigit() const;
	symbolType getChar() const;
	void setChar(symbolType symbol);
	static symbolType fromDigit(symbolType digit);

	friend std::istream &operator>>(std::istream &stream, Symbol &symbol);
	friend std::ostream &operator<<(std::ostream &stream, Symbol &symbol);

	bool operator==(const Symbol &other);
    bool operator!=(const Symbol &other);
private:
	symbolType ch;
};
