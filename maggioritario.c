#include <stdio.h>

#define DIM 10

int maggioritario(int v[], int dim);
void inserimento(int v[], int dim);

int main(int argc, char const *argv[])
{
	int vettore[DIM];

	inserimento(vettore, DIM);

	int risultato = maggioritario(vettore, DIM);

	if(risultato == 1)
	{
		printf("Il vettore e' maggioritario\n");
	}
	else
	{
		printf("Il vettore non e' maggioritario\n");
	}

	return 0;
}

int maggioritario(int v[], int dim)
{
	for (int i = 0; i < dim; ++i)
	{
		int conteggio = 0;

		for (int j = 0; j < dim; ++j)
		{
			if(v[i] == v[j])
				conteggio++;
		}

		if (conteggio >= dim/2)
		{
			return 1;
		}
	}

	return 0;
}

void inserimento(int v[], int dim)
{
	printf("Inserisci i valori\n");

	for (int i = 0; i < dim; ++i)
	{
		printf("Elemento[%d]:\n", i);
		scanf("%d", &v[i]);
	}
}