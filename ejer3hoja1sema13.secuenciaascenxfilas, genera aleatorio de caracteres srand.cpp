
#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;
using namespace System;

int IngresaPositivo()
{
	int Num;
	do
	{
		cout << "Ingerese Numero Positivo:"; cin >> Num;
	} while (Num <= 0 || Num > 50);
	return Num;
}
void GeneraAleatorio(int N, int Vector[])
{
	srand(time(NULL));
	for (int i = 0; i<N; i++)
		Vector[i] = 1 + rand() % (100); //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
}

void GeneraAleatorioCaracteres(int N, char Nivel[])
{
	srand(time(NULL));
	for (int i = 0; i<N; i++)
		Nivel[i] = 'a' + rand() % (('z' - 'a') + 1); //variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
}
void ImprimeCaracteres(int N, char Nivel[])

{
	for (int i = 0; i<N; i++)
		cout << "Valor " << i + 1 << " :" << Nivel[i] << endl;
}
void ImprimeArreglo(int N, int Vector[])

{
	for (int i = 0; i<N; i++)
		cout << "Valor " << i + 1 << " :" << Vector[i] << endl;
}
void ImprimeSecuencias(int N, int Vector[])
{
	int i = 0;
	while (i< N)
	{
		if (Vector[i]<Vector[i + 1] && (i + 1 <= N - 1))
		{
			cout << "-";
			cout << Vector[i] << " " << Vector[i + 1] << " ";
			if (Vector[i + 1] > Vector[i + 2])
				cout << endl;
			i = i + 2;

		}
		else
		{
			cout << "*";
			cout << Vector[i] << endl;
			i++;

		}
	}
}

int main()
{
	int *Vector, N;
	char *Nivel;

	N = IngresaPositivo();
	Vector = new int[N];
	Nivel = new char[N];
	GeneraAleatorio(N, Vector);
	ImprimeArreglo(N, Vector);
	ImprimeSecuencias(N, Vector);
	GeneraAleatorioCaracteres(N, Nivel);
	ImprimeCaracteres(N, Nivel);
}