#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include<iostream>
#include <ctype.h>
#include<locale.h>
#define MAX 10
#define Z 4
using namespace std;
int sr2();
int sr3();
int sr4();
int sr5();
int sr6();
int sr7();
int sr8();
int sr9();
int main ()
{
  setlocale(LC_ALL,"spanish");
 int opciones;
 do{
 system("cls");
 cout<<"Elija la opcion que desea realizar\n";
 cout<<" 2.- Encontrar elemento k \n 3.- Elemento K en forma descendente\n 4.- 8 Notas mayores de alumno\n 5.- Numero mayor\n 6.- Notas menores\n 7.- Otener 100 mas pequeños\n 8.- Ordenacion binaria o dicotomica\n 9.- Comparacion busqueda\n 10.- Salir\n";
 cin>>opciones;
 switch (opciones){
 case 2:sr2();break;
 case 3:sr3();break;
 case 4:sr4();break;
 case 5:sr5();break;
 case 6:sr6();break;
 case 7:sr7();break;
 case 8:sr8();break;
 case 9:sr9();break;
 case 10:cout<<"Gracias";break;
 }
}while (opciones!=10);
system("pause");
}
 
int sr2(){
 int arreglo[MAX] = {10,36,7,234,6,98,9,54,1,231};
 int i,j,k,intervalo,flg = 0;
 int inferior = 0, superior = MAX-1, centro;
 int buscar;
 srand(time(NULL));
 cout<<"\n posicion \t";
 for(i=0; i<MAX; i++){
 cout<<"| "<<i+1<<" ";
 }
 cout<<"|\n \t\t _____________\n";
 cout<<"\n original \t";
 for(i=0; i<MAX; i++){
 cout<<"| "<<arreglo[i]<<" ";
 }
 cout<<"|\n";
 cout<<" \t\t _____________\n";
 intervalo=MAX/2;
 while(intervalo>0){
 for(i = intervalo; i<MAX; i++) {
 j = i-intervalo;
 while(j>=0) {
 k=j+intervalo;
 if(arreglo[j]<=arreglo[k])
 j=-1;
 else {
 int temp;
 temp=arreglo[j];
 arreglo[j]=arreglo[k];
 arreglo[k]=temp;
 j-=intervalo;
 }
 }
 }
 intervalo=intervalo/2;
 }
 cout<<"\n ordenado \t";
 for(i=0; i<MAX; i++){
 cout<<"| "<<arreglo[i]<<" ";
 }
 cout<<"|\n \t\t _____________\n";
 cout<<"\n\nCaptura el numero que deseas buscar ";
 cin>>buscar;
 while ( (inferior <= superior) ) {
 centro = (inferior + superior) / 2;
 if (buscar == arreglo[centro]){
 flg = 1;
 break;
 }
 else
 if (buscar < arreglo[centro])
 superior = centro - 1;
 else
 inferior = centro + 1;
 }
 if (flg == 0){
 cout<<"\nel num"<<buscar<<" no se encuentra en el arreglo\n\n\n";
 } else {
 cout<<"\nel num "<<buscar<<" esta en la posicion "<<centro+1<<" \n\n\n";
 }
 system("pause");
}


