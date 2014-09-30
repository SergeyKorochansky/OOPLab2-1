#include "Symbol.h"

int main()
{
	Symbol a('a');
	Symbol b('b');
	Symbol one = Symbol::fromDigit(1);
	
	std::cout << "olo " << b << std::endl;

	std::getchar();
	return 0;
}