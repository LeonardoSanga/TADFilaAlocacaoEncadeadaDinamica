#include <iostream>

#include "Fila.hpp"
#include "FilaCircularOtimizada.hpp"
#include "OperacoesNaoPrimitivas.hpp"

using namespace std;

int main() {

///////////////////////// PROGRAMA PRINCIPAL DESENVOLVIDO PARA A ATIVIDADE F3(FILA) ////////////////////////
	
    // Cabeçalho
	cout << "*******************" << endl;
	cout << "* Teste TAD Fila! *" << endl;
	cout << "*******************\n" << endl;

	// Teste da TAD Pilha básica

	// Teste F1

	Fila F1;
	cria(F1);

	bool deuCerto;
	char elemento;

	cout << "Criando a Fila 1: Inserindo os elementos A, B, C, D e E nessa oredem\n";
	insere(F1, 'A', deuCerto);
	insere(F1, 'B', deuCerto);
	insere(F1, 'C', deuCerto);
	insere(F1, 'D', deuCerto);
	insere(F1, 'E', deuCerto);

	cout << "Fila 1: ";
	imprimeElementos(F1);


	// Teste F2

	Fila F2;
	cria(F2);

	cout << "\n\nCriando a Fila 2: Inserindo os elementos A e B nessa oredem";
	insere(F2, 'A', deuCerto);
	insere(F2, 'B', deuCerto);

	cout << "\nFila 2: ";
	imprimeElementos(F2);

	cout << "\n\nRetirada do primeiro elemento da fila" << endl;
	retira(F2, elemento, deuCerto);

	cout << "Fila 2: ";
	imprimeElementos(F2);

	cout << "\n\nRetirada do segundo elemento da fila" << endl;
	retira(F2, elemento, deuCerto);

	cout << "Fila 2: ";
	imprimeElementos(F2);

	cout << "\n\nTentatia de retirar um terceiro elementos da fila";
	retira(F2, elemento, deuCerto);

	if (deuCerto == false) {

		cout << "\nA fila ja esta vazia!\n" << endl;

	}

	// Operações não primitivas

	cout << "Compara numero de elemento das Filas:\n";
	if (comparaNumeroDeElementos(F1, F2)) {

		cout << "As Filas 1 e 2 possuem o mesmo numero de elementos" << endl;

	}
	else {

		cout << "As Filas 1 e 2 nao possuem o mesmo numero de elementos" << endl;

	}

	// Teste F3

	Fila F3;
	cria(F3);

	insere(F3, 'A', deuCerto);
	insere(F3, 'B', deuCerto);
	insere(F3, 'C', deuCerto);
	insere(F3, 'D', deuCerto);
	insere(F3, 'E', deuCerto);

	cout << "\nFila 3: ";
	imprimeElementos(F3);

	cout << "\n\nCompara Filas:";
	if (comparaFilas(F1, F3)) {

		cout << "\nAs Filas 1 e 3 sao iguais" << endl;

	}
	else {

		cout << "\nAs Filas 1 e 3 nao sao iguais" << endl;

	}

	if (comparaFilas(F3, F2)) {

		cout << "As Filas 2 e 3 sao iguais" << endl;

	}
	else {

		cout << "As Filas 2 e 3 nao sao iguais" << endl;

	}

///////////////////////////// FIM DO PROGRAMA PRINCIPAL DA ATIVIDADE F3 (FILA) /////////////////////////////
	
    // Teste da Fila Circular
		
	cout << "\n\nTeste da Fila Circular\n" << endl;

	FilaCircularOtimizada Fila;
	Fila.criaFilaCircular();

	char x;

	Fila.insereFilaCircular('A', deuCerto);
	Fila.insereFilaCircular('B', deuCerto);
	Fila.insereFilaCircular('C', deuCerto);

	cout << "Endereco do primeiro elemento da Lista: " << Fila.UltimoDaFila->Next << endl;
	cout << endl;

	cout << "Info do primeiro elemento: " << Fila.UltimoDaFila->Next->Info << endl;
	cout << "Next do primeiro elemento: " << Fila.UltimoDaFila->Next->Next << endl;
	cout << "Info do segundo elemento: " << Fila.UltimoDaFila->Next->Next->Info << endl;
	cout << "Next do segundo elemento: " << Fila.UltimoDaFila->Next->Next->Next << endl;
	cout << "Info do ultimo elemento: " << Fila.UltimoDaFila->Next->Next->Next->Info << endl;
	cout << "Next do ultimo elemento: " << Fila.UltimoDaFila->Next->Next->Next->Next << endl;
	cout << endl;

	cout << "Retirada de dois elementos" << endl;

    Fila.retiraFilaCircular(x, deuCerto);
	Fila.retiraFilaCircular(x, deuCerto);

	cout << "\nEndereco do elemento restante: " << Fila.UltimoDaFila << endl;
	cout << "Info do elemento restante: " << Fila.UltimoDaFila->Info << endl;
	cout << "Next do elemento restante: " << Fila.UltimoDaFila->Next << endl;

	return 0;
}