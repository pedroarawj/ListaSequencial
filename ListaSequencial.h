#include <iostream>

using namespace std;

class ListaSequencial {
	private:
		int tamanho_atual;
		int tamanho_max;
		int valores[20];
	public:
		ListaSequencial();
		bool vazia();
		bool cheia();
		int tamanho();
		int elemento(int posicao);
		int posicao(int valor);
		bool inserir(int valor, int posicao);
        int remover(int posicao);
};