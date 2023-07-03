#include "Book.h"
#include "Library.h"
#include <iostream>

int main()
{
    // Create some book objects
    Book book1("Pride and Prejudice", "Jane Austen");
    Book book2("To Kill a Mockingbird", "Harper Lee");
    Book book3("1984", "George Orwell");

    // Create a library object
    Library lib("Punak Library");

    // Add books to the library
    lib.addBook(book1);
    lib.addBook(book2);
    lib.addBook(book3);

    // Display all the books in the library
    lib.displayBooks();

    // Create some member objects
    Member member1("John Smith", "001");
    Member member2("Emily Johnson", "002");

    // Add members to the library
    lib.addMember(member1);
    lib.addMember(member2);

    // Display all the members in the library
    lib.displayMembers();

    // Remove a book from the library
    lib.removeBook("To Kill a Mockingbird");

    // Display the updated list of books
    lib.displayBooks();

    // Remove a member from the library
    lib.removeMember("002");

    // Display the updated list of members
    lib.displayMembers();

    return 0;
}