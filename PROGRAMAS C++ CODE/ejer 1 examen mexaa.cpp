#include<stdio.h>
#include<iostream>
#include<locale.h>

using namespace std;

int main(){
int cant,per;
setlocale(LC_ALL, "spanish");
cout<<"cuantos elementos de permutacion son ?"<<endl;
cin>>cant;
per=1;
for(int i=0; i<cant;i++){
per= per*(i+1);
}
cout<<" la permutacion es: "<<per<<endl;
cout<<"Como Big O representa un l�mite superior, entonces puede decir con seguridad que hay O(k*n!)\n"; 
cout<<"posibles resultados donde n es la longitud de la de entrada m�s larga \n";
cout<<"Todas las cadenas tendr�n la misma longitud, entonces habr� exactamente k*n! permutaciones, en un caso\n";
cout<<"mejor con longitudes variables, el n�mero ser� < k*n! pero la notaci�n O(k*n!)"; 
cout<<"a�n mantiene) y al ser este una permutacion basica es n! cumple";
system("pause");
return 0;
}
