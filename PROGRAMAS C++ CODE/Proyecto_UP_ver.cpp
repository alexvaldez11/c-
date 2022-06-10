#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;

void parte_11();
void parte_12();
void parte_13();
void parte_14();
void parte_15();
void parte_16();
void parte_17();
void parte_18();



int main(){
	int opc;
	setlocale(LC_ALL,"spanish");
	do{
		system("cls");
		cout<<"Selecciona algun numero de los programas siguientes \n 11)  12) 13) 14) 15) 16) 17) 18) \n Si desea salir del programa escriba 19"<<endl;
		cin>>opc;
		system("cls");
		switch (opc) {
	case 11:
		parte_11();
		break;
	case 12:
		parte_12();
		break;
	case 13:
		parte_13();
		break;
	case 14:
		parte_14();
		break;
	case 15:
		parte_15();
		break;
	case 16:
		parte_16();
		break;
	case 17:
		parte_17();
		break;
	case 18:
		parte_18();
		break;
     }
    
   }while(opc!=19);
   system("pause");
}

void parte_11(){
	int x[50];
	int temp=0,tempo;
	//ciclo for que pide los numeros y los guarda
	for (int i=0;i<=49;i++){
		cout<<"Dame un numero: ";
		cin>>x[i];
		}
	system("cls");
	
	cout<<"   MOSTRANDO LISTA DE POSICIONES IMPARES EN ORDEN DESCENDENTE SIN SER DEL 25 AL 30 POS \n";	
	//empieza ciclo desde 49 por ser descendente
	for (int i=49; i>=0;i--){
		temp=0;
		temp= i+1;
		if ((temp%2)==1){
			//aqui checa que no sean del 25 al 30
			if((temp<25)||(temp>30)){
				cout<<"Posicion "<<temp<<" "<<x[i]<<endl;
			}
		}
	}
	system("pause");
	
}

void parte_12(){
	int x[50];
	int temp=0,tempo;
	for (int i=0;i<=49;i++){
		cout<<"\nDame un numero:";
		cin>>x[i];
		}
	system("cls");
	cout<<" MOSTRANDO LOS MULTIPLLOS DE 5 \n";
	for (int i=0;i<=49;i++){
		if(x[i]%5==0){
			cout<<x[i]<<endl;
		}
	}
	system("pause");
}
void parte_13(){
	int numeros [ ] = {2, 23, 74, 11, 65, 58, 94,  };
	cout<<"  MOSTRANDO LOS 7 ELEMENTOS DEL ARRAY \n";
	for (int i=0; i<=6;i++){
		cout<<numeros[i]<<" ";
	}
	cout<<"\nCual es el sigueinte elemento que deseas agregar? ";
	cin>>numeros[7];
	cout<<"\n Mostrando lista con el elemento agregado \n";
	for(int i=0; i<=7;i++){
		cout<<numeros[i]<<" ";
	}
	system("pause");
}
void parte_14(){
		int numeros [ ] = {2, 23, 74, 11, 65, 58, 94, 99 };
		int temp;
		int j=0;
	cout<<"  MOSTRANDO LOS 8 ELEMENTOS DEL ARRAY \n";
	for (int i=0; i<=7;i++){
		cout<<numeros[i];
	}
	//aqui se invierten al tener j pos 0 e i pos 7 solo se van cambiando de lugar
	for (int i=7; i>=4; i--){
		temp= numeros[i];
		numeros[i]=numeros[j];
		numeros[j]= temp;
		j++;
	}
	printf("\n    ARRAY con sus elementos invertidos \n");
	
	for(int i=0;i<=7; i++){
	   cout<<numeros[i];
	}
	system("pause");
}
void parte_15(){
	int m,n;
	cout<<"Suma de pos y neg de una tabla de m y n tamaño\n";
	cout<<"m: "; cin>>m;
	cout<<"\nn: "; cin>>n;
	int z[m][n];
		int sumpos=0, sumneg=0;
	for (int i=0; i<m; i++){
		for (int j=0; j<n;j++){
			cout<<" Dame un numero: ";
			cin>>z[i][j];
			if (z[i][j]>=0){
				sumpos= sumpos+ z[i][j];
			}
			else{
				sumneg= sumneg+ z[i][j];
			}
		}
	}
	cout<<" \n Imprimiendo La Matriz: \n";
	for (int i=0; i<m; i++){
		cout<<"\n\n\n";
		for (int j=0; j<n;j++){
			cout<<"   "<<z[i][j];
		}
	}
	cout<<" \nLa suma de positivos es:  "<<sumpos<<endl;;
	cout<<" La suma de negativos es: "<<sumneg<<endl;
	system("pause");
}
void parte_16(){
	int z[2][2];
	int k;
	cout<<"Dame un valor: ";
	cin>>k;
	for (int i=0; i<=1; i++){
		for (int j=0; j<=1;j++){
			z[i][j]=k;
		}
	}
	cout<<" \n Imprimiendo La Matriz con valor constante de "<<k<<"\n";
	for (int i=0; i<=3; i++){
		cout<<"\n\n\n";
		for (int j=0; j<=3;j++){
			cout<<z[i][j]<<"   ";
		}
	}	
	system("pause");
}
void parte_17(){
	int z[3][3];
	int sf[3];
	int sc[3];
	for (int i=0; i<3; i++){
		for (int j=0; j<3;j++){
			cout<<" Dame un numero: ";
			cin>>z[i][j];
		    
		}
		
	}
	for(int j=0; j<3; j++){
		for(int i=0; i<3; i++){
			sf[j]=sf[j]+z[j][i];
			sc[j]= sc[j]+z[i][j];
		}
    }  
	cout<<" \n Imprimiendo La Matriz de 3x3 \n";
	for (int i=0; i<3; i++){
		cout<<"\n\n\n";
		for (int j=0; j<3;j++){
			cout<<z[i][j]<<"   ";
		}
	}
	//ciclo para imprimir la suma de filas y columnas 
	cout<<"\n";
	for(int i=0; i<3; i++){
		cout<<"la suma de la fila "<<(i+1)<<" es: "<<sf[i]<<endl;
		cout<<"la suma de la columna "<<(i+1)<<" es: "<<sc[i]<<endl;
	}	
	system("pause");
}
void parte_18(){
	int z[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16},
		};
	int sum=0;
		cout<<"MOSTRANDO MATRIZ "<<endl;
		for (int i=0; i<=3; i++){
		cout<<"\n\n\n";
		for (int j=0; j<=3;j++){
			cout<<z[i][j]<<"   ";
		}
	}
	for(int i=0; i<=3; i++){
		sum=sum+z[i][i];
	}
	cout<<"\nla suma de la diagonal: "<<sum<<endl;
	system("pause");	
}
