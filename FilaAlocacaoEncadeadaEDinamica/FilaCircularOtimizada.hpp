#pragma once

#include "Node.hpp"

class FilaCircularOtimizada {

public:
	Node* UltimoDaFila;

public:
	void insereFilaCircular(char x, bool& deuCerto);
	void retiraFilaCircular(char& x, bool& deuCerto);
	void criaFilaCircular();
	bool cheiaFilaCircular();
	bool vaziaFilaCircular();

};