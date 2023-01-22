#include <iostream>

#include "Fila.hpp"

void insere(Fila& F, char x, bool& deuCerto) {

	if (cheia(F)) {

		deuCerto = false;

	}
	else {

		deuCerto = true;

		F.numElementos++;

		Node* FAux = new Node; // Alocação dinâmica de memória
		FAux->Info = x;
		FAux->Next = NULL;

		if (vazia(F)) {

			F.Primeiro = FAux;

		}
		else {

			F.Ultimo->Next = FAux;

		}

		F.Ultimo = FAux;

	}

}

void retira(Fila& F, char& x, bool& deuCerto) {

	if (vazia(F)) {

		deuCerto = false;

	}
	else {

		deuCerto = true;

		F.numElementos--;

		x = F.Primeiro->Info;
		Node* FAux = F.Primeiro;

		if (F.Primeiro == F.Ultimo) {

			F.Ultimo = F.Ultimo->Next;

		}

		F.Primeiro = F.Primeiro->Next;
		delete[] FAux; // Desalocação dinâmica de memória
	}

}

void cria(Fila& F) {

	F.Ultimo = NULL;
	F.Primeiro = NULL;
	F.numElementos = 0;

}

bool vazia(Fila& F) {

	if (F.Primeiro == NULL && F.Ultimo == NULL) {

		return true;

	}

	return false;
}

bool cheia(Fila& F) {

	return false;

}