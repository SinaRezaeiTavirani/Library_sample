#pragma once
#ifndef LIBRARY_H
#define LIBRARY_H
#include <string>
#include "Book.h"
#include <vector>
#include "Member.h"
#include <iostream>

class Library
{
private:
	std::string name;
	std::vector<Book> books;
	std::vector<Member> members;
public:
	Library(const std::string& name);
	void addBook(const Book& book);
	void removeBook(const std::string& bookTitle);
	void addMember(const Member& member);
	void removeMember(const std::string memberId);
	void displayBooks() const;
	void displayMembers() const;

};

#endif // !LIBRARY_H