int sr3(){
 int arreglo[MAX] = {10,36,7,234,6,98,9,54,1,231};
 int i,j,k,intervalo,flg = 0;
 int inferior = 0, superior = MAX-1, centro;
 int buscar;
 srand(time(NULL));
 cout<<"\n posicion \t";
 for(i=0; i<MAX; i++){
 cout<<"| "<<i+1<<" ";
 }
 cout<<"|\n \t\t _____________\n";
 cout<<"\n original \t";
 for(i=0; i<MAX; i++){
 cout<<"| "<<arreglo[i]<<" ";
 }
 cout<<"|\n";
 cout<<" \t\t _____________\n";
 intervalo=MAX/2;
 while(intervalo>0){
 for(i = intervalo; i<MAX; i++) {
 j = i-intervalo;
 while(j>=0) {
 k=j+intervalo;
 if(arreglo[j]>=arreglo[k])
 j=-1;
 else {
 int temp;
 temp=arreglo[j];
 arreglo[j]=arreglo[k];
 arreglo[k]=temp;
 j-=intervalo;
 }
 }
 }
 intervalo=intervalo/2;
 }
 cout<<"\n ordenado \t";
 for(i=0; i<MAX; i++){
 cout<<"| "<<arreglo[i];
 }
 cout<<"|\n \t\t _____________\n";
 cout<<"\n\nCaptura la letra que deseas buscar ";
 cin>>buscar;
 while ( (inferior <= superior) ) {
 centro = (inferior + superior) / 2;
 if (buscar == arreglo[centro]){
 flg = 1;
 break;
 }
 else
 if (buscar > arreglo[centro])
 superior = centro - 1;
 else
 inferior = centro + 1;
 }
 if (flg == 0){
 cout<<"\nel numero "<<buscar<<" no se encuentra en el arreglo\n\n\n";
 } else {
 cout<<"\nel numero "<<buscar<<" esta en la posicion "<<centro+1<<" \n\n\n";
 }
 system("pause");
}

int sr4(){
 int a[20], i, c, d;
for (i=0;i<20;i++){
cout<<"Ingresa la calificacion "<<i+1<<": ";
cin>>a[i];
}
for(i=0;i<19;i++){
 for(c=i+1;c<20;c++){
 if (a[c]>a[i]){
 d=a[c];
 a[c]=a[i];
 a[i]=d;
 }
 }
 }
cout<<"Las 8 notas mayores son:\n";
for(i=0;i<8;i++){
cout<<a[i]<<"\n";
}
system("pause");
}

