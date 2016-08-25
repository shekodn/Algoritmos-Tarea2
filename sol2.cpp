using namespace std;
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sys/time.h>
#include <chrono>
#include <math.h>       /* log */


// cd sdn/TEC/V/Algoritmos/Tareas/Tarea_2/Algoritmos-Tarea2/

//Sergio Diaz
//A01192313
///////////////////////////////////////////////////////////////////////////////

//Globales
string sArchivo = "matriculas.txt";
clock_t timeSol2 = clock();

void printComparaciones(int iNumero){

	cout << "Comparaciones: " << iNumero << endl;

}


//Le archivo de texto y mete en el vector a las matriculas
vector<int> leeArchivo2(vector<int> v){
	ifstream matriculas;
	matriculas.open(sArchivo);
	int iNumero;

	while (matriculas >> iNumero) {
		v.push_back(iNumero);
	}

	//Se ordena el vector en forma ascendiente
	sort(v.begin(),v.end());

  	matriculas.close();

	return v;
}


void tiempo(){
	timeSol2 = clock() - timeSol2;
	double ms = double(timeSol2) / CLOCKS_PER_SEC * 1000;
	cout << "time sol 2: " << ms << endl;
}


int myBinarySearch(vector<int> v, int iFirst,int iLast, int iDato, int iComparaciones){
	
	int index;
	iComparaciones = 1 + iComparaciones);

	if (iFirst > iLast){
		iComparaciones++;
		index = -1;
	}

	else {
		int iMiddle = (iFirst + iLast)/2;

		if (iDato == v[iMiddle]){
			index = iMiddle;
			iComparaciones++;
		}
		else{

			if (iDato < v[iMiddle]){
				
				index = myBinarySearch(v,iFirst, iMiddle - 1, iDato, iComparaciones);
				iComparaciones++;
			}

			else{
				index = myBinarySearch(v, iMiddle + 1, iLast, iDato, iComparaciones);
				iComparaciones++;
			}
		}

 	} 
 
 return index;

 }

void solucion2(int iDato){

	vector<int> myVector;  //vector donde se colocan las maticulas	
	int iComparaciones = 0;
	myVector = 	leeArchivo2(myVector);

	printComparaciones(iComparaciones);


	if ( myBinarySearch(myVector, 0, myVector.size() - 1, iDato, iComparaciones) == -1 ){
		cout << "Dato NO encontrado" << endl;
	} else {
		cout << "Dato encontrado" << endl;
	}
	

	printComparaciones(iComparaciones);

	tiempo();

	printComparaciones(iComparaciones);
}






int main(int argc, char const *argv[]) {
	
	int iDato;
	cout << "Matricula -> "  << " ";
	cin >> iDato;

	while (iDato != 0) {
		solucion2(iDato);
		timeSol2 = clock();
		cout << "si quiere salir ponga 0" << endl;
		cout << "Matricula -> "  << " ";
		cin >> iDato;
	}	
}

