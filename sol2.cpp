using namespace std;
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sys/time.h>
#include <chrono>

// cd sdn/TEC/V/Algoritmos/Tareas/Tarea_2/Algoritmos-Tarea2/

//Sergio Diaz
//A01192313
///////////////////////////////////////////////////////////////////////////////

//Globales
string sArchivo = "matriculas.txt";
clock_t timeSol2 = clock();
vector<int> v;  //vector donde se colocan las maticulas

//Le archivo de texto y mete en el vector a las matriculas
void leeArchivo2(){
	ifstream matriculas;
	matriculas.open(sArchivo);
	int iNumero;

	while (matriculas >> iNumero) {
		v.push_back(iNumero);
	}
	//Se ordena el vector en forma ascendiente
	sort(v.begin(), v.end());
  	matriculas.close();
}

void bSearch2(int iDato){
	//binary search
  	if (binary_search(v.begin(), v.end(), iDato)) {
  		cout << "Dato encontrado" << endl;
    }
    else {
    	cout << "Dato NO encontrado" << endl;
    }
}

void tiempo(){
	timeSol2 = clock() - timeSol2;
	double ms = double(timeSol2) / CLOCKS_PER_SEC * 1000;
	cout << "time sol 2: " << ms << endl;
}

void solucion2(int iDato){
	leeArchivo2();
	bSearch2(iDato);
	tiempo();
}

int main(int argc, char const *argv[]) {
	int iDato;
	cout << "Matricula -> "  << " ";
	cin >> iDato;

	while (iDato != -1) {
		solucion2(iDato);
		timeSol2 = clock();
		cout << "si quiere salir ponga -1" << endl;
		cout << "Matricula -> "  << " ";
		cin >> iDato;
	}
}
