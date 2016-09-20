#include <iostream>
#include "BookIndex.h"

using namespace std;

BookIndex::BookIndex()
{
	
}

BookIndex::BookIndex(char *name, char *author, int year)
{
	title = name;
	authorName = author;
	copyright = year;
}

BookIndex::~BookIndex()
{
	
}

char * BookIndex::getTitle() const
{
	return title;
}

char * BookIndex::getAuthorName() const
{
	return authorName;
}

void BookIndex::setCopyright(const int y)
{
	copyright = y;
}

int BookIndex::getCopyright() const
{
	return copyright;
}