#include "Paragraph.h"
#include <sstream>

std::istream &operator>>(std::istream &stream, Paragraph &paragraph)
{
	Word word;
	std::string inputString;
	std::getline(stream, inputString);
	std::stringstream inputStream;
	inputStream.str(inputString);
	std::string wordString;
	while(inputStream >> wordString)
		paragraph.push_back(Word(wordString));
	return stream;
}

std::ostream &operator<<(std::ostream &stream, Paragraph &paragraph)
{
    for(auto it = paragraph.begin(); it != paragraph.end(); ++it)
	{
		stream << *it;
		if ((it == paragraph.end()-1))
		{
			if (it->back() != Symbol('.'))
			    stream << "." << std::endl;
		}
		else
			stream << " ";
	}
	return stream;
}