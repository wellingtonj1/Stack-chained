#ifndef PILHATEST_H
#define PILHATEST_H
#include "Pilha.h"
class Pilhatest
{
private:
    Pilha bijeto;
public:
    Pilhatest();
    void menu();
    Livro* criaLivro();
    void mostraPilha();

};

#endif // PILHATEST_H
