#include "Pilha.h"

Pilha::Pilha()
{

}
bool Pilha::empilha(Livro* aux)
{
    if(aux==0)
        return false;
    else
    {
        No* ptr= No::montaNo(aux);
        ptr->setProximo(topo);
        topo=ptr;
        return true;
    }
}
Livro* Pilha::desempilha()
{
    if(vazia())
        return 0;
    else
    {
        No* ptr=topo;
        topo=topo->getProximo();
        Livro* ret = No::desmontaNo(ptr);
        return ret;
    }

}

bool Pilha::vazia()
{

}
