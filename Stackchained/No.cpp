#include "No.h"

No::No()
{

}

No* No::getProximo()const
{
    return proximo;
}

Livro* No::getDados()const
{
    return dados;
}

void No::setProximo(No* aux)
{
    proximo=aux;
}

void No::setDados(Livro* aux)
{
    dados=aux;
}

No* No::montaNo(Livro* aux)
{
    No* retorno = new No;
    retorno->setProximo(0);
    retorno->setDados(aux);
    return retorno;
}

Livro* No::desmontaNo(No* aux)
{
    if(aux==0)
        return 0;
    else
    {
        Livro* retorno= aux->getDados();
        delete aux;
        return retorno;
    }
}
