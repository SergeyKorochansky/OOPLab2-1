#include "Word.h"

int main()
{
	Symbol a('a');
	Symbol b('b');
	Symbol one = Symbol::fromDigit(1);
	
	Word myWord;
	myWord.push_back(a);
	myWord.push_back(b);
	myWord.push_back(one);

	std::cin >> myWord;

	std::cout << myWord;

	system("pause");
	return 0;
}