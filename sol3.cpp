using namespace std;
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>     // std::string, std::stoi
#include <sys/time.h>
#include <chrono>

////////////////////////////////////////////////////////////////////////////////////////////////
//Solucion #3
int arrHash[1000]; //arreglo estático de 1000 posiciones

void solucion3(int iDato){


}

//Le archivo de texto y mete en el arreglo a las matriculas
void leeArchivo3(){

	ifstream matriculas;
	matriculas.open(sArchivo);
	int iNumero;

	while (matriculas >> iNumero){
	}

	matriculas.close();
}



int funcionHash(int iNumero){
	iNumero = iNumero % 1000;
	return iNumero;
}


bool buscarMatricula(int iDato, array< list <int>, 1000> iMatriculas) {


}




int main(int argc, char const *argv[]) {



	int iDato = 744997;

	//cout << "Inserte la matricula que quiere buscar, si quiere salir ponga -1" << endl;
	//cin >> iDato;


	//while (iDato != -1) {

		//Solucion 3
		//solucion3(iDato);

		//cout << "Si quiere insertar un dato ponga 1, si quiere salir ponga 0" << endl;
		//cin >> iDato;

	//}


	cout << "Posicion" << funcionHash(5289313) << " " << endl;;
	timeSol3 = clock() - timeSol3;
	double ms = double(timeSol3) / CLOCKS_PER_SEC * 1000;
	cout << "time: " << ms << endl;

}
