#include <iostream>

#include "FilaCircularOtimizada.hpp"

void FilaCircularOtimizada::insereFilaCircular(char x, bool& deuCerto) {

	if (cheiaFilaCircular()) {

		deuCerto = false;

	}
	else {

		deuCerto = true;

		Node* FAux = new Node;
		FAux->Info = x;
		FAux->Next = FAux;

		if (!vaziaFilaCircular()) {

			FAux->Next = UltimoDaFila->Next;
			UltimoDaFila->Next = FAux;

		}

		UltimoDaFila = FAux;
	}

}

void FilaCircularOtimizada::retiraFilaCircular(char& x, bool& deuCerto) {

	if (vaziaFilaCircular()) {

		deuCerto = false;

	}
	else {

		deuCerto = true;

		x = UltimoDaFila->Next->Info;
		Node* FAux = UltimoDaFila->Next;

		if (UltimoDaFila->Next != UltimoDaFila) {

			UltimoDaFila->Next = UltimoDaFila->Next->Next;

		}
		else {

			criaFilaCircular();

		}

		delete[] FAux;
	}

}

void FilaCircularOtimizada::criaFilaCircular() {

	UltimoDaFila = NULL;

}

bool FilaCircularOtimizada::cheiaFilaCircular() {

	return false;

}

bool FilaCircularOtimizada::vaziaFilaCircular() {

	if (UltimoDaFila == NULL) {

		return true;

	}

	return false;
}