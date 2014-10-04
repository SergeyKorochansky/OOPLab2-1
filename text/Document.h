#pragma once
#include "Paragraph.h"

class Document : public std::vector<Paragraph>
{
public:
	Document() : std::vector<Paragraph>() {}
	Document(size_type n) :  std::vector<Paragraph>(n) {}
	Document(const Document &document) :  std::vector<Paragraph>(document) {}

	const int fullSize() const;

	Document copy(int begin, int end);
	void remove(int begin, int end);
	Document cut(int begin, int end);

	friend std::istream &operator>>(std::istream &stream, Document &document);
	friend std::ostream &operator<<(std::ostream &stream, Document &document);
};

