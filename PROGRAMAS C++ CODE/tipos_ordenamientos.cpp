#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

using namespace std;

void menu();
void orden_insertion(long int*);
void orden_seleccion(long int*, int);
void orden_burbuja(long int*);
void orden_shell(long int*);
void shell_trio(long int *, int, int);
void orden_quickshort(long int*, int);

int main (){
	menu();
	getch();
	return 0;
	
}

void menu (){
	long int numeros[50000];
	int opc;
	 int tam=5000;
	 
		srand(time(NULL));
		for (long int i=0; i<=49999; i++){
			numeros[i]= rand() % 50000 +1;
			
		}
		cout<<"Serie de numeros desordenados generada "<<endl;
		system("pause");
		system("cls");
	do{
		
		cout<<"\n \t Menu de ordenamiento "<<endl;
		cout<<"1. Por iserccion"<<endl;
		cout<<"2. Por seleccion"<<endl;
		cout<<"3. Por burbuja"<<endl;
		cout<<"4. Por shell"<<endl;
		cout<<"5. quickshort"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		
		switch (opc){
			case 1:
				orden_insertion(numeros);
				system("pause");
				break;
			case 2:
				
				orden_seleccion(numeros,tam);
				system("pause");
				break;
			case 3:
				orden_burbuja(numeros);
				system("pause");
				break;
			case 4:
				orden_shell(numeros);
				system("pause");
				break;
			case 5:
				tam=20;
				orden_quickshort(numeros, tam);
			    for (long int i=0; i<=4999; i++){
	              cout<<numeros[i]<<"-";
	              }
				system("pause");
				break;
			case 6:
				break;
			
		}
		system("cls");
	}while(opc!=6);	
}
void orden_insertion(long int *ordenados){
	long int i, j;
    long int en_cours;
 
    for (long int i = 1; i < 50000; i++) {
        en_cours = ordenados[i];
        for (j = i; j > 0 && ordenados[j - 1] > en_cours; j--) {
            ordenados[j] = ordenados[j - 1];
        }
        ordenados[j] = en_cours;
    }
    //imprimiendo valores ordenados
    for (i=0; i<49999; i++){
    	cout<<ordenados[i]<<"-";
	}
	
}
void orden_seleccion(long int *ordenados,int tam){
	 long int en_cours , plus_petit , j , temp ;
 
     for ( en_cours = 0 ; en_cours < tam - 1 ; en_cours ++ )
     {
         plus_petit = en_cours ;
         for ( j= en_cours +1 ; j < tam ; j ++ )
              if ( ordenados [ j ] < ordenados [ plus_petit ] )
                  plus_petit = j ;
          temp = ordenados [en_cours ] ;
          ordenados [ en_cours ] = ordenados [ plus_petit ] ;
          ordenados [ plus_petit ] = temp ;
     }
     for (long int i= 0; i<=49999; i++){
     	cout<<ordenados[i]<<"-";
	 }
}
void orden_burbuja(long int *ordenados){
	long int tempo;
	
	for (long int i=1; i<50000; i++)
	{
		for (long int j=0; j<49999; j++)
		{
			if (ordenados [j] > ordenados [j+1])
				{
					tempo = ordenados[j];
					ordenados[j] = ordenados[j+1];
					ordenados[j+1] = tempo;
				}
			}
    }   
    for (long int i=0; i<=49999; i++){
	  cout<<ordenados[i]<<"-";
	}
}
void shell_trio(long int *ordenados, int gap, int debut){
 int j,en_cours;
    for (int i = gap + debut; i < 49999; i+=gap) {
        en_cours = ordenados[i];
        for (j = i; j >= gap && ordenados[j - gap] > en_cours; j-=gap) {
            ordenados[j] = ordenados[j - gap];
        }
        ordenados[j] = en_cours;
    }	
}
void orden_shell(long int *ordenados){
	 int intervalles[5]={6,4,3,2,1};
    for (int ngap=0;ngap<5;ngap++) {
        for (int i=0;i<intervalles[ngap];i++)
            shell_trio(ordenados,intervalles[ngap],i);
        
    }
	for (int i=0; i<=49999; i++){
	  cout<<ordenados[i]<<"-";
	}
}
void orden_quickshort(long int *ordenados, int tam){
	long int mur, cont, pivot, tmp;
    if (tam < 2) return;
	
    pivot = ordenados[tam - 1];
    mur  = cont = 0;
    while (cont<tam) {
        if (ordenados[cont] <= pivot) {
            if (mur != cont) {
                tmp=ordenados[cont];
                ordenados[cont]=ordenados[mur];
                ordenados[mur]=tmp;              
            }
            mur ++;
        }
        cont ++;
    }
    orden_quickshort(ordenados, mur - 1);
    orden_quickshort(ordenados + mur - 1, tam - mur + 1);
    
}


