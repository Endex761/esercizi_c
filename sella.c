#include <stdio.h>

int min_riga(int r, int c, int m[][c], int riga);
int max_colonna(int r, int c, int m[][c], int colonna);
void punti_sella(int r, int c, int m[][c]);
void inserimento(int r, int c, int m[][c]);

int main(int argc, char const *argv[])
{
	int m[2][2];
	inserimento(2,2,m);
	punti_sella(2,2,m);
	return 0;
}

int min_riga(int r, int c, int m[][c], int riga)
{
	int min = m[riga][0];

	for (int i = 0; i < c; ++i)
	{
		if(m[riga][i] < min)
			min = m[riga][i];
	}

	return min;
}

int max_colonna(int r, int c, int m[][c], int colonna)
{
	int max = m[0][colonna];

	for (int i = 0; i < r; ++i)
	{
		if(m[i][colonna] > max)
			max = m[i][colonna];
		
	}

	return max;
}

void punti_sella(int r, int c, int m[][c])
{
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			if(m[i][j] == min_riga(r,c,m,i) && m[i][j] == max_colonna(r,c,m,j))
				printf("Punto sella [%d][%d]: %d",i,j,m[i][j]);
		}
	}
}

void inserimento(int r, int c, int m[][c])
{
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			printf("Elemento[%d][%d]:",i,j);
			scanf("%d", &m[i][j]);
		}
	}
}