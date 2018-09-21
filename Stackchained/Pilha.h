#ifndef PILHA_H
#define PILHA_H
#include "No.h"
#include <iostream>

class Pilha
{
private:
    No* topo;
public:
    Pilha();
    bool empilha(Livro* );
    Livro* desempilha();
    bool vazia();
};

#endif // PILHA_H
