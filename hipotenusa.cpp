#include <iostream>
#include <cmath>
using namespace std;
double hipotenusa(double x, double y);
int main(){
	int a,b;
	cout<<"DAME LOS VALORES DE LOS CATETOS: "<<endl;
	cout<<"PRIMER CATETO: "; cin>>a;
	cout<<endl<<"SEGUNDO CATETO: "; cin>>b;
	cout<<hipotenusa(a,b);	
	return 0;
}
double hipotenusa(double x, double y){
	double hipo;
	hipo=pow(x,2)+pow(x,2);
	return sqrt(hipo);
}

