#include <iostream>
#include <cstdlib>


using namespace std;

#define MAX 10

class Fila
{
	private: int elementos[MAX];
	private: int frente;
	private: int tras;

	public: void cria(Fila fila)
	{
		fila.frente =0;
		fila.tras = fila.frente;
	}
	public: bool fcheia(Fila fila)
	{
		return (fila.tras+1) % MAX == fila.frente;	
	}
	public:bool fvazia(Fila fila)
	{
		return fila.tras == fila.frente;
	}

	public: void enfilera(Fila fila, int item)
	{
		if(!fcheia(fila))
		{
			fila.elementos[fila.tras] = item;	
			fila.tras = (fila.tras +1)%MAX;
		}
	}

	public:void desenfileira(Fila fila, int item)
	{
		if(!fvazia(fila))
		{
			item = fila.elementos[fila.frente];
			fila.frente = (fila.frente +1) % MAX;
		}
	}
	
	public:void fdestroi(Fila fila)
	{
		free(fila.elementos);
	}
};


class Lista
{
	private: int elementos[MAX];
	private: int ultimo;
	
	public: void cria(Lista lista)
	{
		lista.ultimo = 0;
	}

	public:bool lcheia(Lista lista)
	{
		return lista.ultimo == MAX-1;
	}
	public:bool lvazia(Lista lista)
	{
		return lista.ultimo == 0;
	}

	public:void insere(Lista lista, int item)
	{
		if(!lcheia(lista))
		{
			lista.elementos[lista.ultimo] = item;
			lista.ultimo++;
		}
	}

	public:int recupera(Lista lista, int posicao)
	{
		return lista.elementos[posicao];
	}

	public:void ldestroi(Lista lista)
	{
		free(lista.elementos);
	}

};

int main()
{

	
	return 0;
}
