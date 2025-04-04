//agregar el include para llamar a los programas 
//Agregar funcion para llamar a tus programas
#include<iostream>
#include "Programas Cv.cpp"
using namespace std;

bool esPrimo(int);
int contarDigitos(string);
int contarPalabras(string);
//No tocar este Void es para esperar para regresar al menu 
void esperarTecla() {
	cout << "\n___________________________________";
    cout << "\nPresiona Enter para continuar...";
    cin.ignore();  
    cin.get(); 
}


main(){
	int opcion;
	
	do{
		cout<<"\n Menu \n";
		cout<<"17. Verificar si es Primo o no\n";
		cout<<"18. Contar los Digitos de un Numero\n";
		cout<<"19. Contar las Palabras de una Frase\n";
		cout<<"20. Calcular el MCD \n";
		cout<<"21. Salir\n";
		cout<<"Que necesitas el dia de Hoy?"<<endl;
		cin>> opcion;
		cin.ignore();
		
		
		switch (opcion){
			case 17:{
				int num;
				cout<< "Introduce un Numero:";
				cin>> num;
				cout<< num << (esPrimo(num) ? " Es primo.\n" : "No es primo");
				esperarTecla();
				break;
			}
			case 18: {
				string num;
                cout << "Introduce un numero: ";
                cin >> num;
                cout << "El numero tiene " << contarDigitos(num) << " digitos.\n";
                esperarTecla(); 
				break;
			}
			case 19 : {
				string frase;
                cout << "Introduce una frase: ";
                getline(cin, frase);
                int cantidad = contarPalabras(frase);
                cout << "La frase tiene " << cantidad << " palabra/s.\n";
                esperarTecla();
				break;
			}
			case 20 : {
				int a, b;
                cout << "Introduce el primer n�mero: ";
                cin >> a;
                cout << "Introduce el segundo n�mero: ";
                cin >> b;

                int resultado = encontrarMCD(a, b);
                cout << "El MCD de " << a << " y " << b << " es: " << resultado << "\n";
                esperarTecla();
				break;
			}
		}
		
		
	}while (opcion != 21);
};

