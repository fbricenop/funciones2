#include <iostream>
using namespace std;
void menu();
void deposito();
void retiro();
void mostrar();
int monto=0;
int main(){
	menu();
	return 0;
}
void menu(){
	int sec=0;
	do{
		cout<<"---CAJERO AUTOMATICO---"<<endl<<"1.DEPOSITAR 100 SOLES"<<endl<<"2.RETIRAR 100 SOLES"<<endl<<"3.MOSTRAR SALDO DE CUENTA";
		cout<<endl<<"4.SALIR"<<endl<<"SELECCIONE ALGUNA DE LAS OPCIONES: ";cin>>sec;
		switch (sec){
			case 1:{
				deposito();			
				break;
			}
			case 2:{
				retiro();
				break;
			}
			case 3:{
				mostrar();
				break;
			}
			case 4:{
				cout<<"SALIDA EXITOSA.";
				break;
			}
			default:
				cout<<"INGRESAR SOLO ALGUNA DE LAS OPCIONES DE LA PANTALLA";
		}
	}while(sec != 4);	
}
void deposito(){
	monto+=100;
}
void retiro(){
	if(monto>=100){
		monto-=100;
	}else if(monto<100){
		cout<<"DINERO INSUFICIENTE";//MOSTAR EL DINERO CON EL QUE CUENTA
	}
}
void mostrar(){
	cout<<"SU MONTO ACTUAL ES: "<<monto<<endl;
}