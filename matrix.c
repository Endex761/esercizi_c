#include <stdio.h>

#define RIGHE 3
#define COLONNE 3

int somma(int r, int c, int m[][c]);
void inserimento(int r, int c, int m[][c]);

int main(void)
{
	int matrice[RIGHE][COLONNE];

	inserimento(RIGHE, COLONNE, matrice);

	int somma_diagonale = somma(RIGHE, COLONNE, matrice);

	printf("La somma e' %d \n", somma_diagonale);

	return 0;
}

int somma(int r, int c, int m[][c])
{
	int somma = 0;
	for (int i = 0; i < r; ++i)
	{
		somma += m[i][i];
	}

	return somma;
}

void inserimento(int r, int c, int m[][c])
{
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			printf("Elemento[%d][%d]",i,j);
			scanf("%d", &m[i][j]);
		}
	}
}

