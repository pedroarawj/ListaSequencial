#include <iostream>
#include "ListaSequencial.h"

using namespace std;

int main() {
    ListaSequencial lista; 

    cout << "Lista vazia? " << (lista.vazia() ? "Sim" : "Nao") << endl;

    lista.inserir(9, 5);
    lista.inserir(150, 9); 
    lista.inserir(19, 9); 

    cout << "Lista vazia? " << (lista.vazia() ? "Sim" : "Nao") << endl;
    
    cout << "Tamanho da lista: " << lista.tamanho() << endl;

    cout << "Elementos da lista: ";
    for (int i = 1; i <= lista.tamanho(); i++) {
        cout << lista.elemento(i) << " ";
    }
    cout << endl;

    int pos = lista.posicao(9);
    cout << "Posicao do valor 9: " << pos << endl;

    int removido = lista.remover(9);
    cout << "Elemento removido da posicao 2: " << removido << endl;

    cout << "Lista apos remocao: ";
    for (int i = 1; i <= lista.tamanho(); i++) {
        cout << lista.elemento(i) << " ";
    }
    cout << endl;

    return 0;
}
