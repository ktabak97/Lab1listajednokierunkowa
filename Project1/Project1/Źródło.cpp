#include <stdio.h>
#include <malloc.h>
#include <time.h>
#include <stdlib.h>


typedef struct dwulista {
	int key;
	struct dwulista *next, *prev;
}*lista, elem;

void tworz_n_elem(lista* head, int n, int a, int b);
void wyswietl(lista h);
lista szukaj_min(lista head);
void usun(lista* head, lista del);
void usun_powt(lista head);
void tworz_unikalna(lista* head, int n, int a, int b);
int main()
{
	lista h = NULL;

	tworz_unikalna(&h, 5, 5, 15);

	wyswietl(h);


	//printf("\nmin: %d\n",szukaj_min(h)->key);
	//lista min=szukaj_min(h);
	//usun(&h,min);
	//usun_powt(h);
	//printf("\n\n");
	//wyswietl(h);

	return 0;
}

void tworz_n_elem(lista* head, int n, int a, int b)
{
	srand(time(0));
	lista tmp = *head;
	lista nowy;
	int i;
	for (i = 0; i<n; i++)
	{
		nowy = (lista)malloc(sizeof(elem));
		nowy->key = rand() % (b - a + 1) + a;
		if (*head == NULL)
		{
			*head = nowy;
			(*head)->prev = (*head)->next = NULL;
		}
		else
		{
			tmp = *head;
			while (tmp->next != NULL)
			{

				tmp = tmp->next;
			}
			tmp->next = nowy;
			nowy->next = NULL;
			nowy->prev = tmp;

		}
	}
}
void wyswietl(lista h)
{
	lista tmp = h;
	while (tmp != NULL)
	{
		printf("%d ", tmp->key);
		tmp = tmp->next;
	}
}
lista szukaj_min(lista head)
{

	if (!head)
		return 0;
	lista tmp = head;
	lista minimalny = head;
	int min = tmp->key;
	while (tmp)
	{
		if (min>tmp->key)
		{
			minimalny = tmp;
			min = tmp->key;
		}
		tmp = tmp->next;
	}
	return minimalny;
}
void usun(lista* head, lista del)
{
	if (del->next) del->next->prev = del->prev;
	if (del->prev) del->prev->next = del->next;
	else
		*head = del->next;
	free(del);
}
void usun_powt(lista head)
{
	lista tmp = head;
	lista tmp1 = head;
	lista kasuj;
	while (tmp)
	{
		tmp1 = tmp->next;
		while (tmp1)
		{
			if (tmp->key == tmp1->key)
			{
				kasuj = tmp1;
				tmp1 = tmp1->next;
				usun(&head, kasuj);
			}
			else
				tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
}
void tworz_unikalna(lista* head, int n, int a, int b)
{
	if (n>(b - a))
		return;
	srand(time(0));
	lista tmp = *head;
	//lista tmp1=*head;
	lista nowy;
	int x;
	int bad = 1;
	int i;
	for (i = 0; i<n; i++)
	{
		nowy = (lista)malloc(sizeof(elem));
		tmp = *head;
		bad = 1;
		while (bad)
		{
			x = rand() % (b - a + 1) + a;
			bad = 0;
			while (tmp)
			{
				printf("\nwhile: x: %d key: %d", x, tmp->key);

				if (x == tmp->key)
				{
					printf("\ntak: %d", x);
					bad = 1;
				}
				tmp = tmp->next;
			}
		}
		printf("\nmam %d", i);
		nowy->key = x;
		if (*head == NULL)
		{
			*head = nowy;
			(*head)->prev = (*head)->next = NULL;
		}
		else
		{
			tmp = *head;
			while (tmp->next != NULL)
			{

				tmp = tmp->next;
			}
			tmp->next = nowy;
			nowy->next = NULL;
			nowy->prev = tmp;

		}
	}
}