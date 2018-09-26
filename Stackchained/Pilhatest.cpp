#include "Pilhatest.h"

Pilhatest::Pilhatest()
{

}
void Pilhatest::menu()
{
    Livro* aux;
    int op;
    bool ok;
    do
    {
        std::cout<<"\nDigite:\n";
        std::cout<<"1-Empilhar\n";
        std::cout<<"2-Desempilhar\n";
        std::cout<<"3-Mostrar Pilha\n";
        std::cout<<"4-Encerrar\n";
        std::cout<<"Seu Digito   -\b\b";
        std::cin>>op;

        switch (op)
        {
            case 1://inserir

                 aux=criaLivro();
                 ok=bijeto.empilha(aux);
                 if(ok) { std::cout<<"\n\tSucesso!!!\n";}
                 else { std::cout<<"\n\tErro!!!\n"; }
                 aux=0;

                break;
            case 2://desempilhar
                aux=bijeto.desempilha();
                if(aux!=0) { std::cout<<aux->getLivro(); }
                else { std::cout<<"\n\tErro!!!\n"; }
                aux=0;

                break;
            case 3://mostrarpilha

                mostraPilha();

                break;
            case 4://encerrar
                std::cout<<"Programa finalizado com sucesso !\n\n";

                break;
            default:
                std::cout<<"\nValor invalido\n";
                break;
        }
    }while(op!=4);

}

Livro* Pilhatest::criaLivro()
{
    std::string entrada;
    Livro* aux=new Livro;
    std::cin.ignore();
    std::cout<<"\nDigite o titulo\n";
    std::getline(std::cin,entrada);
    aux->setTitulo(entrada);

    std::cout<<"\nDigite o Autor\n";
    //std::cin.ignore();
    std::getline(std::cin,entrada);
    aux->setAutor(entrada);

    std::cout<<"\nDigite o Isbn\n";
    //std::cin.ignore();
    std::getline(std::cin,entrada);
    aux->setIsbn(entrada);

    return aux;
}

void Pilhatest::mostraPilha()
{
    Pilha aux;
    Livro* mostra =0;


    while(!bijeto.vazia())
    {
        mostra=bijeto.desempilha();
        std::cout<<mostra->getLivro()<<std::endl;
        aux.empilha(mostra);

    }

    while(!aux.vazia())
    {
        bijeto.empilha(aux.desempilha());
    }

}
