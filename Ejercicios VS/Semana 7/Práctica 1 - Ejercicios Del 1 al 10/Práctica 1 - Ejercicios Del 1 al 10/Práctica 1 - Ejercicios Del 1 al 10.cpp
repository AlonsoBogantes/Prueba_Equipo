// Práctica 1 - Ejercicios Del 1 al 10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
#include <math.h>
#include <vector>
#include <array>
#include "Funciones_Practica1.h"

using namespace std;

int opcion, medida, peso, num;
char continuar;
const double PI = 3.1416;
double r, temperatura;
vector <int> Dado1;
vector <int> Dado2;


struct Estudiante {
    string nombre;
    int nota;
    int ausencias;
    string estado;
};

Estudiante Datos;

// ***** PROTOTIPOS (FIRMAS)   *****   
void Imprime_Columnas();
double Area_Circulo(double r);
double Perimetro_Circulo(double r);
void Conversion_Temperatura();
void Estado_Estudiante();
Estudiante Solicita_Datos(Estudiante Datos);
void Imprime_Info(Estudiante Datos);
void Combinacion_Dados( int num);

int main()
{
    do
    {
        do
        {
            system("cls");
            cout << "\t------------------------------" << endl;
            cout << "\t  ***** MENU PRINCIPAL *****" << endl;
            cout << "\t------------------------------" << endl << endl;
            cout << "\t1- Ejercicio 1: Tabular 2 columnas" << endl;
            cout << "\t2- Ejercicio 2: Area y Perimetro del Circulo" << endl;
            cout << "\t3- Ejercicio 3: Conversion de medidas informaticas" << endl;
            cout << "\t4- Ejercicio 4: Conversion de temperaturas" << endl;
            cout << "\t5- Ejercicio 5: Estado del estudiante" << endl;
            cout << "\t6- Ejercicio 6: Calcula Salario Bruto" << endl;
            cout << "\t7- Ejercicio 7: Conversion de numero Romano a Arabigo" << endl;
            cout << "\t8- Ejercicio 8: Posibles combinaciones de dados" << endl;
            cout << "\t9- Ejercicio 9: Graficar Positivos vs Negativos" << endl;
            cout << endl << "Seleccione una opcion: ";
            cin >> opcion;
        } while (opcion < 1 or opcion > 9);

        switch (opcion)
        {
        case 1:  
            Imprime_Columnas();            //Llama a la función del Ejercicio 1
            break;
        case 2: 
            cout << "Digite el radio del circulo: ";
            cin >> r;
            cout << "\nEl Area del circulo es " << Area_Circulo(r);            //Llama a la función del Ejercicio 2
            cout << " y su perimetro es " << Perimetro_Circulo(r) << endl;
            break;
        case 3: 
            do{
                cout << "Digite el numero correspondiente para el tipo de medida que desea convertir: \n\t 1 - KB\n\t 2 - MB\n\t 3 - GB. \n\t Digite un numero del 1 al 3:  ";
                cin >> medida;
            } while (medida != 1 and medida != 2 and medida != 3);
            cout << "\nIndique la cantidad que desea convertir: ";
            cin >> peso;
            if (medida == 1)
                cout << "El equivalente de Megabytes es de " << peso / 1024 << " MB" << " y en Gigabytes es de " << peso / 1024 / 1024 << " GB" << endl;
            else if (medida == 2)
                cout << "El equivalente de Kilobytes es de " << peso * 1024 << " KB" << " y en Gigabytes es de " << peso / 1024 << " GB" << endl;
            else  // medida == 3
                cout << "El equivalente de Kilobytes es de " << peso * 1024 * 1024 << " KB" << " y en Megabytes es de " << peso * 1024 << " MB" << endl;
            break;
        case 4:    // Llama la Función para el Ejercicio 4
            Conversion_Temperatura();     
            break;
        case 5:   // Llama la Función para el Ejercicio 5
            Estado_Estudiante();
            break;
        case 6:   // Llama la Función para el Ejercicio 6 
            Calcula_Salario();
            break;
        case 7:
            // Llama la Función para el Ejercicio 7
            break;
        case 8:
            Dado1.clear();
            Dado2.clear();
            do{
                cout << "\n\n\tIngrese un valor de 2 a 12: ";
                cin >> num;
            } while (num < 2 or num > 12);
            Combinacion_Dados(num);
            cout << "\n\n\t\t*** DADO 1:" << setw(5);
            for (int valor : Dado1)
                cout << valor << setw(5);
            cout << "\n\n\t\t*** DADO 2:" << setw(5);
            for (int valor : Dado2)
                cout << valor << setw(5);

            // Llama la Función para el Ejercicio 8
            break;
        case 9:
            // Llama la Función para el Ejercicio 9
            Grafico();
            break;
        default:
            break;
        }

        cout << "\n\n\tDesea ejecutar otro ejercicio? (S/N):   ";
        cin >> continuar;
    } while (continuar == 's' or continuar == 'S');
 
  
}

