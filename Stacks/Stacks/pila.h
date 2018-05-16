#pragma 
#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include "nodo.h"

class pila
{
private:
	nodo * top;
public:
	pila(nodo*top);
	template <typename T>
	void stack(T);
	//void stack(char);
	int pop();
	int GetQuant();
	~pila();
};

#endif // !PILA_H_INCLUDED