#include "Symbol.h"

symbolType Symbol::fromDigit(symbolType digit)
{
	return (digit <= 9) ? (digit + 48) : 0;
}

unsigned int Symbol::toDigit() const
{
	if((ch >= '0') && (ch <= '9'))
		return (ch - 48);
	else return 0;
}

symbolType Symbol::getChar() const
{
	return ch;
}


void Symbol::setChar(symbolType symbol)
{
	ch = symbol;
}

std::istream &operator>>(std::istream &stream, Symbol &symbol)
{
	symbolType inputChar;
	stream >> inputChar;
	symbol.setChar(inputChar);
	return stream;
}


std::ostream &operator<<(std::ostream &stream, Symbol &symbol)
{
	symbolType outputChar = symbol.getChar();
	stream << outputChar;
	return stream;
}