#pragma once
#include "Paragraph.h"

class Document : public std::vector<Paragraph>
{
public:
	Document() : std::vector<Paragraph>() {}
	Document(size_type n) :  std::vector<Paragraph>(n) {}
	Document(const Document &document) :  std::vector<Paragraph>(document) {}

	const int fullSize() const;

	Document copy(int fromIndex, int toIndex);
	void remove(int fromIndex, int toIndex);
	Document cut(int fromIndex, int toIndex);

	friend std::istream &operator>>(std::istream &stream, Document &document);
	friend std::ostream &operator<<(std::ostream &stream, Document &document);
};

