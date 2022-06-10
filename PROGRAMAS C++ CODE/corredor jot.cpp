#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

struct Corredor {
	int hor;
	int min;
	int seg;
	
}corredor[3],*punt_corredor= corredor;

void pedir_datos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"  dame las horas: ";
		cin>>(punt_corredor+i)->hor;
		cout<<"  dame los minutos: ";
		cin>>(punt_corredor+i)->min;
		cout<<"  dame los segundos: ";
		cin>>(punt_corredor+i)->seg;
		cout<<"\n";
	}
}
void suma(Corredor *punt_corredor){
	int sumah=0, sumam=0, sumas=0;
	 
	for(int i=0;i<3; i++){
		sumah= sumah + ((punt_corredor+i)->hor);
		sumam= sumam +((punt_corredor+i)->min);
		sumas= sumas +((punt_corredor+i)->seg);
		
	}
    if(sumas>=60){
    	sumam=(sumas/60)+sumam;
        sumas=sumas%60;
	}	
	if(sumam>=60){
		sumah=(sumam/60)+sumah;
		sumam=sumam%60;
	}
	cout<<" el tiempo total es: "<<sumah<<" horas "<<sumam<<" minutos y "<<sumas<<" segundos."<<endl;
	
	
}

int main(){
	pedir_datos();
	suma(punt_corredor);
	
	getch();
	return 0;
}
