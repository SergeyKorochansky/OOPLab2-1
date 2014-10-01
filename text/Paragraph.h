#pragma once
#include "Word.h"

class Paragraph : public std::vector<Word>
{
public:
	Paragraph() : std::vector<Word>() {}
	Paragraph(size_type n) :  std::vector<Word>(n) {}
	Paragraph(const Paragraph &Paragraph) :  std::vector<Word>(Paragraph) {}

	friend std::istream &operator>>(std::istream &stream, Paragraph &paragraph);
	friend std::ostream &operator<<(std::ostream &stream, Paragraph &paragraph);
};

