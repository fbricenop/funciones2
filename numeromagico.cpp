#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	/*cout<<rand()<<endl<<rand()<<endl<<rand()<<endl; genera una secuencia "aleatoria" de numeros, pero estos al provenir de una raiz
	terminan siendo los mismos siempre*/
	srand(time(0)); //cada nuevo intento se va a reiniciar la raiz, por ende los numeros aleatrorios van a ser siempre nuevos.
	int magicnumber= (rand()%200)+1;
	int tri;
	do{
		cout<<"DAME UN NUMERO ENTRE 0 Y 200: ";
		cin>>tri;
		if(tri>magicnumber){
			cout<<"MUY ALTO, PRUEBA OTRO NUMERO";
		}else if(tri<magicnumber){
			cout<<"MUY BAJO, PRUEBA OTRO NUMERO";
		}else if(tri==magicnumber){
			cout<<"BINGO";
		}
		
	}while(tri!=magicnumber);
	return 0;
}