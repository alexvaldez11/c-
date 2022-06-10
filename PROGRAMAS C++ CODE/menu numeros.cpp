#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main () {
  int menu;
 
  while(menu!=7){
  int binario[100];
  int dec;
  int cont1=0;
  int cont2,cont3;
  int n,m,r;
  int p=0;
  cout<<" Bienvenido al menu de convertidor de numeros:\n";
 cout<<"leer un valor en decimal  convertirlo en binario, presiona 1\n";
 cout<<"Leer un valor en decimal y convertir a octal, presiona 2\n ";
 cout<<"Leer un valor en decimal y convertir a maya, presiona 3\n ";
 cout<<"Leer dos numeros y obtener una permutacion, presiona 4 \n";
 cout<<"Leer dos numeros y obtener las combinaciones, presiona 5\n";
 cout<<"Realizar el pronlema de palomar, presiona 6\n";
 cout<<"Salir, presiona 7\n";
 cin>>menu;
 switch(menu){

case 1:
 cout<<" dame un numero de forma decimal por favor: ";
 cin>>dec;
 while (dec > 1){
 binario[cont1]= dec%2;
 cont1++;
 dec= dec/2;
}
binario[cont1]=dec;
cont2=cont1;
cout<<" el numero en forma binaria es: ";
while (cont2 >=0) {
cout<<binario[cont2];
cont2--;
}
cout<<endl;
cout<<endl;

	break;
	
case 2:
 cout<<" dame un numero de forma decimal por favor :): ";
 cin>>dec;
 while (dec > 7){
binario[cont1]= dec%8;
 cont1++;
 dec= dec/8;
}
binario[cont1]=dec;
cont2=cont1;
cout<<" el numero en forma octal es: ";
while (cont2 >=0){
cout<<binario[cont2];
cont2--;
}
cout<<endl;
cout<<endl;
	break;
	
case 3:
 cout<<" dame un numero de forma decimal por favor :): ";
 cin>>dec;
 while (dec > 19){
 binario[cont1]= dec%20;
 cont1++;
 dec=dec/20;
}
binario[cont1]=dec;
cont2=cont1;
cout<<" el numero en forma maya es: ";
cout<<endl;
while (cont2 >=0){
switch (binario[cont2])
		{
		case 0:
			cout<<"o"<<endl<<endl;
			break;

		case 1:
			cout<<"*"<<endl<<endl;
			break;

		case 2:
			cout<<"**"<<endl<<endl;
			break;

		case 3:
			cout<<"***"<<endl<<endl;
			break;

		case 4:
			cout<<"****"<<endl<<endl;
			break;

		case 5:
			cout<<"--"<<endl<<endl;
			break;

		case 6:
			cout<<"*"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 7:
			cout<<"**"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 8:
			cout<<"***"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 9:
			cout<<"****"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 10:
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 11:
			cout<<"*"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 12:
			cout<<"**"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 13:
			cout<<"***"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 14:
			cout<<"****"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 15:
			cout<<"--"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 16:
			cout<<"*"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 17:
			cout<<"**"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 18:
			cout<<"***"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		case 19:
			cout<<"****"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl;
			cout<<"--"<<endl<<endl;
			break;

		default:
			break;
		}
		cont2--;
	}


	break;
	
case 4:

    cout<<" dame el numero de posibilidades por favor :): ";
 cin>>n;
     cout<<" de cuantas formas lo necesitas  por favor :): ";
 cin>>m;
 cont1=n;
 p=(n-m);
 cont2=p;
 while (cont1>1){
		if (cont2>1) {
	p=p*(cont2-1);
	cont2--;
}
n=n*(cont1-1);
cont1--;
}
p=n/p;
cout<<" el num de permutaciones es: ";
cout<<p;
cout<<endl;
cout<<endl;

	break;
	
case 5:
     cout<<" dame el numero de posibilidades por favor :): ";
 cin>>n;
     cout<<" de cuantas formas lo necesitas  por favor :): ";
 cin>>m;
 cont1=n;
 p=n-m;
 cont3=m;
 while (cont1>1){
		if (cont2>1) {
	p=p*(cont2-1);
	cont2--;
}
n=n*(cont1-1);
cont1--;
}
 while (cont3>1) {
	m=m*(cont3-1);
	cont3--;
}
p=m*p;
r=n/p;
cout<<" el num de combinaciones es: ";
cout<<r;
cout<<endl;
cout<<endl;

	break;
	
case 6:
int palomas, palomar, res;

	cout<<"Bienvenido a la opcion de Principio de Palomar"<<endl<<endl;

	cout<<"Ingrese el numero de palomas:"<<endl;
	cin>>palomas;
	cout<<"Ingrese el numero de palomares:"<<endl;
	cin>>palomar;

	if (palomas<palomar){
		int resta;
		resta = palomar - palomas;

		cout<<endl<<"EL amcomodo es el siguiente:"<<endl;

		for(int x=1; x<=palomas ; x++){
			if(x%4==0){
				cout<<"[1]"<<endl;
			}else{
				cout<<"[1]";
				}
		}
		for(int x=palomas; x<palomar ; x++){
			if(x%4==0){
				cout<<"[0]"<<endl;
			}else{
				cout<<"[0]";
				}
		}
	}else{
		int rep,sob;
		rep = palomas/palomar;
		sob= palomas%palomar;

		cout<<endl<<"EL amcomodo es el siguiente:"<<endl;

		for(int x=1; x<=sob ; x++){
			if(x%4==0){
				cout<<"["<<rep+1<<"]"<<endl;
			}else{
				cout<<"["<<rep+1<<"]";
				}
		}

		for(int x=sob+1; x<=palomar ; x++){
			if(x%4==0){
				cout<<"["<<rep<<"]"<<endl;
			}else{
				cout<<"["<<rep<<"]";
				}
		}
	}
cout<<endl;

	break;
	
case 7:
	break;
return 0;
default:
cout<<" por favor ingresa un numero del menu amigo ";
cout<<endl;

	break;
}
}
}