int sr5(){
 int a[10], i, c, d, n;
cout<<"Cuantos numeros quieres? \n";
cin>>n;
for (i=0;i<n;i++){
cout<<"Ingresa el numero "<<i+1<<": ";
cin>>a[i];
}
for(i=0;i<(n-1);i++){
 for(c=i+1;c<n;c++){
 if (a[c]>a[i]){
 d=a[c];
 a[c]=a[i];
 a[i]=d;
 }
 }
}
cout<<"El numero mayor es: "<<a[0]<<"\n";
system("pause");
}
int sr6(){

int a[20], i, c, d;
for (i=0;i<20;i++){
cout<<"Ingresa la calificacion "<<i+1<<" ";
cin>>a[i];
}
for(i=0;i<19;i++){
 for(c=i+1;c<20;c++){
 if (a[c]<a[i]){
 d=a[c];
 a[c]=a[i];
 a[i]=d;
 }
 }
 }
cout<<"Las 5 notas menores son:\n";
for(i=0;i<5;i++){
cout<<a[i]<<"\n";
}
system("pause");
}
int sr7(){
 cout<<"Escogi el metodo shell porque considero que al subdividir un arrgelo tan grande en grupos para buscar el elemento deseado, lo hace mas efectivo\n\n\n";
int calif[5000];
int intervalo, i, j, a;
srand(time(NULL));
cout<<"Las 5000 calificaiones son:\n";
for (i=0; i<5000; i++){
 calif[i]=rand()%101;
 cout<<calif[i]<<"\t";
}
intervalo= 5000/2;
while(intervalo>0){
 for(i=intervalo;i<500;i++){
 j=i-intervalo;
 while(j>0){
 a=j+intervalo;
 if(calif[j]>=calif[a])
 j=-1;
 else{
 int temp;
 temp=calif[j];
 calif[j]=calif[a];
 calif[a]=temp;
 j-=intervalo;
 }
 }
 }
 intervalo=intervalo/2;
}
cout<<"\n\n\nLos 100 elementos mas pequeños son: \n";
for(a=4999;a>4899;a--)
cout<<calif[a]<<" \n ";
system("pause");
}
int sr8(){
 int arreglo[10000];
 int i, k, j, temp;
 srand(time(NULL));
 cout<<"10,000 Numeros asignados aleatoriamente ... \n";
 for(i=0; i < 10000; i++){
 arreglo[i] = rand() % 101;
 cout<<" "<<arreglo[i]<<" ";
 }
 cout<<"\n";
 for (i = 1; i < 10000; i++) {
 if (arreglo[i] > arreglo[i-1]) {
 temp = arreglo[i];
 for (j = i-1; j >= 0; j--){
 arreglo[j+1] = arreglo[j];
 if (j == 0 || arreglo[j-1] >= temp )
 break;
 }
 arreglo[j] = temp;
 }
 }
 cout<<"\n\nOrdenado por insercion: \n";
 for(i =0; i < 10000; i++)
 cout<<" "<<arreglo[i]<<" ";
 system("pause");

 
}
int sr9(){
 cout<<"\n\nGenerando ordenamiento en los tipos de ordenamientos enseñados. \n\n";
 
int N=10;
 for(int a=0;a<5;a++){
 clock_t start = clock();
 int arreglo[N],i,j,k,temp,aux,intervalo;
 srand(time(NULL));
 for (int i = 0; i < N; i++){
 arreglo[i] = rand();
 }
 for (i =0; i < N; i++){
 for (j = 0; j < N - 1; j++){
 if (arreglo[j] < arreglo[j+1]) {
 aux = arreglo[j];
 arreglo[j] = arreglo[j+1];
 arreglo[j+1] = aux;
 }
 }
 }
 clock_t stop = clock();
 double elapsed = (double)(stop - start) / CLOCKS_PER_SEC;
 cout<<"Tiempo en ms burbuja: "<<elapsed<<" de "<<N<<" elementos.\n";
 N=N*10;
 }
 

 int N2=10;
 for(int b=0;b<5;b++){
 clock_t start2 = clock();
 int arreglo[N2],i,j,k,temp,aux,intervalo;
 srand(time(NULL));
 for (int i = 0; i < N2; i++){
 arreglo[i] = rand();
 }
 for (i = 0; i < N2; i++) {
 if (arreglo[i] > arreglo[i-1]) {
 temp = arreglo[i];
 for (j = i-1; j >= 0; j--){
 arreglo[j+1] = arreglo[j];
 if (j == 0 || arreglo[j-1] >= temp )
 break;
 }
 arreglo[j] = temp;
 }
 }
 clock_t stop2 = clock();
 double elapsed2 = (double)(stop2- start2) / CLOCKS_PER_SEC;
 cout<<"Tiempo en ms inserccion: "<<elapsed2<<" de "<<N2<<" elementos.\n";
 N2=N2*10;
 }
 
 
 int N3=10;
 for(int c=0;c<5;c++){
 clock_t start3 = clock();
 int arreglo[N3],i,j,k,temp,aux,intervalo;
 srand(time(NULL));
 for (int i = 0; i < N3; i++){
 arreglo[i] = rand();
 }
 for (i = 0; i < N3-1; i++)
 for (j = i+1; j < N3; j++)
 if (arreglo[i] < arreglo[j]) {
 aux = arreglo[i];
 arreglo[i] = arreglo[j];
 arreglo[j] = aux;
 }
 clock_t stop3 = clock();
 double elapsed3 = (double)(stop3- start3) / CLOCKS_PER_SEC;
 cout<<"Tiempo en ms seleccion: "<<elapsed3<<" de "<<N3<<" elementos.\n";
 N3=N3*10;
 
 }
 
 
 int N4=10;
 for(int b=0;b<5;b++){
  clock_t start4 = clock();
 int arreglo[N4],i,j,k,temp,aux,intervalo;
 srand(time(NULL));
 for (int i = 0; i < N4; i++){
 arreglo[i] = rand();
 }
 intervalo=N4/2;
 while(intervalo>0){
 for(i = intervalo; i<N4; i++) {
 j = i-intervalo;
 while(j>=0) {
 k=j+intervalo;
 if(arreglo[j]>=arreglo[k])
 j=-1;
 else {
 int temp;
 temp=arreglo[j];
 arreglo[j]=arreglo[k];
 arreglo[k]=temp;
 j-=intervalo;
 }
 }
 }
 intervalo=intervalo/2;
 }
 clock_t stop4 = clock();
 double elapsed4 = (double)(stop4 - start4) / CLOCKS_PER_SEC;
 cout<<"Tiempo en ms shell: "<<elapsed4<<" de "<<N4<<" elementos.\n";
 N4=N4*10;
 }
 system("pause");
}
