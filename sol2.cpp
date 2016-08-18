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
clock_t timeSol2 = clock();


// cd sdn/TEC/V/Algoritmos/Tareas/Tarea_2/Algoritmos-Tarea2/
////////////////////////////////////////////////////////////////////////////////////////////////
//Solucion #1
//Arreglo para solución #1
int iSize = 154750;

////////////////////////////////////////////////////////////////////////////////////////////////
//Solucion #2

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

	//se impirme vector
	/*
	cout << "Vector:" << endl;
  	for (vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
    cout << * it << endl;
  	cout << endl;
  	*/

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


void solucion2(int iDato){

	leeArchivo2();
	bSearch2(iDato);

}




int main(int argc, char const *argv[]) {

	int iDato = 744997;

	//cout << "Inserte la matricula que quiere buscar, si quiere salir ponga -1" << endl;
	//cin >> iDato;


	//while (iDato != -1) {

		//Solucion 2
		//solucion2(iDato);

		//cout << "Si quiere insertar un dato ponga 1, si quiere salir ponga 0" << endl;
		//cin >> iDato;

	//}


	timeSol2 = clock() - timeSol2;
	double ms = double(timeSol2) / CLOCKS_PER_SEC * 1000;
	cout << "time: " << ms << endl;

}
