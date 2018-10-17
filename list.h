// Arquivo: list.h
#ifndef __lib__
#define __lib__

typedef char TipoDado;

struct No {
     TipoDado info;
     No      *prox;
};

class Lista {

public:

     No *lista;                // ponteiro para o primeiro nó da lista
     unsigned int numnos;      // número de nós da lista



     Lista();                  // cria lista vazia (construtor)


     void Insere(TipoDado x);  // INSERE x na lista
     TipoDado Remove();        // REMOVE elemento da lista

};


#endif
