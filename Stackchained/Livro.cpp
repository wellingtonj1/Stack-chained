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
    //return Livro;

}

void Livro::setTitulo()
{
    std::cin>>titulo;
}

void Livro::setAutor()
{
    std::cin>>autor;
}

void Livro::setIsbn()
{
    std::cin>>isbn;
}
