#pragma once

#include "Node.hpp"

struct Fila {

	Node* Ultimo;
	Node* Primeiro;
	int numElementos;

};

void insere(Fila& F, char x, bool& deuCerto);

void retira(Fila& F, char& x, bool& deuCerto);

void cria(Fila& F);

bool vazia(Fila& F);

bool cheia(Fila& F);