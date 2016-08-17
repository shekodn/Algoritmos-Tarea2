using namespace std;
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>


//Sergio Diaz
//A01192313

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
	matriculas.open("matriculas.txt");
	int iNumero;
	int iPosicion = 0;

	while (matriculas >> iNumero) {

		cout << iNumero << endl;
		arr1[iPosicion] = iNumero;
		iPosicion++;

	}

	//matriculas.close();
	iPosicion = 0;
}

void buscarArreglo(int iDato){

	bool find = false;
	int iPosicion = 0;

	for (int i = 0; i < iSize; i++) {

		if  (arr1[iPosicion] == iDato) {

			find = true;
			break;
		}

		iPosicion++;
	}

	if (find) {

		cout << "Dato encontrado" << endl;

	}

	else {

		cout << "Dato no encontrado" << endl;
	}

}



void solucion1(){

	cout << "Solucion #1" << endl;
	leeArchivo1();
	buscarArreglo(4855469);


}


////////////////////////////////////////////////////////////////////////////////////////////////
//Solucion #2

vector<int> v;  

//Le archivo de texto y mete en el vector a las matriculas
void leeArchivo2(){

	ifstream matriculas;
	matriculas.open("mock.txt");
	int iNumero;

	while (matriculas >> iNumero) {

		cout << iNumero << endl;
		v.push_back(iNumero);



	}

	//Sort
	sort(v.begin(), v.end());

	//Print
	cout << "vecotor:" << endl;
  	for (vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
    cout << * it << endl;
  	cout << endl;

}



void solucion2(){

	leeArchivo2();


}

void solucion3(){


}

int main(int argc, char const *argv[]) {
	

	//Solucion 1
	//solucion1();
	
	//Solucion 2
	solucion2();

	//Solucion 3
	solucion3();
}