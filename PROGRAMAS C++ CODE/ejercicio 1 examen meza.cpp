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
cout<<"Como Big O representa un límite superior, entonces puede decir con seguridad que hay O(k*n!)\n"; 
cout<<"posibles resultados donde n es la longitud de la de entrada más larga \n";
cout<<" Todas las cadenas tendrán la misma longitud, entonces habrá exactamente k*n! permutaciones, en un caso";
cout<<"mejor con longitudes variables, el número será < k*n! pero la notación O(k*n!) aún mantiene) y al ser este una permutacion basica es n! cumple";
system("pause");
printf("hola");
system("pause");
return 0;
}
