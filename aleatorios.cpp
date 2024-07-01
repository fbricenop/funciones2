#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;



int main(){
	int n,cantidad;
	srand(time(0));
	int superior=0, inferior=0;
	cout<<"INGRESA EL LIMITE MAXIMO: ";
	cin>>superior;
	cout<<"INGRESA LA CANTIDAD DE NUMEROS ALETORIOS A IMPRIMIR: ";
	cin>>cantidad;
	for(int i=0;i<cantidad;i++){
		n=inferior + rand()%(superior +1 -inferior);//al crear la variable n dentreo del bucle, al reiniciarse este tambien lo hace la creacion de la variable, por eso varios nunmeros aletorios diferentes
		cout<<n<<endl;	
	}
	
	
	return 0;
}
