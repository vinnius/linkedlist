// Arquivo: function.cpp

#include "list.h"


     Lista::Lista()
{
    numnos = 0;
    lista = nullptr; // ou NULL dependendo da versão
}

    void Lista::Insere(TipoDado x)
{

        ++numnos;	               // Adiciona 1 a variável numnos
        No *novono;                // Declara uma variável do tipo No
        novono = new No;           // (1)Aloca memória
        novono -> info = x;        // (2)Preenche o campo info

        if (lista == nullptr) {
        // Se for o primeiro no:
        lista = novono;
        novono->prox = lista; 	   // (3)Determina prox

}
else {

        // Se não for o primeiro no:

        novono->prox = lista->prox;
        lista->prox = novono;
        lista = novono;            // (4)Altera o início da lista
     }

}

     TipoDado Lista::Remove()
{
        char aux;
        No *rem;
        rem = lista;
        lista = rem->prox;
        aux = rem->info;
        delete rem;
        return aux;

}





