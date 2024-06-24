#include <iostream>
using namespace std;
void porValor(int a){
	a=20;
	cout<<"DENTRO DE POR VALOR, a= "<<a<<endl;
}
void porReferencia(int &a){
	a =20;
	cout<<"DENTRO POR REFERENCIA, a ="<<a<<endl;
}
int main(){
	int num =5;
	cout<<"ANTES DE PASAR EL VALOR, num = "<<num<<endl;
	porValor(num);
	cout<<"LUEGO DE PASAR EL VALOR, num = "<<num<<endl;
	porReferencia(num);
	cout<<"LUEGO DE PASAR EL VALOR, num = "<<num<<endl;
	return 0;
}