// Practica 2 - Ejercicio 2 - Arreglos.cpp : 

//  6.	En un archivo de encabezado.h crear las siguientes funciones :
//          a.Ordenamiento por el método de Burbuja
//          b.Ordenamiento por el método de Selección
//          c.Ordenamiento por el método de Inserción
//          d.Búsqueda secuencial
//          e.Búsqueda Binaria
//      Las tres primeras deben recibir en sus parámetros un arreglo convencional pasado por referencia.
//      En un archivo de código fuente crear un arreglo y por medio de un menú permitir que el usuario 
//      pruebe las funciones realizadas.


#include <iostream>
#include <time.h>
#include "Funciones_Ejercicio6.h"


using namespace std;

int opcion;
char resp;
int numeros[10] = {0};
int elem = 0;
int pos;



int main()
{
    srand(time(NULL));
    do {
        for (int i = 0; i < 10; i++)
            numeros[i] = rand() % 31;
        
        do {
            system("cls");
            cout << "\n\n\tLos numeros del arreglo son: ";
            for (int valor : numeros) 
                cout << valor << ", ";

            cout << "\n\n\t------------------------------" << endl;
            cout << "\t  ***** MENU PRINCIPAL *****" << endl;
            cout << "\t------------------------------" << endl << endl;
            cout << "\t1- Ordenamiento por el Metodo de la Burbuja" << endl;
            cout << "\t2- Ordenamiento por el Metodo de Seleccion" << endl;
            cout << "\t3- Ordenamiento por el Metodo de Insercion" << endl;
            cout << "\t4- Busqueda Secuencial" << endl;
            cout << "\t5- Busqueda Binaria" << endl;
            cout << "\t0- SALIR" << endl;
            cout << endl << "Seleccione una opcion: ";
            cin >> opcion;
        } while (opcion < 0 or opcion > 5);

        switch (opcion)
        {
        case 1: {
            Burbuja(numeros);
            cout << "\n\n\tLos numeros ORDENADOS POR BURBUJA son: ";
            for (int valor : numeros)
                cout << valor << ", ";
            break;
        }
        case 2: {
            Seleccion(numeros);
            cout << "\n\n\tLos numeros ORDENADOS POR SELECCION son: ";
            for (int valor : numeros)
                cout << valor << ", ";
            break;
        }
        case 3: {
            Insercion(numeros);
            cout << "\n\n\tLos numeros ORDENADOS POR INSERCION son: ";
            for (int valor : numeros)
                cout << valor << ", ";
            break;
        }
        case 4: {
            cout << "\n\tIngrese el numero a buscar: ";
            cin >> elem;
            if (Busqueda_Secuencial(numeros, elem) == 1)
                cout << "\n\t**** NUMERO ENCONTRADO ****";
            else
                cout << "\n\t---- Numero no encontrado ----";
            break;
        }
        case 5: {
            Burbuja(numeros);
            cout << "\n\n\tLos numeros ORDENADOS son: ";
            for (int valor : numeros)
                cout << valor << ", ";
            cout << "\n\n\tIndique un numero a buscar y se le devolvera la posicion donde esta: ";
            cin >> elem;
            pos = Busqueda_Binaria(numeros, elem);
            if (pos == -1)
                cout << "\n\tEl numero "<< elem <<" no se encuentra en el arreglo.";
            else
                cout << "\n\tEl numero " << elem << " esta en la posicion " << pos + 1;
            break;
        }
        default:
            break;
        }

        cout << "\n\n\t\tDesea probar otra funcion? (S/N)  ";
        cin >> resp;
    } while (resp == 'S' or resp == 's');
}


