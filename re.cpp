#include <iostream>
#include <cmath>
using namespace std;
double area_circulo(double cuadrado);
int main(){
	int x=5;//radio
	cout<<area_circulo(x);	
	return 0;
}
double area_circulo(double cuadrado){
	return pow(cuadrado,2)*M_PI;
}



