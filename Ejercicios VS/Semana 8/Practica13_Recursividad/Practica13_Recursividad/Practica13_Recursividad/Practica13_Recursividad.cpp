// Practica13_Recursividad.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include<stdlib.h>



using namespace std;
#include "Funciones_Recursivas.h"


int main(){
	
	int opcion = 0;
	int numerador, denominador, veces, num, suma, num1, num2, menor;
	int resto = 0;
	int elem = 0;
	int indice, tiempo, camino;
	int resultado = 0;
	vector<int> vNumeros;
	string binario;

	srand(time(NULL));

	do {
		do{
			system("cls");
			cout << "\n\n\t\t **********************************\n";
			cout << "\t\t ***  PRACTICA DE RECURSIVIDAD  ***";
			cout << "\n\t\t **********************************\n";
			cout << "\n\t\t Ejercicios:";
			cout << "\n\t\t\t 1. Division por Restas.";
			cout << "\n\t\t\t 2. Invertir un numero.";
			cout << "\n\t\t\t 3. Sumar digitos de un numero.";
			cout << "\n\t\t\t 4. Calcualar el MCD de 2 numeros.";
			cout << "\n\t\t\t 5. Multiplica elementos de un vector.";
			cout << "\n\t\t\t 6. Busca el numero menor en un vector.";
			cout << "\n\t\t\t 7. .";
			cout << "\n\t\t\t 8. .";
			cout << "\n\t\t\t 9. Salida de la rata.";
			cout << "\n\t\t\t 10. .";
			cout << "\n\t\t\t 11. .";
			cout << "\n\t\t\t 12. Convierte un numero a binario.";
			cout << "\n\t\t\t 0. Salir.";
			cout << "\n\t\t Selecicone una opcion:  ";
			cin >> opcion;
		} while (opcion < 0 or opcion > 12 );

			switch (opcion)
			{
			case 99:
				break;
			case 1:
				system("cls");
				cout << "\n\n\t\t ***  1- DIVISION POR RESTAS  ***\n";
				cout << "\n\n\t\t Digite el numero Dividendo (Numerador): ";
				cin >> numerador;
				cout << "\n\t\t Digite el numero Divisor (Denominador): ";
				cin >> denominador;
				veces = 0;
				cout << "\n\n\t\t La parte entera de la division por resta de " << numerador 
					 << " entre " << denominador << " es " << Division_por_Restas(numerador, denominador, veces);
				cout << "\n\t\t y el resto es " << numerador % denominador << "\n\n";
				system("pause");
				break;
			case 2:
				system("cls");
				cout << "\n\n\t\t ***  2- INVERTIR UN NUMERO  ***\n";
				cout << "\n\n\t\t Digite un numero : ";
				cin >> num;
				cout << "El numero " << num << " invertido es " << Invertir_Numero(num) <<"\n\n";
				system("pause");
				break;
			case 3:
				system("cls");
				cout << "\n\n\t\t ***  3- SUMAR DIGITOS  ***\n";
				cout << "\n\n\t\t Digite un numero : ";
				cin >> num;
				suma = 0;
				cout << "\n\t\t La suma de los digitos del numero " << num << " es " << Sumar_digitos(num, suma) << "\n\n";
				system("pause");
				break;
			case 4:
				system("cls");
				cout << "\n\n\t\t ***  4- CALCULA MCD  ***\n";
				cout << "\n\n\t\t Digite el primer numero : ";
				cin >> num1;
				cout << "\n\n\t\t Digite el segundo numero : ";
				cin >> num2;
				if (num1 < num2) {  // Hay que intercambiar los valores
					int aux = num1;
					num1 = num2;
					num2 = aux;
				}
				//cout << "\n\t\t El MCD de " << num1 << " y "  << num2 << " es " << MCD(num1, num2, resto) << "\n\n";
				cout << "\n\t\t El MCD de " << num1 << " y " << num2 << " es " << MCD(num1, num2) << "\n\n";
				system("pause");
				break;
			case 5:
				system("cls");
				vNumeros.clear();
				cout << "\n\n\t\t *** 5- MULTIPLICA LOS ELEMENTOS DE UN VECTOR ***";
				cout << "\n\n\t\t Digite la cantidad de numeros que va a contener el vector  ";
				cin >> elem;
				for (int i = 1; i <= elem; i++) {
					cout << "\n\t\tIngrese el elemento " << i << ": ";
					cin >> num;
					vNumeros.push_back(num);
				}
				indice = 0;
				resultado = 1;
				
				cout << "\n\n\t El resultado de multiplicar los elementos del vector es: " << Multiplica_Elementos(vNumeros, indice) << "\n\n";
				system("pause");
				break;
			case 6:
				system("cls");
				vNumeros.resize(0);
				cout << "\n\n\t\t *** 6- BUSCA EL MENOR DE UN VECTOR ***";
				cout << "\n\n\t\t Digite la cantidad de numeros que va a contener el vector  ";
				cin >> elem;
				for (int i = 1; i <= elem; i++) {
					cout << "\n\t\tIngrese el elemento " << i << ": ";
					cin >> num;
					vNumeros.push_back(num);
				}
				indice = 0;
				menor = vNumeros[0];
				Busca_Menor(vNumeros, indice, menor);
				cout << "\n\n\t El numero menor del vector es: " << menor << "\n\n";
				system("pause");
				break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				tiempo = 0;
				camino = 0;
				//tiempo = Calcula_Salida();
				cout << "\n\n\t\tEn este caso la rata requirio " << Calcula_Salida() << " minutos para salir\n\n";
				system("pause");
				break;
			case 10:
				break;
			case 11:
				break;
			case 12:
				system("cls");
				cout << "\n\n\t\t ***  12- CONVIERTE A BINARIO  ***\n";
				cout << "\n\n\t\t Digite un numero : ";
				cin >> num;
				binario = "";
				cout << "\n\t\t El numero " << num << " en binario es " << Convierte_a_Binario(num) << "\n\n";
				system("pause");
				break;
				break;
			default:
				break;
			}
	
	} while (opcion != 0);
}

