#include "Book.h"
#include "Library.h"
#include <iostream>

int main()
{
    Book book("pride and prejudice", "Jane Austin");
    Library lib("Punak lib");
    lib.addBook(book);
    lib.displayBooks();
    
    //std::cout << book.getAuthor() << std::endl << book.getTitle();
}
