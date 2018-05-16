#include "stdafx.h"
#include "pila.h"


pila::pila(nodo * top)
{
	this->top = nullptr;
}

template <typename T>
void pila::stack(T) {
	int NValue = 0;
	switch (T){
		case(T == '+'):
			if (GetQuant() == 1) {
				return;
			}
			else if (GetQuant() == 0) {
				return;
			}
			else {
				NValue = top->GetValue() + top->ant->GetValue();
				nodo * n = new nodo(NValue);
				n->ant = top->ant->ant;
				top = n;
			}
			break;
		case(T == '-'):
			if (GetQuant() == 1) {
				return;
			}
			else if (GetQuant() == 0) {
				return;
			}
			else {
				if (top->GetValue() < top->ant->GetValue()) {
					NValue = top->ant->GetValue() - top->GetValue();
				}
				else if (top->GetValue() > top->ant->GetValue) {
					NValue = top->GetValue() - top->ant->GetValue();
				}
				nodo * n = new nodo(NValue);
				n->ant = top->ant->ant;
				top = n;
			}
			break;
		case(T == '*'):
			if (GetQuant() == 1) {
				return;
			}
			else if (GetQuant() == 0) {
				return;
			}
			else {
				NValues = top->GetValue() * top->ant->GetValue();
				nodo * n = new nodo(NValue);
				n->ant = top->ant->ant;
				top = n;
			}
			break;
		case(T == '/'):
			if (GetQuant() == 1) {
				return;
			}
			else if (GetQuant() == 0) {
				return;
			}
			else {
				if (top->GetValue() < top->ant->GetValue()) {
					NValue = top->ant->GetValue() / top->GetValue();
				}
				else if (top->GetValue() > top->ant->GetValue) {
					NValue = top->GetValue() / top->ant->GetValue();
				}
				nodo * n = new nodo(NValue);
				n->ant = top->ant->ant;
				top = n;
				break;
		default:
			nodo * n = new nodo(T);
			if (top == nullptr) {
				top = n;
			}
			else {
				n->ant = top;
				top = n;
			}
			break;
			}
	}
	return;
}


int pila::pop() {
	int x = top->GetValue();
	top = top->ant;
	return x;
}

int pila::GetQuant() {
	nodo * temp = top;
	int size = 0;
	while (temp->ant != nullptr) {
		temp = temp->ant;
		size += 1;
	}
	return size;
}

pila::~pila()
{
}
