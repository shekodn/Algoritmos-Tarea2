using namespace std;
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>     // std::string, std::stoi
#include <sys/time.h>
#include <chrono>
#include <list>
#include <array>


////////////////////////////////////////////////////////////////////////////////////////////////
//Solucion #3
clock_t timeSol3 = clock();
string sArchivo = "matriculas.txt";


//regresa los ultimos 3 digitos de la matricula
int funcionHash(int iMatricula){
		
	return iMatricula % 1000;
}


//Le archivo de texto y mete matriculas al hash
void leeArchivo3(array<list<int>, 1000> &iMatriculas){


	ifstream matriculas;
	matriculas.open(sArchivo);
	int iMatricula;
	int iLlave;

	
	while (matriculas >> iMatricula){

		iLlave = funcionHash(iMatricula);
		iMatriculas[iLlave].push_back(iMatricula);

	}
	

	matriculas.close();
}




void tiempo(){

	timeSol3 = clock() - timeSol3;
	double ms = double(timeSol3) / CLOCKS_PER_SEC * 1000;
	cout << "time: " << ms << endl;

}




bool buscarMatricula(int iDato, array< list <int>, 1000> iMatriculas) {

	int iLlave = funcionHash(iDato);
	
	while (!iMatriculas[iLlave].empty()){

		if (iMatriculas[iLlave].front() == iDato) {
			return true;
		}

		else {
			iMatriculas[iLlave].pop_front();
		}
	}

	return false;
}



void solucion3(int iDato){
  
  array<list<int>, 1000> iMatriculas;
  
  leeArchivo3(iMatriculas);


  if (buscarMatricula(iDato, iMatriculas)) {

  	cout << "Dato encontrado" << endl;
  }

  else {

  	cout << "Dato NO encontrado" << endl;
  }


  tiempo();

}




int main(int argc, char const *argv[]) {

	int iDato = 744997;

	//cout << "Inserte la matricula que quiere buscar, si quiere salir ponga -1" << endl;
	//cin >> iDato;


	//while (iDato != -1) {

		//Solucion 3
		solucion3(iDato);

		//cout << "Si quiere insertar un dato ponga 1, si quiere salir ponga 0" << endl;
		//cin >> iDato;

	//}

}
