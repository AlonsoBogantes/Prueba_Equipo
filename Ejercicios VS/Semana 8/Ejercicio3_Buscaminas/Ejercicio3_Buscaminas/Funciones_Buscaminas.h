#pragma once

void Encabezado() {
    cout << "\n\n\n";
    cout << "\t\t   ******************************************" << endl;
    cout << "\t\t   ********** JUEGO DE BUSCAMINAS  **********" << endl;
    cout << "\t\t   ******************************************" << endl << endl;
}


void Coloca_Minas(int cm) {
    int fila, col, cont = 0;
    srand(time(NULL));

    do{
        fila = 1 + rand() % n;
        col = 1 + rand() % n;
        if (matriz[fila][col].num == 0) {
            matriz[fila][col].num = -1;
            cont++;
        }
    } while (cont < cm); 
}


int Cuenta_Minas(int x, int y) {
    int cant = 0;
    for (int i = x - 1; i <= x+1; i++) {
        for (int j = y - 1; j <= y+1; j++) {
            if (matriz[i][j].num == -1)
                cant++;
        }
    }
    return cant;
}

void Actualiza_Matriz() {

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (matriz[i][j].num == 0)
                matriz[i][j].num = Cuenta_Minas(i, j);
        }
    }
}
void Imprime_Matriz_Completa() {
    string espacios = "   ";
    for (int i = 0; i <= n+1; i++) {
        cout << endl << "\t";
        for (int j = 0; j <= n+1; j++) {
            if (matriz[i][j].num == 0)
                cout << " " << espacios << matriz[i][j].num << "," << matriz[i][j].marcado;
            else
                cout << espacios << matriz[i][j].num << "," << matriz[i][j].marcado;
        }
    }
    cout << endl;
}


void Imprime_Matriz() {
    string espacios = "   ";
    for (int i = 1; i <= n; i++) {
        cout << endl<< "\t\t ";
        for (int j = 1; j <= n; j++) {
            if (matriz[i][j].num != -1)
                cout <<  " " << espacios << matriz[i][j].num << "," << matriz[i][j].marcado;
            else
                cout << espacios << matriz[i][j].num << "," << matriz[i][j].marcado;
        }
    }
    cout << endl;
}


void Imprime_Matriz_Juego() {
    string espacios = "      ";
    for (int i = 1; i <= n; i++) {
        cout << endl << "\t\t";
        for (int j = 1; j <= n; j++) {
            if (matriz[i][j].marcado)
                cout << espacios << matriz[i][j].num;
            else
                cout << espacios << "X";
        }
    }
    cout << endl;
}