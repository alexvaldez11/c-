#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
int cant,per;
cout<<"cuantos elementos de permutacion son ?"<<endl;
cin>>cant;
for(int i=cant; i>1; i--){
per= i*(i-1);
}
cout<<" la permutacion es: "<<per<<endl;
cout<<"Como Big O representa un l�mite superior, entonces puede decir con seguridad que hay O(k*n!)\n"; 
cout<<"posibles resultados donde n es la longitud de la de entrada m�s larga \n";
cout<<" Todas las cadenas tendr�n la misma longitud, entonces habr� exactamente k*n! permutaciones, en un caso";
cout<<"mejor con longitudes variables, el n�mero ser� < k*n! pero la notaci�n O(k*n!) a�n mantiene) y al ser este una permutacion basica es n! cumple";
system("pause");
printf("hola");
system("pause");
return 0;
}
