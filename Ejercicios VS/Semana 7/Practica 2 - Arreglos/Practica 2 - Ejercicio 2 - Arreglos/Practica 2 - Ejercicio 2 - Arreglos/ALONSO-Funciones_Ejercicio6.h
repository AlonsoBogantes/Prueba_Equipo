#pragma once

void Burbuja(int a[10]) {
	int temporal;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10- 1; j++) {
			if (a[j] > a[j + 1]) { // Ordena el array de menor a mayor
				temporal = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temporal;
			}
		}
	}
}


void Seleccion (int a[10])
{
	int aux = 0;
	for (int i = 0; i < 9; ++i) {
		int min = i;
		for (int c = i + 1; c < 10; ++c) {
			if (a[min] > a[c]) 
				min = c;
		}
		aux = a[i];
		a[i] = a[min];
		a[min] = aux;
	}
}


void Insercion(int a[10]) {
	int temp = 0;
	int j = 0;

	for (int i = 1; i < 10; i++){
	    temp = a[i];
		j = i - 1;
		while ((a[j] > temp) && (j >= 0)) {
			a[j + 1] = a[j];
			j--;
		}
	    a[j + 1] = temp;
	}
}

bool Busqueda_Secuencial(int a[10], int elem) {
	for (int i = 0; i < 10; i++)
		if (elem == a[i])
			return 1;
	return 0;
}


int Busqueda_Binaria(int a[10], int num)
{
	int Imayor = 9;
	int Imenor = 0;
	int Icentro;
	while (Imenor <= Imayor)
	{
		Icentro = (Imayor + Imenor) / 2;
		if (a[Icentro] == num)
			return Icentro;
		else
			if (num < a[Icentro])
				Imayor = Icentro - 1;
			else
				Imenor = Icentro + 1;
	}
	return -1;
}


int busquedaBinaria(const int arreglo[], int tamano, int clave)
{
	int Iarriba = tamano - 1;
	int Iabajo = 0;
	int Icentro;
	while (Iabajo <= Iarriba)
	{
		Icentro = (Iarriba + Iabajo) / 2;
		if (arreglo[Icentro] == clave)
			return Icentro;
		else
			if (clave < arreglo[Icentro])
				Iarriba = Icentro - 1;
			else
				Iabajo = Icentro + 1;
	}
	return -1;
}