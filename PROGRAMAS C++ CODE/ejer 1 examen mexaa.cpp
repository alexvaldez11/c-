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
cout<<"Como Big O representa un límite superior, entonces puede decir con seguridad que hay O(k*n!)\n"; 
cout<<"posibles resultados donde n es la longitud de la de entrada más larga \n";
cout<<"Todas las cadenas tendrán la misma longitud, entonces habrá exactamente k*n! permutaciones, en un caso\n";
cout<<"mejor con longitudes variables, el número será < k*n! pero la notación O(k*n!)"; 
cout<<"aún mantiene) y al ser este una permutacion basica es n! cumple";
system("pause");
return 0;
}
