using namespace std;
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>     // std::string, std::stoi
#include <sys/time.h>
#include <chrono>

//Sergio Diaz
//A01192313

//Globales
string sArchivo = "matriculas.txt";
clock_t timeSol1 = clock();
//clock_t timeSol2 = clock();
//clock_t timeSol3 = clock();


// cd sdn/TEC/V/Algoritmos/Tareas/Tarea_2/Algoritmos-Tarea2/
////////////////////////////////////////////////////////////////////////////////////////////////
//Solucion #1
//Arreglo para solución #1
int iSize = 154750;
int arr1[154750];

//mock
//int arr1[10];
//int iSize = 10;

//Le archivo de texto y mete en el arreglo a las matriculas
void leeArchivo1(){

	ifstream matriculas;
	matriculas.open(sArchivo);
	int iNumero;
	int iPosicion = 0;

	while (matriculas >> iNumero) {
		arr1[iPosicion] = iNumero;
		iPosicion++;
	}

	matriculas.close();
}

void buscarArreglo(int iDato){

	bool find = false;

	for (int i = 0; i < iSize; i++) {
		if  (arr1[i] == iDato) {
			find = true;
			break;
		}
	}

	if (find) {
		cout << "Dato encontrado" << endl;
	}

	else {
		cout << "Dato NO encontrado" << endl;
	}
}



void solucion1(int iDato){

	//cout << "Solucion #1" << endl;
	leeArchivo1();
	buscarArreglo(iDato);


}

int main(int argc, char const *argv[]) {



	int iDato = 744997;

	//cout << "Inserte la matricula que quiere buscar, si quiere salir ponga -1" << endl;
	//cin >> iDato;


	//while (iDato != -1) {

		//Solucion 1
		//solucion1(iDato);

		//cout << "Si quiere insertar un dato ponga 1, si quiere salir ponga 0" << endl;
		//cin >> iDato;

	//}


	timeSol1 = clock() - timeSol1;
	double ms = double(timeSol1) / CLOCKS_PER_SEC * 1000;
	cout << "time sol 1: " << ms << endl;

}
