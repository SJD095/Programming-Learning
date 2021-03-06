// BookIndex.h
#ifndef BOOKI_H
#define BOOKI_H

// class BookIndex definition
class BookIndex {
public:
	BookIndex(); // default constructor
	BookIndex(char *name, char *author, int year);
	~BookIndex(); // destructor
	char * getTitle() const;
	char * getAuthorName() const;
	void setCopyright(const int);
	int getCopyright() const;
private:
	char *title;
	char *authorName;
	int copyright;
}; // end class
#endif // BOOKI_H