void Imprime_Columnas() {         // Ejercicio 1

    cout << endl << endl;
    cout << setw(15) << "ESTUDIANTE" << setw(25) << "PROMEDIO DEL CURSO" << endl;
    cout << setw(15) << "----------" << setw(25) << "------------------" << endl;
    cout << setw(10) << "1" << setw(23) << "84.5" << endl;
    cout << setw(10) << "2" << setw(23) << "67.2" << endl;
    cout << setw(10) << "3" << setw(23) << "77.4" << endl;
    cout << setw(10) << "4" << setw(23) << "86.8" << endl;
    cout << setw(10) << "5" << setw(23) << "94.7" << endl;

}


double Area_Circulo(double r) {      // Ejercicio 2
    return PI *pow(r,2);
}

double Perimetro_Circulo(double r) {    // Ejercicio 2
    return 2 * PI * r;
}

void Conversion_Temperatura() {      // Ejercicio 4
    double celcius;
    do
    {
        cout << "Digite 1 para calcular una sola temperatura de Fahrenheit a Celcios. " <<endl;
        cout << "Digite 2 para mostrar todas las equivalencias de 0 a 212:     ";
        cin >> opcion;
    } while (opcion <1 or opcion > 2);


    if (opcion == 1) {
        do{
            cout << "Digite la temperatura en Fahrenheid (De 0 a 212 F), para convertir a Grados Celcius ";
            cin >> temperatura;
        } while (temperatura < 0 or temperatura >212);
        cout << "\n\tGrados Fahrenheid " << setw(22) << "Grados Celcius" << endl;
        cout << "\t-----------------" << setw(25) << "-----------------" << endl;
        celcius = 5.0 / 9.0 * (temperatura - 32.0);
        cout  << setw(15) << setprecision(3) << temperatura << setw(25) << setprecision(3) << showpos << celcius << endl;
    }
    else {
        cout << "\n\tGrados Fahrenheid " << setw(22) << "Grados Celcius" << endl;
        cout << "\t-----------------" << setw(25) << "-----------------" << endl;

        for (int i = 0; i <= 212; i++)
        {
            celcius = (5.0 / 9.0 * (i - 32));
            cout << setw(15) << setprecision(3) << i << setw(25) << setprecision(3) << showpos << celcius << endl;
        }
    }

}


void Estado_Estudiante() {       // Ejercicio 5
 
    Estudiante Datos;
    do{
        Datos = Solicita_Datos(Datos);
        if (Datos.nota < 60 or Datos.ausencias >= 2)
            Datos.estado = "Reprobado";
        else if (Datos.nota >= 60 and Datos.nota <70)
            Datos.estado = "Aplazado";
        else
            Datos.estado = "Aprobado";

        Imprime_Info(Datos);
        cout << "\n\n\tDesea incluir otro/a estudiante? (S/N)   ";
        cin >> continuar;

    } while (continuar == 's' or continuar == 'S');

}


Estudiante Solicita_Datos(Estudiante Datos) {
    cout << "Digite el nombre: ";
    cin >> Datos.nombre;
    cout << "Digite la nota: ";
    cin >> Datos.nota;
    cout << "Digite la cantidad de ausencias: ";
    cin >> Datos.ausencias;
    return Datos;
}

void Imprime_Info(Estudiante Datos) {
    cout << "\n\tNOMBRE" << setw(20) << "NOTA" << setw(20) << "AUSENCIAS" << setw(15) << "ESTADO" <<endl;
    cout << "\n\t" << Datos.nombre << setw(20) << Datos.nota << setw(20) << Datos.ausencias << setw(20) << Datos.estado;
}


void Combinacion_Dados(int num) {
    int i = 0;
    int d1, d2;
    if (num > 6) {
        d1 = 6;
        d2 = num - 6;
        do{
            Dado1.push_back(d1);
            Dado2.push_back(d2);
            i++;
            d1--;
            d2++;
        } while ((d1 + d2 == num) && (d2 <= 6) && (d1 > 0));
        
    }
    else {
        d1 = 1;
        d2 = num - 1;
        do {
            Dado1.push_back(d1);
            Dado2.push_back(d2);
            i++;
            d1++;
            d2--;
        } while ((d1 + d2 == num) && (d1 < 6) && (d2 > 0));
    }
}

//¿Cuales son las reglas para escribir los números romanos ?
//El sistema romano, que utiliza los siguientes siete símbolos para la representación(I, V, X, L, C, D y M) y que independientemente de donde estén colocadas las cifras tienen el mismo valor.
//Los símbolos se escriben y leen de izquierda a derecha, de mayor a menor valor.
//Si a la derecha de una cifra romana de escribe otra igual o menor, el valor de ésta se suma a la anterior.
//Si un símbolo está a la izquierda inmediata de otro de mayor valor, se resta al valor del segundo el valor del primero.
//Se permiten a lo sumo tres repeticiones consecutivas del mismo símbolos I, X y C.
//No se permite la repetición de una misma símbolos V, L y D. (Muchos relojes el uso de IIII para el numeral 4, en lugar del correcto IV.)
//La cifra I colocada delante de la V o la X, les resta una unidad; la X, precediendo a la L o a la C, les resta diez unidades y la C, delante de la D o la M, les resta cien unidades.