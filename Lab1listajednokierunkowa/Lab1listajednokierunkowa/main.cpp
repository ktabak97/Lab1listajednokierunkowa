#include <stdio.h>
#include <iostream>
#include "Lista.h"
using namespace std;

int main(void)
{
	
	do
	{
		cout << "Oto lista jednokierunkowa" << endl;
		cout << "1. Dodaj element." << endl;
		cout << "2. Wyswietl liste." << endl;
		cout << "3. Usun element z listy" << endl;
	//	cout << "4. Usun pierwszy element listy." << endl;
	//	cout << "5. Zamien miejscami element pierwszy z elemenentem k - tym." << endl;
		cout << "6. Zakoncz." << endl << endl;
		
		string nzw;
		int nr;
		int wybor;
		cin >> wybor;

		Lista *lista1 = new Lista;
		lista1->Dodaj("ja");
		lista1->Dodaj("ty");
		lista1->Dodaj("on");
		lista1->Wyswietl();
		lista1->Usun(2);
		switch (wybor)
		{
		case 1:

			cout << "Podaj nazwe nowego elementu:" << endl;
			cin >> nzw;
			lista1->Dodaj(nzw);
			break;
		
		case 2:
			lista1->Wyswietl();
			break;

		case 3:
			cout << "Podaj numer elementu do usuniecia" << endl;
			cin >> nr;
			lista1->Usun(nr);
			break;

		case 6:
			return 0;
			break;
		}
	} while (1);
	return 0;
}

/*		case 2:		// wyswietlenie

			if (poczatek != NULL)
			{
				Lista *temp = poczatek;

				printf("\nTwoja lista:\n\n  ");

				while (temp != NULL)
				{
					printf("(%d) ", temp->element_listy);

					temp = temp->nastepny;
				}
			}
			else
			{
				printf("\nLista jest pusta!");
			}

			printf("\n\n");

			break;

		case 3:		// sprawdzenie

			sprawdzenie = 0;

			Lista *temp = poczatek;

			printf("\nPodaj szukana liczbe: ");

			scanf("%d", &szukany_element);

			while (temp != NULL)
			{
				if (temp->element_listy == szukany_element)
				{
					sprawdzenie = 1;
				}

				temp = temp->nastepny;
			}

			if (sprawdzenie == 1)
			{
				printf("\nWartosc %d znajduje sie na liscie.\n\n", szukany_element);
			}
			else
			{
				printf("\nWartosc %d nie znajduje sie na liscie.\n\n", szukany_element);
			}

			break;

		case 4:		// usuniecie pierwszego elementu
		{
			if (poczatek != NULL)
			{
				Lista *temp = poczatek;

				temp = temp->nastepny;

				free(poczatek);

				poczatek = temp;

				liczba_elementow--;
			}
			else
			{
				printf("\nLista jest pusta!\n");
			}

			printf("\n");

			break;
		}

		case 5:		// zamiana pierwszego i n-tego elementu
		{
			if (poczatek != NULL && poczatek->nastepny != NULL)
			{
				Lista *temp1 = poczatek->nastepny;					// temp1 wskazuje na drugi element

				Lista *temp2 = poczatek;

				Lista *temp3 = poczatek;

				Lista *temp4 = poczatek;

				printf("\nKtory element chcesz zamienic z pierwszym? ");

				scanf("%d", &element_do_zamiany);

				if (element_do_zamiany <= liczba_elementow)
				{
					if (temp1->nastepny != NULL)
					{
						for (j = 0; j < element_do_zamiany - 1; j++)
						{
							temp2 = temp2->nastepny;
						}												// temp2 wskazuje na n -y element

						for (j = 0; j < element_do_zamiany - 2; j++)
						{
							temp3 = temp3->nastepny;
						}												// temp3 wskazuje na n-1 -y element

						for (j = 0; j < element_do_zamiany; j++)
						{
							temp4 = temp4->nastepny;
						}												// temp4 wskazuje na n+1 -y element

						temp3->nastepny = poczatek;

						poczatek->nastepny = temp4;

						poczatek = temp2;

						poczatek->nastepny = temp1;
					}
					else
					{
						poczatek = koniec;

						koniec = temp2;

						poczatek->nastepny = koniec;

						koniec->nastepny = NULL;
					}
				}
				else
				{
					printf("\nNa liscie nie ma tylu elementow!\n");
				}
			}
			else
			{
				printf("\nLista jest pusta lub jednoelementowa!\n");
			}

			printf("\n");

			break;
		}
*/





