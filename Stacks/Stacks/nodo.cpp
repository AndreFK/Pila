#include "stdafx.h"
#include "nodo.h"


nodo::nodo(int valor)
{
	this->value = valor;
	this->ant = nullptr;
}

int nodo::GetValue() {
	return value;
}

nodo::~nodo()
{
}
