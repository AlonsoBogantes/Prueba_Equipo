// Practica 2 - Arreglos.cpp 
// Ejercicio 1: Una compañía paga a sus vendedores por comisión. Los vendedores reciben $200 por semana 
// más 9% de sus ventas totales de esa semana. Por ejemplo, un vendedor que acumule $5000 en ventas en una semana, 
// recibirá $200 más el 9% de $5000 para un total de $650. Escriba un programa (utilizando arreglos) lea un conjunto 
// de 10 ventas semanales y que determine cuántos vendedores recibieron salarios en cada uno de los siguientes rangos:
// 
// a.	200 - 299           f. 700 - 799
// b.	300 - 399           g. 800 - 899
// c.	400 - 499           h. 900 - 999
// d.	500 - 599           i. 1000 o más
// e.	600 - 699


#include <iostream>
#include <iomanip>

using namespace std;

char continuar;
const int salario_base = 200;
const double comision = 10;
const int cant_ventas = 4;
int ventas[cant_ventas] = {0};
int rangos[9] = {0};
int monto_venta = 0;
double salario_bruto = 0;
int indice = 0;
int acum_ventas;


int main(){
	do{
		system("cls");
		cout << " *******************************************" << endl;
		cout << " ****  REGISTRO DE VENTAS POR EMPLEADO  ****" << endl;
		cout << " *******************************************" << endl << endl;

		acum_ventas = 0;
		//  Llena el arreglo de las ventas de un vendedor
		for (int i = 0; i < cant_ventas; i++){
			cout << "\n\tIngrese la venta " << i + 1 << ":  ";
			cin >> monto_venta;
			ventas[i] = monto_venta;
			//acum_ventas += monto_venta;
		}
		for (int valor : ventas) {
			acum_ventas += valor;
		}
		cout << "\n\nLas ventas de este vendedor son: ";
		for (int valor : ventas) {
			cout << valor << setw(5);
		}
		salario_bruto = salario_base + acum_ventas * comision / 100;
		cout << "\n\n\t***** Total de ventas: " << acum_ventas;
		cout << "\n\t***** Total Comisiones ("<<comision<<"%): " << acum_ventas * comision / 100;
		cout << "\n\t***** Salario Base: " <<salario_base;
		cout << "\n\t***** TOTAL SALARIO (Salario Base + Comisiones): " << salario_bruto << endl;

		indice = (trunc(salario_bruto) / 100) - 2;
		if (indice > 8)
			indice = 8;
		rangos[indice]++;
		cout << "\n\n\t\t Desea ingresar otro vendedor? (S/N):  ";
		cin >> continuar;
	} while (continuar == 'S' or continuar == 's' );
	
	for (int i = 0; i < 8; i++){
		cout << "\n Rango de " << i*100+200 <<" hasta "<< i*100+299<< ": ";
		cout << rangos[i];
	}
	cout << "\n Rango de 1.000 o mas  : " << rangos[8]<<endl <<endl;
	system("pause");
}

