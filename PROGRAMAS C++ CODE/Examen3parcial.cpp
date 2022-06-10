#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<conio.h>
#include<ctime>

using namespace std;

void menu();
void orden_insertion(long int*);
void orden_seleccion(long int*, int);
void orden_burbuja(long int*);
void orden_shell(long int*);
void shell_trio(long int *, int, int);
void orden_quickshort(long int*, int);
void busqueda_binaria(long int*);
int main (){
	srand(time(NULL));
	clock_t t;
	menu();
	getch();
	return 0;
	
}

void menu (){
	long int numeros[15000];
	int opc;
	 int tam=15000;
	 srand(time(0));
	 cout<<"\t Examen 3 parcial Jose Alejandro Valdez\n";
		srand(time(NULL));
		clock_t t;
		t= clock();
		for (long int i=0; i<=14999; i++){
			numeros[i]= rand() % 50000 +1;
			
		}
		t= clock()-t;
		cout<<"Lista de 15,000 numeros desordenados creada correctamente  \n";
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
		int y=0;
		switch (opc){
			case 1:
				t= clock();
				orden_insertion(numeros);
				t= clock()-t;
	         	cout<<"\n Lista de numeros ordenados creada correctamente en "<<float(t)/CLOCKS_PER_SEC<<" segundos \n";
				system("pause");
			    busqueda_binaria(numeros);
				break;
			case 2:
				t= clock();
				orden_seleccion(numeros,tam);
				t= clock()-t;
	         	cout<<"\n Lista de numeros ordenados creada correctamente en "<<float(t)/CLOCKS_PER_SEC<<" segundos \n";
				system("pause");
				busqueda_binaria(numeros);
				break;
			case 3:
				t= clock();
				orden_burbuja(numeros);
				t= clock()-t;
	         	cout<<"\n Lista de numeros ordenados creada correctamente en "<<float(t)/CLOCKS_PER_SEC<<" segundos \n";
				system("pause");
				busqueda_binaria(numeros);
				break;
			case 4:
				t= clock();
				orden_shell(numeros);
				t= clock()-t;
	         	cout<<"\n Lista de numeros ordenados creada correctamente en "<<float(t)/CLOCKS_PER_SEC<<" segundos \n";
				system("pause");
				busqueda_binaria(numeros);
				break;
			case 5:
				tam=20;
				t= clock();
				orden_quickshort(numeros, tam);
			    for (int i=0; i<=14999; i++){
	              cout<<numeros[i]<<"-";
	              }
	              t= clock()-t;
	         	cout<<"\n Lista de numeros ordenados creada correctamente en "<<float(t)/CLOCKS_PER_SEC<<" segundos \n";
				system("pause");
				busqueda_binaria(numeros);
				break;
			case 6:
				break;
			
		}
		system("cls");
	}while(opc!=6);	
}
void orden_insertion(long int *ordenados){
	int i, j;
    int en_cours;
 
    for (i = 1; i < 15000; i++) {
        en_cours = ordenados[i];
        for (j = i; j > 0 && ordenados[j - 1] > en_cours; j--) {
            ordenados[j] = ordenados[j - 1];
        }
        ordenados[j] = en_cours;
    }
    //imprimiendo valores ordenados
    for (i=0; i<14999; i++){
    	cout<<ordenados[i]<<"-";
	}
	
}
void orden_seleccion(long int *ordenados,int tam){
	 int en_cours , plus_petit , j , temp ;
 
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
     for (int i= 0; i<=14999; i++){
     	cout<<ordenados[i]<<"-";
	 }
}
void orden_burbuja(long int *ordenados){
	int tempo;
	
	for (int i=1; i<15000; i++)
	{
		for (int j=0; j<14999; j++)
		{
			if (ordenados [j] > ordenados [j+1])
				{
					tempo = ordenados[j];
					ordenados[j] = ordenados[j+1];
					ordenados[j+1] = tempo;
				}
			}
    }   
    for (int i=0; i<=14999; i++){
	  cout<<ordenados[i]<<"-";
	}
}
void shell_trio(long int *ordenados, int gap, int debut){
 int j,en_cours;
    for (int i = gap + debut; i < 14999; i+=gap) {
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
	for (int i=0; i<=14999; i++){
	  cout<<ordenados[i]<<"-";
	}
}
void orden_quickshort(long int *ordenados, int tam){
	int mur, cont, pivot, tmp;
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
void busqueda_binaria(long int *numeros){
	int inf=0;
	int sup=15000;
	int dato, mitad;
	int y=0;
	char band='F';
	clock_t t;
		system("cls");
				cout<<" Que numero buscas en la lista: "; cin>>dato;
				
				t= clock();
				while((inf<=sup)&&(y<15000)){
	        	mitad = (inf+sup)/2;
	        	if(numeros[mitad] == dato){
		    	band='V';
		    	break;
		        }
		         if(numeros[mitad]>dato){
		    	sup = mitad;
		    	mitad = (inf+sup)/2;
	         	}
	         	if(numeros[mitad]<dato){
	    		inf = mitad;
		    	mitad = (inf+sup)/2;
	        	}
	         	y++;
	             }
	              t= clock()-t;
	              if(band == 'V'){
	          	cout<<"El numero se encontro con exito en "<<float(t)/CLOCKS_PER_SEC<<" segundos y se ubica en la posicion "<<mitad+1<<endl;
		
	             }
	               else
	               	cout<<"El numero que buscaste no se pudo encontrar. Intentalo nuevamente. \n";
	             system("pause");
}
