#include <iostream>

using namespace std;
int menu(){
    
	int Opcion = 0;
	while(Opcion !=4 ){
		
	
	cout<<"      MENU     "<<endl;
    cout << "1.- Triangulo pascal" << endl;
    cout << "2.- Ejercicio de desviacion" << endl;
    cout << "3.- Grafico de Barra" << endl;
    cout << "4.- Opcion de salida" << endl;  
	cout << "--------------------------" << endl;   
    cout << "\nIngrese una opcion: ";
    cin >> Opcion;	
	
	if(Opcion == 4){
		cout << "4.- Ha decidido salir al sistema" << endl;   
	}
}
return 0;
}

	


int main() {


int opcion = menu();
switch (opcion){
	case 1:{
		
		
		break;
	}
	case 2:{
		
		
		break;
	}
	case 3:{
		
		
		break;
	}
	case 4:{
		
		
		break;
	}
}

	return 0;
}