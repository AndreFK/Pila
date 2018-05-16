#ifndef NODO_H_INCLUDED
#define NODO_H_INCLUDED
#pragma once


class nodo
{
private:
	int value;
public:
	nodo * ant;

	nodo(int);
	~nodo();

	int GetValue();
};
#endif
