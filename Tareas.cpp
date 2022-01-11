#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribirFrases();

int main(){
	escribirFrases();
	
	system("pause");
	return 0;
} 

void escribirFrases(){
	ofstream archivo;
	string nombreArchivo,frase;
	char rpt;
	
	cout<<"Digite el nombre de la tarea: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::out);
	
	if(archivo.fail()){ 
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Ingrese la tarea : ";
		getline(cin,frase);
		archivo<<frase<<endl;
		
		cout<<"\nDesea agregar otra tarea(S/N): ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close(); 
	
	}
