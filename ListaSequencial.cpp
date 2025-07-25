#include <iostream>
#include "ListaSequencial.h"

using namespace std;

ListaSequencial::ListaSequencial(){
	tamanho_atual = 0;
}

bool ListaSequencial::vazia(){
	if (tamanho_atual == 0){
		return true;
	}

	return false;
}

bool ListaSequencial::cheia(){
	if (tamanho_atual == tamanho_max){
		return true;
	}

	return false;
}

int ListaSequencial::tamanho(){
	return tamanho_atual;
}

int ListaSequencial::elemento(int posicao) {
    if (posicao <= 0 || posicao > tamanho_atual){
        return -1;
    }
    return valores[posicao - 1];
}

int ListaSequencial::posicao(int valor){
	for (int i = 0; i < tamanho_atual; i++){
		if (valores[i] == valor){
			return (i + 1);
		}
	}

	return -1;
}

bool ListaSequencial::inserir(int valor, int posicao) {
    if (posicao <= 0 || posicao > tamanho_atual + 1 || cheia()) {
        return false;
    }

    for (int i = tamanho_atual; i >= posicao; i--) {
        valores[i] = valores[i - 1];
    }

    cout << "Elemento inserido com sucesso" << endl;
    valores[posicao - 1] = valor;
    tamanho_atual++;
    return true;
}

int ListaSequencial::remover(int posicao) {
    if (posicao <= 0 || posicao > tamanho_atual) {
        return -1;
    }

    int valor = valores[posicao - 1];
    for (int i = posicao - 1; i < tamanho_atual - 1; i++) {
        valores[i] = valores[i + 1];
    }

    tamanho_atual--;
    cout << "Elemento removido com sucesso" << endl;
    return valor;
    
}