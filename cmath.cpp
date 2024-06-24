#include <iostream>
#iclude <cmath>
using namespace std;
int main(){
	double num;
	cin>>num;
	cout<<"RAIZ CUADRADA: "<<sqrt(num);
	cout<<"VALOR ABSOLUTO: "<<abs(num)<<endl;
	cout<<"POTENCIA A 2: "<<pow(num,2)<<endl;
	cout<<"EL NUMERO "<<num<<" REDONDEADO A SU MAS CERCANO ES: "<<round(num)<<endl;
	cout<<"EL SENO DEL NUMERO ES: "<<sin(num)<<endl;
	cout<<"EL COSENO DEL NUMERO ES: "<<cos(num)<<endl;
	cout<<"LA TANGENTE DEL NUMERO ES: "<<tan(num)<<endl;
	return 0;
}