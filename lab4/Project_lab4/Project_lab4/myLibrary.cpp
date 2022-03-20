#define _CRT_SECURE_NO_WARNINGS
#include "MyLibrary.h"
#include <time.h>
#include <cstdlib>
#include <cstring>
#include <cstdarg>

MyLibrary::MyLibrary(std::ostream& output_stream) :output_stream(output_stream)
{
    books_count = 0;
    books = nullptr;
}

MyLibrary::MyLibrary(MyLibrary const& lib) :output_stream(lib.output_stream)
{
    this->books_count = lib.books_count;
    this->books = new int[lib.books_count];
    for (unsigned i = 0; i < books_count; i++)
        books[i] = lib.books[i];
}

MyLibrary::MyLibrary(std::ostream& output_stream, unsigned books_count, int* books) :output_stream(output_stream)
{
    //lista de init
    this->books = new int[books_count];
    this->books_count = books_count;
    for (unsigned i = 0; i < books_count; i++)
        this->books[i] = books[i];
}

MyLibrary::MyLibrary(std::ostream& output_stream, unsigned books_count, int min, int max) :output_stream(output_stream)
{
    for (unsigned i = 0; i < books_count; i++)
    {
        books[i] = rand() % max + min;
    }
}

MyLibrary::MyLibrary(std::ostream& output_stream, const char* books_values) :output_stream(output_stream)
{
    int n = 1;
    for (unsigned i = 0; i < strlen(books_values); i++)
    {
        if (books_values[i] == ';')
            ++n;
    }
    books_count = n;
    char* copie = new char[strlen(books_values) + 1];
    strcpy(copie, books_values);
    char* p = strtok(copie, ";");
    int index = 0;
    while (p != nullptr)
    {
        int id = atoi(p);
        books[index++] = id;
        p = strtok(nullptr, ";");
    }
    delete[] copie;
}

MyLibrary::MyLibrary(std::ostream& output_stream, unsigned books_count, ...) :output_stream(output_stream)
{
    this->books_count = books_count;
    this->books = new int[books_count];
    va_list list;
    va_start(list, books_count);
    for (unsigned i = 0; i < books_count; ++i)
    {
        this->books[i] = va_arg(list, unsigned);
    }
    va_end(list);
}

MyLibrary::~MyLibrary() 
{
    delete[] books;
}

void MyLibrary::print_books() const
{
    if (books_count <= 0)
        output_stream << -1 << '\n';
    else
    {
        for (unsigned i = 0; i < books_count; i++)
            output_stream << books[i] << ' ';
        //output_stream << '\n';
    }
}

void MyLibrary::update_book_id_by_index(unsigned book_index, int book_id)
{
    if(book_index < books_count)
        books[book_index] = book_id;
}

unsigned MyLibrary::get_books_count() const
{
    if (books_count > 0)
        return books_count;
    else
        return -1;
}

unsigned MyLibrary::get_book_id_by_index(unsigned index) const
{
    if (index < books_count)
        return books[index];
    else
        return -1;
}

