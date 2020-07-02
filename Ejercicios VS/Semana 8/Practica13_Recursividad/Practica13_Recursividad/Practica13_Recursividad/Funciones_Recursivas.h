#pragma once

int Division_por_Restas(int n, int d, int veces) {
	
	//caso base
	if (n < d)
		return veces;
	else {
		veces++;
		Division_por_Restas(n - d, d, veces);	
	}
}

string Invertir_Numero(int n) {
	string nInvertido;
	if (n < 10)
		nInvertido = to_string(n);
	else{
		nInvertido = to_string(n % 10) + Invertir_Numero(n / 10);
	}
	return nInvertido;
}

int Sumar_digitos(int num, int suma) {
	int digito;
	if (num == 0)
		return suma;
	else {
		digito = (num % 10);
		suma = suma + digito;
		Sumar_digitos(num/10, suma);
	}		
}


//int MCD(int num1, int num2, int resto) {
//	if ((num1 % num2) == 0)
//		return num2;
//	else {
//		resto = num1 % num2;
//		num1 = num2;
//		num2 = resto;
//		MCD(num1, num2, resto);
//	}
//}

int MCD(int num1, int num2) {
	if ((num1 % num2) == 0)
		return num2;
	else {
		MCD(num2, num1 % num2);
	}
}

int Multiplica_Elementos(vector<int>vNumeros, int indice) {
	if (vNumeros.size()-1 == indice)
		return vNumeros[indice];
	else {
		return  vNumeros[indice]* Multiplica_Elementos(vNumeros, indice+1);
	}
}


//int Calcula_Salida(int t, int camino) {
//	camino = 1 + rand() % 3;  // escoge un camino al azar
//	if (camino == 3)
//		return t + 7;
//	else if (camino == 2){
//		t = t + 5;
//		Calcula_Salida(t, camino);
//	}
//	else {
//		t = t + 3;
//		Calcula_Salida(t, camino);
//	}
//}

int Calcula_Salida(int t) {
	int camino;
	camino = 1 + rand() % 3;  // escoge un camino al azar
	if (camino == 3)
		return t + 7;
	else if (camino == 2) {
		t = t + 5;
		Calcula_Salida(t);
	}
	else {
		t = t + 3;
		Calcula_Salida(t);
	}
}

int Calcula_Salida() {
	int camino;
	camino = 1 + rand() % 3;  // escoge un camino al azar
	if (camino == 3)
		return 7;
	else if (camino == 2) {
		return Calcula_Salida() + 5;
	}
	else {
		return Calcula_Salida() + 3;
	}
}
int Busca_Menor(vector<int>vNums, int indice, int &menor) {
	if (vNums.size() == indice)
		return menor;
	else {
		if (vNums[indice] < menor)
			menor = vNums[indice];
		indice++;
		Busca_Menor(vNums, indice, menor);
	}
}

string Convierte_a_Binario(int num) {
	if (num == 0)
		return to_string(num);
	else {
		return Convierte_a_Binario(num / 2) + to_string(num % 2);
	}
}