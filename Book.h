#pragma once
#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book
{
private:
	std::string title, author;
public:
	Book(const std::string& title, const std::string& author);
	std::string getTitle() const;
	std::string getAuthor() const;
};

#endif // !BOOK_H
