#include <iostream>
#include <math.h>

using namespace std;

int main (void)
{
	
	float renta, sueldo, internet, agua, luz, seguridad, transporte, despensa, sobrante;
	
	
	cout<<"Ingrese su sueldo: $";
	cin>>sueldo;
	
	renta=sueldo*.20;
	internet=sueldo*.50;
	agua=sueldo*.05;
	luz=sueldo*.03;
	seguridad=sueldo*.02;
	transporte=sueldo*.15;
	despensa=sueldo*.20;
	
	
	
	cout<<endl;
	cout<<"usted gana por cada concepto :"<<endl<<endl;
	cout<<"- Renta 5% :       $ "<<renta<<endl;
	cout<<"- Internet 5% :    $ "<<internet<<endl;
	cout<<"- Agua 3% :        $ "<<agua<<endl;   
	cout<<"- Luz 2% :         $ "<<luz<<endl;
	cout<<"- Seguridad 2% :   $ "<<seguridad<<endl; 
	cout<<"- Transporte 15% : $ "<<transporte<<endl;
	cout<<"- Despensa 20% :   $ "<<despensa<<endl;
	
	sobrante=sueldo-renta-internet-agua-luz-seguridad-transporte-despensa;

	cout<<endl;
	cout<<"A ustes le sobra   $"<<sobrante<<"pesos."<<endl;
	
	
	
	
	
	

	
	
	
	
}
