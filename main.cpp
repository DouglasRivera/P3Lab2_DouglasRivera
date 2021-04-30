#include <iostream>
#include <ctime>
#include <math.h>
#include <cstdlib>
using namespace std;

int menu();
void EjerDesviacion();
void EjerGrafico();

void EjerDesviacion(){
		//Declaracion de Random
    srand(time(0));
    //declaracion de array en stack
    int array [20] = {};  
    //ciclo for de llenado del stack con numeros random
    for(int i = 0; i < 20; i++){
        array[i] = 1 + rand() % 100;
    }
    for(int i = 0; i < 20; i++){
        cout << "[ " << array[i] << " ]";
    }
    cout << endl << endl;
    double promedio = 0;

    //ciclo que calcula el promedio de el arreglo;    
    for(int i = 0; i < 20; i++){
        promedio += array[i];
    }  
    promedio = promedio / 20;
    
    int sumatoria = 0;
    //ciclo que calcula la desviacion estandar
    for(int i = 0; i < 20; i++){
        double var = array[i] - promedio;
        sumatoria += (var * var);   
    }
    sumatoria = sumatoria / 20;
    double total = sqrt(sumatoria); 
    cout << "La desviacion estandar poblacional del arreglo es: " << total
            << endl << endl;
		
}
void EjerGrafico(){
	int array1 [10] = {};
    int array2 [10] = {};  
    //llenado de ambos arreglos con rand
    for(int i = 0; i < 10; i++){
        array1[i] = 1 + (rand() % 20);
        array2[i] = 1 + (rand() % 20);
    }
    //declaracion de chars a imprimir;
    //ciclo que imprime ascii 177 0 178 segun num en arreglo
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < array1[i]; j++){
            cout << (char)177 << " ";
        }
        cout << endl;
        for(int k = 0; k < array2[i]; k++){
            cout << (char)178 << " ";
        }
         cout << endl;
    }
    cout << endl << endl;
}


int main() {


int opcion = menu();
switch (opcion){
	case 1:{
		cout << endl;
	    cout << "Iteraciones(Triangulo pascual)" << endl;
		
		cout <<endl;
		break;
	}
	case 2:{
	      cout << endl;
	      cout << "Sumatoria(Desviacion Estandar)" << endl;
	      EjerDesviacion();
	      cout <<endl;
		break;
	}
	case 3:{
		  cout << endl;
	      cout << "ASCII(Grafico de Barra)" << endl;
	      EjerGrafico();
	      cout <<endl;
		break;
	}
	case 4:{
		cout << "Saliendo del menu........" << endl;
		
		break;
	}
}

	return 0;
}
int menu() {
	int opcion;
	cout << "----MENU----" << endl;
	cout << "1. Ejercicio de Iteraciones" << endl;
	cout << "2. Ejercicio de Desviacion" << endl;
	cout << "3. Ejercicio de Grafica" << endl;
	cout << "4. Opcion de Salida del menu" << endl;
	cout << endl;
	cout << "Ingrese la opcion: ";
	cin >> opcion;
	cout << endl;
	return opcion;
}

