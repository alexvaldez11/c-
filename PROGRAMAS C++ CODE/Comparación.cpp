#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
	
	float m;
	float cof;
	float time;
	double vexacto[50];
	double vnumerico[50];
	const float g = 9.81;
	double cex, cex2;
	float ti;
	float taprox = 0;
	float vini = 0;
	
	cout<<"Introduce el valor de la masa del paracaidista \n";
	cin>>m;
	cout<<"Introduce el coeficiente de resistencia \n";
	cin>>cof;
	cout<<"Introduce el incremento del tiempo \n";
	cin>>time;
	
	for(int i = 0; i < 50 ; i++){
	ti = time * i;
	cex2 = (((-1*cof)/m)*(ti));
	cex = (1-(pow(M_E,cex2)));
	vexacto[i] = ((g*m)/cof)*(cex);
	
	vnumerico[i] = (((g - ((cof * vini) / m)) * (taprox)) + vini);
	taprox = ti;
	vini = vnumerico[i];
	}
	
	
	
	cout<<"t:   V exacta :    V numerica: ";
	cout<<"\n\n";
	for(int i=0;i<50;i++){
		cout<<ti*i<<"    "<<vexacto[i]<<"     "<<vnumerico[i];
		cout<<"\n";
	}
	system("pause");	
}
