#include "Document.h"

const int Document::fullSize() const
{
	int sum = 0;
	for(auto it = begin(); it != end(); ++it)
		sum += it->fullSize();
	return sum;
}

std::istream &operator>>(std::istream &stream, Document &document)
{
	Paragraph paragraph;
	while (stream >> paragraph)
		document.push_back(paragraph);
	return stream;
}

std::ostream &operator<<(std::ostream &stream, Document &document)
{
	for(auto it = document.begin(); it != document.end(); ++it)
		stream << *it;
	return stream;
}

Document Document::copy(int fromIndex, int toIndex)
{
	Document newDoc;
	int traversedSymbols = 0;
	for (auto paragraph = begin(); paragraph != end(); ++paragraph)
	{
		int currentParagraphSymbols = paragraph->fullSize();
		if (traversedSymbols + currentParagraphSymbols >= fromIndex)
		{
			int traversedInParagraph = traversedSymbols;
			Paragraph newParagraph;
			for (auto word = paragraph->begin(); word != paragraph->end(); ++word)
			{
				int currentWordSymbols = word->size();
				if (traversedInParagraph + currentWordSymbols >= fromIndex)
				{
					int startSymbolNumber = fromIndex - traversedInParagraph;
					traversedInParagraph += currentWordSymbols;
					int endSymbolNumber = toIndex - traversedInParagraph;
					Word newWord(currentWordSymbols);
					std::copy(word->begin() + startSymbolNumber, word->end() - endSymbolNumber, newWord.begin());
					newParagraph.push_back(newWord);
				}
			}
			newDoc.push_back(newParagraph);
		}
		traversedSymbols += currentParagraphSymbols;
	}
	return newDoc;
}

Document Document::cut(int fromIndex, int toIndex)
{
	Document newDocument(copy(fromIndex, toIndex));
	remove(fromIndex, toIndex);
	return newDocument;
}

void Document::remove(int fromIndex, int toIndex)
{
}