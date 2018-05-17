#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
class Lista
{
public:
	struct Element *pierwszy;
	void Dodaj(string nazwa);
	void Usun(int numer);
	void Wyswietl();
	Lista();
};

struct Element
{
public:
	string nazwa;
	Element *nastepny;	
	Element();
};


/*LISTA *NOWY_ELEMENT;
LISTA *POCZATEK = NULL;
LISTA *KONIEC = NULL;

INT I, J;
INT N = 1;
INT LICZBA_ELEMENTOW = 0;
INT SZUKANY_ELEMENT = 0;
INT SPRAWDZENIE = 0;
INT ELEMENT_DO_ZAMIANY = 0;


*/