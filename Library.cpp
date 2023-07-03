#include "Library.h"

Library::Library(const std::string& name) : name(name)
{
}

void Library::addBook(const Book& book)
{
	books.push_back(book);
}

void Library::removeBook(const std::string& bookTitle)
{
	for (auto it = books.begin(); it != books.end(); ++it) 
		if (it->getTitle() == bookTitle) {
			books.erase(it);
			break;
		}

	
}

void Library::addMember(const Member&)
{
}

void Library::removeMember(const std::string memberId)
{
}

void Library::displayBooks() const
{
	std::cout << "Books in the library:" << std::endl;
	for (const auto& book : books) 
		std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << std::endl;
	
}

void Library::displayMembers() const
{
}
