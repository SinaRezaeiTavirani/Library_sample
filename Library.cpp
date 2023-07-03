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

void Library::addMember(const Member& member)
{
	members.push_back(member);
}

void Library::removeMember(const std::string memberId)
{
	for(auto it = members.begin(); it != members.end(); ++it)
		if (it->getId() == memberId) {
			members.erase(it);
			break;
		}
}

void Library::displayBooks() const
{
	std::cout << "Books in the library:" << std::endl;
	for (const auto& book : books) 
		std::cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << std::endl;
	
}

void Library::displayMembers() const
{
	std::cout << "Members of the library:" << std::endl;
	for (const auto& member : members) {
		std::cout << "Name: " << member.getName() << ", ID: " << member.getId() << std::endl;
	}
}
