#include <stdio.h>
#include <string>
#include <iostream>
#include "Lista.h"
using namespace std;

Element::Element()  //konstruktor
{
	nastepny = 0;
};

Lista::Lista()
{
	pierwszy = 0;
}

void Lista::Dodaj(string nazwa)
{
	Element *nowy_element = new Element;
	nowy_element->nazwa = nazwa;

	if (pierwszy == 0)
	{
		pierwszy = nowy_element;
	}
	else
	{
		Element *temp = pierwszy;

		while (temp->nastepny)
		{
			temp = temp->nastepny;
		}

		temp->nastepny = nowy_element; 
		nowy_element->nastepny = 0;   
	}
}

void Lista::Wyswietl()
{
	Element *temp = pierwszy;
	cout << "czytodziala" << endl;
	while (temp)
	{
		cout << "Nazwa: " << temp->nazwa << endl;
		temp = temp->nastepny;
	}
}


void Lista::Usun(int numer)
{
	if (numer == 1)
	{
		Element *temp = pierwszy;
		pierwszy = temp->nastepny;
	}

	if (numer > 1)
	{
		int j = 1;
		Element *temp = pierwszy;

		while (temp)
		{
			if ((j + 1) == numer) break;
			temp = temp->nastepny;
			j++;
		}
		
		if (temp->nastepny->nastepny == 0)
			temp->nastepny = 0;

		else
			temp->nastepny = temp->nastepny->nastepny;
	}
}

