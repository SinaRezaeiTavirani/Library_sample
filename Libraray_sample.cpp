#include "Book.h"
#include <iostream>

int main()
{
    Book book("pride and prejudice", "Jane Austin");
    std::cout << book.getAuthor() << std::endl << book.getTitle();
}
