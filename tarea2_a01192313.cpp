using namespace std;
#include <iostream>
#include <fstream>

// cd sdn/TEC/V/Algoritmos/Tareas/Tarea_2/Algoritmos-Tarea2/

////////////////////////////////////////////////////////////////////////////////////////////////
//Solucion #1
//Arreglo para solución #1
int arr1[154750];


//Le archivo de texto y mete en el arreglo a las matriculas
void leeArchivo(){

	ifstream matriculas;
	matriculas.open("matriculas.txt");
	int iNumero;
	int iPosicion = 0;

	while (matriculas >> iNumero) {

		//cout << iNumero << endl;
		arr1[iPosicion] = iNumero;
		iPosicion++;

	}

	matriculas.close();
	iPosicion = 0;
}



void solucion1(){

	leeArchivo();


}

void solucion2(){


}

void solucion3(){


}

int main(int argc, char const *argv[]) {
	

	//Solucion 1
	cout << "Solucion #1" << endl;
	solucion1();
	
	//Solucion 2
	solucion2();

	//Solucion 3
	solucion3();
}