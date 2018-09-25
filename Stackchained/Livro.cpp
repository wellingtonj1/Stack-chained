#include "Livro.h"

Livro::Livro()
{

}

std::string Livro::getTitulo()
{
    return titulo;
}

std::string Livro::getAutor()
{
    return autor;
}

std::string Livro::getIsbn()
{
    return isbn;
}

std::string Livro::getLivro()
{
    std::string p="\nTitulo = ";
    std::string p1="\n Autor = ";
    std::string p2="\n Isbn = ";

    return p+titulo+p1+autor+p2+isbn;

}

void Livro::setTitulo(std::string x)
{
    titulo=x;
}

void Livro::setAutor(std::string x)
{
    autor=x;
}

void Livro::setIsbn(std::string x)
{
    isbn=x;
}
