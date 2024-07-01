#include <iostream>
#include <cmath>
using namespace std;
double discriminante(int a, int b, int c);
double raiz(double &n);
void calcuraices(int a, int b, int c, double &raiz1, double &raiz2);
double general1(int a, int b, int c, double p);
double general2(int a, int b, int c, double p);
//void realcompleja(double &);
int main(){
	int x,y,z;
	double o,q,r,s,t;
	cout<<"DAME LOS COEFICIENTES DE TU ECUACION CUADRATICA: "<<endl;
	cout<<"PRIMER COEFICIENTE: "; cin>>x;
	cout<<endl<<"SEGUNDO COEFICIENTE: "; cin>>y;
	cout<<endl<<"TERCER COEFICIENTE: "; cin>>z;
	if(x==0){
		cout<<"ERROR. NO ES UNA ECUACIÓN CUADRATICA.";
	}else if(x!=0){
		o= discriminante(x,y,z);
		q=raiz(o);//raiz debe devolver un valor de retorno
		r=general1(x,y,z,q);
		s=general2(x,y,z,q);
		calcuraices(x,y,z,r,s);
		//realcompleja(q);
	}		
	//crear variable que guarde el llamado a la funcion de la primera raiz, lo mismo para la segunda
	return 0;
}
double discriminante(int a, int b, int c){										
	double triangulo,raiz;
	triangulo = pow(b,2) - (4*a*c);
	}
double raiz(double &n){
	double raiz;
	if(n>=0){
		raiz=sqrt(n);
		return raiz;
	}else{
		cout<<"IMAGINARIOS Y COMPLEJOS";
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
void calcuraices(int a, int b, int c, double &raiz1, double &raiz2){
	cout<<raiz1<<endl<<raiz2;
}
/*void realocompleja(double &i){
	if(&i<0){
		cout<<"IMAGINARIOS y COMPLEJOS";
	}
}*/
