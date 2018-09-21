#ifndef NO_H
#define NO_H

#include "Livro.h"


class No
{
private:
    No* proximo;
    Livro* dados;
public:
    No();
    No* getProximo()const;
    Livro* getDados()const;
    void setProximo(No* );
    void setDados(Livro* );
    static No* montaNo(Livro* );
    static Livro* desmontaNo(No* );


};

#endif // NO_H
