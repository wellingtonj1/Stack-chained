#ifndef LIVRO_H
#define LIVRO_H
#include <string>
#include <iostream>

class Livro
{
private:
    std::string titulo,autor,isbn;

public:
    Livro();
    std::string getTitulo();
    std::string getAutor();
    std::string getIsbn();
    std::string getLivro();
    void setTitulo();
    void setAutor();
    void setIsbn();

};

#endif // LIVRO_H
