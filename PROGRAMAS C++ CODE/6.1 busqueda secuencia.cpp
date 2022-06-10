#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a[] = {10,11,12,13,14,15,16,17,18,19};
	int i, dato;
	char band = 'F';
	
	cout<<"dame el numero que buscas: ";
	cin>>dato;
	i=0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El numero que intentas buscar no esta en el arreglo. Intenta nuevamente."<<endl;
	}
	else if(band == 'V'){
		cout<<"El numero se encontro exitosamente. Esta en la posicion "<<i-1<<endl;
	}
	
	
	getch();
	return 0;
}
