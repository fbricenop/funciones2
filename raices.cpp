#include <iostream>
#include <cmath>
using namespace std;
double discriminante(int a, int b, int c);
double raiz(double n);
double general1(int a, int b, int c, double p);
double general2(int a, int b, int c, double p);
int main(){
	int x,y,z;
	double o,q;
	cout<<"DAME LOS COEFICIENTES DE TU ECUACION CUADRATICA: "<<endl;
	cout<<"PRIMER COEFICIENTE: "; cin>>x;
	cout<<endl<<"SEGUNDO COEFICIENTE: "; cin>>y;
	cout<<endl<<"TERCER COEFICIENTE: "; cin>>z;
	if(x==0){
		cout<<"ERROR. NO ES UNA ECUACIÓN CUADRATICA.";
	}else if(x!=0){
		o= discriminante(x,y,z);
		q=raiz(o);//emplea la raiz a la discrimante, comprobando antes que sea mayor a 0
		cout<<general1(x,y,z,q)<<endl;
		cout<<general2(x,y,z,q);
		cout<<endl;
	}	
	return 0;
}
double discriminante(int a, int b, int c){										
	double triangulo;
	triangulo = pow(b,2) - (4*a*c);
	//cout<<triangulo;
	return triangulo;
	}
double raiz(double n){
	double raiz;
	if(n>=0 ){
		raiz=sqrt(n);
		return raiz;
	}else{
		cout<<"IMAGINARIOS";
	}
}
double general1(int a, int b, int c, double p){
	double general;
	general=((-1*b) + p)/(2*a);
	return general;
}
double general2(int a, int b, int c, double p){
	double general;
	general=((-1*b) - p)/(2*a);
	return general;
}


