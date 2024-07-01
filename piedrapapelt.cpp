#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main(){
	int usuario,maquinaw=0,userw=0,draw=0;	
	do{
		cout<<endl<<"INGRESA TU ELECCION USUARIO: "<<endl<<"1)PIEDRA\n2)PAPEL\n3)TIJERA"<<endl;
		srand(time(0));
		int opciones=rand()%3+1;
		cin>>usuario;
		switch(opciones){
			case 1:{
				if(usuario==3){
					cout<<"MAQUINA GANA";
					maquinaw++;
				
				}else if(usuario==2){
					cout<<"USUARIO GANA";
					userw++;
				}else if(usuario ==opciones){
					cout<<"EMPATE";
					draw++;
				}
				break;
			}
			case 2:{
				if(usuario==1){
					cout<<"MAQUINA GANA";
					maquinaw++;
				
				}else if(usuario==3){
					cout<<"USUARIO GANA";
					userw++;
				}else if(usuario ==opciones){
					cout<<"EMPATE";
					draw++;
				}
				break;
			}
			case 3:{
				if(usuario==2){
					cout<<"MAQUINA GANA";
					maquinaw++;
				
				}else if(usuario==1){
					cout<<"USUARIO GANA";
					userw++;
				}else if(usuario ==opciones){
					cout<<"EMPATE";
					draw++;
				}
				break;
			}
		}
		//if(usuario<opciones){
			//cout<<opciones; 
		/*for (int i=0; i<3;i++){
			cout<<opciones<<endl;
		}*/
	}while(userw<3 or maquinaw<3);
	cout<<endl<<userw<<endl<<maquinaw;
	
	return 0;
}
