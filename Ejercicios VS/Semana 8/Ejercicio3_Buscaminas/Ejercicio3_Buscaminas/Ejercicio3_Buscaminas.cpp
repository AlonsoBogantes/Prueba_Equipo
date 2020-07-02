// Ejercicio3_Buscaminas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <array>
#include<stdlib.h>
#include<time.h>
using namespace std;

struct control {
    int num;
    bool marcado;
};

const int n = 6;
array<array<control, n + 2>, n + 2> matriz = {0};
int cant_minas = 0;
int fila, col, marcas_max, marcas = 0;
bool mina;

#include "Funciones_Buscaminas.h"

int main()
{
    Encabezado();
    cout << "Indique el numero de minas que quiere colocar: ";
    cin >> cant_minas;
    Coloca_Minas(cant_minas);
    //Imprime_Matriz_Completa();
    //Imprime_Matriz();
    Actualiza_Matriz();
    marcas_max = n * n - cant_minas;
    marcas = 0;
    mina = false;
    do{
        system("cls");
        Encabezado();
        Imprime_Matriz();
        Imprime_Matriz_Juego();
        cout << "\n\tHa realizado " << marcas << " marcas.";
        cout << "\n\n\t\tIndique la FILA en la que quiere marcar: ";
        cin >> fila;
        cout << "\n\t\tIndique la COLUMNA en la que quiere marcar: ";
        cin >> col;
        if (matriz[fila][col].num == -1)
            mina = true;
        else{
            if (!matriz[fila][col].marcado) {
                matriz[fila][col].marcado = 1;
                marcas++;
            }
        }
    } while (!mina && marcas < marcas_max);

    if (mina)
        cout << "MINAAAAAA....   PERDIO EL JUEGO!!!";
    else {
        cout << "\n\n\n";
        cout << "\t\t\t******************************************" << endl;
        cout << "\t\t\t****** FELICIDADES!!! HA GANADO...  ******" << endl;
        cout << "\t\t\t******************************************" << endl << endl;
    }
}

