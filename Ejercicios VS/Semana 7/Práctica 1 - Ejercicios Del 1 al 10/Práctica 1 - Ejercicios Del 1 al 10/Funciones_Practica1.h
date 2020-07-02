#pragma once
#include <iostream>
#include <iomanip>

using namespace std;

struct sEmpleado {
	string nombre_e;
	double h_trabajadas=0;
	double salario_hora=0;
	double salario_ord=0;
	double salario_ext=0;
	double salario_bruto=0;
};

sEmpleado Empl;

sEmpleado Planilla[4];


sEmpleado Solicita_Info(sEmpleado Empl);
void Imprime_Planilla(sEmpleado Planilla[]);


void Calcula_Salario() {
		
	for (int i = 0; i < 4; i++)
	{
		Planilla[i] = Solicita_Info(Empl);
	}
	Imprime_Planilla(Planilla);
}


sEmpleado Solicita_Info(sEmpleado Empl) {
	cout << "\nIngrese el nombre: ";
	cin >> Empl.nombre_e;
	cout << "\nIngrese la cantidad de horas trabajadas: ";
	cin >> Empl.h_trabajadas;
	cout << "\nIngrese el Salario por Hora: ";
	cin >> Empl.salario_hora;
	if (Empl.h_trabajadas <= 40)
		Empl.salario_ord = Empl.h_trabajadas * Empl.salario_hora;
	else {
		Empl.salario_ord = 40 * Empl.salario_hora;
		Empl.salario_ext = (Empl.h_trabajadas-40) * Empl.salario_hora*1.5;
	}
	Empl.salario_bruto = Empl.salario_ord + Empl.salario_ext;

	return Empl;
}


void Imprime_Planilla(sEmpleado Planilla[]) {
	
	cout << "\n\n\n\tNombre" << setw(20) << "Horas Trabajadas" << setw(20) << "Salario x Hora" << setw(20) << 
		     "Salario Ordinario" << setw(20) << "Salario Extra" << setw(20) << "Salario Bruto";
	
	for (int i = 0; i < 4; i++)
	{
		cout << "\n\t" << Planilla[i].nombre_e << setw(20) << Planilla[i].h_trabajadas << setw(20) << Planilla[i].salario_hora 
			 << setw(20) << Planilla[i].salario_ord << setw(20) << Planilla[i].salario_ext << setw(20) << Planilla[i].salario_bruto;
	}

}



void Grafico() {
	int num, posit, negat;
	posit = 0;
	negat = 0;
	cout << "Ingrese varios valores, termine con 0" <<endl;
	cin >> num;
	while (num!=0)
	{
		if (num > 0)
			posit++;
		else
			negat++;
		cin >> num;
	}

	cout << "\n\tPositivos: ";
	for (int i = 0; i < posit; i++)
		cout << "*";

	cout << "\n\tNegativos: ";
	for (int i = 0; i < negat; i++)
		cout << "*";
}