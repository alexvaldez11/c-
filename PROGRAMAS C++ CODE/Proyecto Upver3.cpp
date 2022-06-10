#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
#include <string.h>
#define MAX 10
#include <windows.h>
#include<iostream>
#include<locale.h>
using namespace std;


int sr1_1();
typedef struct {
char apellido[30];
int nota;
}t_alumno;

int sr1_2();
int sr1_3();
int sr2();
typedef struct {
 char sexo;
 int edad;
}t_parejas;

int factorial(int tam);
int sr3();
typedef struct {
 char nombre[30];
 char domicilio[30];
 long long int telefono;
}t_persona;

int crearDatos(char *nom);
int leerDatos(char *nom);
int bajas(char *nom, char *busqueda);
int BuscarDatos(char* nom, char *busqueda);
int sr4();
typedef struct {
 char provincia[30];
 int importe;
 char placa [7];
}t_multas;

int compara(const void* p, const void* q);
//int compara2(const void* p, const void* q);
int main ()
{

 int opciones;
 setlocale(LC_ALL,"spanish");
 do{
 system("cls");
 cout<<"Elija la opcion que desea realizar\n";
 cout<<" 1.- 30 alumnos con sus registros \n 2.- Posibles parejas\n 3.-Registro de personas\n 4.- Patentes de autos\n 5.- Salir\n";
 cin>>opciones;
 switch (opciones){
 case 1:
 	system("cls");
 	opciones=0;
 	cout<<" \t 30 alumnos con sus registros \n 1.- Orden de notas de alumnos\n 2.- Orden alfabetico descendente\n 3.- Mejor y peor nota\n 4.-Regresar menu principal\n";
 	cin>>opciones;
 	switch (opciones){
 		case 1:sr1_1();break;
 		case 2:sr1_2();break;
 		case 3:sr1_3();break;
 		case 4: opciones=0; break;
	 }
 ;break;
 case 2:sr2();break;
 case 3:sr3();break;
 case 4:sr4();break;
 case 5:cout<<"Gracias\n\n";break;
 }
}while (opciones!=5);
system("pause");
}
int sr1_1(){
 int primero, i, j;
t_alumno temp;
t_alumno nuevo[30];
typedef char x[20];
x alumnos[]={"Gonzalez", "Casillas", "Lopez", "Sanchez", "Villalobos",
"Delgado", "Gutierrez", "Alvarez", "Ballesteros", "Perez", "Messi",
"Rodirguez", "Valdez","Coredero", "Chavez", "Pellat", "Martinez",
"Pellat", "Ramirez", "Alvarado", "Salas", "Ruiz", "Ochoa", "Marquez",
"Lainez", "Velazco", "Rios","Santacruz", "Yañez", "Gomez"};
srand(time(NULL));
for (int i=0;i<30; i++){
 nuevo[i].nota=rand()%11;
 strcpy(nuevo[i].apellido,alumnos[i]);
}
for( i=0;i<29;i++){
 for (j=i+1;j<30;j++){
 primero=strcmp(nuevo[i].apellido,nuevo[j].apellido);
 if (primero>0){
 temp = nuevo[i];
 nuevo[i]=nuevo[j];
 nuevo[j]=temp;
 }
 }
}
for(int i=0;i<30;i++){
 cout<<nuevo[i].apellido<<" "<<nuevo[i].nota<<endl;
}
system("pause");
 }
int sr1_2(){
 int primero, i, j;
t_alumno temp;
t_alumno nuevo[30];
typedef char x[20];
x alumnos[]={"Gonzalez", "Casillas", "Lopez", "Sanchez", "Villalobos",
"Delgado", "Gutierrez", "Alvarez", "Ballesteros", "Perez", "Messi",
"Rodirguez", "Valdez","Coredero", "Chavez", "Pellat", "Martinez",
"Pellat", "Ramirez", "Alvarado", "Salas", "Ruiz", "Ochoa", "Marquez",
"Lainez", "Velazco", "Rios","Santacruz", "Yañez", "Gomez"};
srand(time(NULL));
for (int i=0;i<30; i++){
 nuevo[i].nota=rand()%10+1;
 strcpy(nuevo[i].apellido,alumnos[i]);
}
for( i=0;i<29;i++){
 for (j=i+1;j<30;j++){
 primero=strcmp(nuevo[i].apellido,nuevo[j].apellido);
 if (primero<0){
 temp = nuevo[i];
 nuevo[i]=nuevo[j];
 nuevo[j]=temp;
 }
 }
}
for(int i=0;i<30;i++){
 cout<<nuevo[i].apellido<<" "<<nuevo[i].nota<<endl;
}
for (i=0;i<29;i++){
 for(j=i+1;j<30;j++){
 if(nuevo[i].nota> nuevo[j].nota){
 temp= nuevo[i];
 nuevo[i]= nuevo[j];
 nuevo[j]=temp;
 }
 }
}
cout<<"Las 5 notas mas bajas son:\n";
for (int i=0;i<5;i++){
 cout<<nuevo[i].apellido<<" "<<nuevo[i].nota<<endl;
}
system("pause");
}
int sr1_3(){
 int primero, i, j;
 float a;
t_alumno temp;
t_alumno nuevo[30];
typedef char x[20];
x alumnos[]={"Gonzalez", "Casillas", "Lopez", "Sanchez", "Villalobos",
"Delgado", "Gutierrez", "Alvarez", "Ballesteros", "Perez", "Messi",
"Rodirguez", "Valdez","Coredero", "Chavez", "Pellat", "Martinez",
"Pellat", "Ramirez", "Alvarado", "Salas", "Ruiz", "Ochoa", "Marquez",
"Lainez", "Velazco", "Rios","Santacruz", "Yañez", "Gomez"};
srand(time(NULL));
for (int i=0;i<30; i++){
 nuevo[i].nota=rand()%10+1;
 strcpy(nuevo[i].apellido,alumnos[i]);
}
for( i=0;i<29;i++){
 for (j=i+1;j<30;j++){
 primero=strcmp(nuevo[i].apellido,nuevo[j].apellido);
 if (primero<0){
 temp = nuevo[i];
 nuevo[i]=nuevo[j];
 nuevo[j]=temp;
 }
 }
}
for(int i=0;i<30;i++){
 cout<<nuevo[i].apellido<<" "<<nuevo[i].nota<<endl;
}
for (i=0;i<29;i++){
 for(j=i+1;j<30;j++){
 if(nuevo[i].nota> nuevo[j].nota){
 temp= nuevo[i];
 nuevo[i]= nuevo[j];
 nuevo[j]=temp;
 }
 }
}
a= (nuevo[0].nota+nuevo[29].nota)/2;
cout<<"\n\nEl promedio entre la mejor y la peor nota es: "<<a<<endl;
system("pause");
}
int sr2(){
int a;
 t_parejas persona [MAX];
 for (int i=0; i<MAX; i++){
 fflush(stdin);
 printf("Introduzca sexo \n");
 scanf("%c", &persona[i].sexo);
 fflush(stdin);
 printf("Introduzca edad \n");
 scanf("%d", &persona[i].edad);
 a=factorial (MAX);}
 for (int i=0; i<MAX; i++){
 for (int j=i+1; j<MAX; j++){
 if (persona[j].sexo==persona[i].sexo){
 a--;
 } else {
 if (persona[j].edad-persona[i].edad>10){
 a--;
 }
 }
 }
 }
 cout<<"posibles cominaciones de pareja son: "<<a<<endl;
 system("pause");
}
int factorial (int tam){
 int f1=1, f2=1, comb;
 for (int j=1; j<=tam; j++){
 f1=f1*j;
 }
 for (int j=1; j<=tam-2; j++){
 f2=f2*j;
 }
comb=(f1/(f2*2));
return comb; }
int sr3(){
int opciones;
char eliminado[30];
char buscar[30];
char nombre[30];
 do{
 cout<<"\t \t \t Registro de personas\n";
 cout<<"\t \t Elija la opcion que desea realizar\n";
 cout<<"\t \t 1.- Dar de alta a una persona\n \t \t 2.- Consultar las personas registradas\n \t \t 3.- Eliminar un registro\n \t \t 4.- Buscar registros\n \t \t 5.- Salir\n";
 cin>>opciones;
 switch (opciones){
 case 1:crearDatos(nombre);break;
 case 2:leerDatos(nombre);break;
 case 3: cout<<"Que registro deseas eliminar?\n";
 cin>>eliminado;
 bajas(nombre, eliminado);break;
 case 4: cout<<"Que persona deseas buscar?\n";
 cin>>buscar;
 BuscarDatos(nombre, buscar);break;
 case 5:break;
 }
}while (opciones!=5);
return 0;
}
int crearDatos(char*nom) {
FILE *archivo;
t_persona nuevo;
archivo=fopen(nom,"a+b");
if (!archivo) {
cout<<"Error!";
return -1;
}
cout<<"Captura el nombre de la persona que deseas añadir\n";
fflush(stdin);
cin>>nuevo.nombre;
cout<<"Captura el domicilio\n";
fflush(stdin);
cin>>nuevo.domicilio;
cout<<"Captura el telefono\n";
fflush(stdin);
cin>>nuevo.telefono;
fwrite(&nuevo, sizeof(t_persona), 1, archivo);
fclose(archivo);
}
int leerDatos(char *nom) {
FILE *archivo;
t_persona registro;
archivo=fopen(nom,"rb");
if (!archivo) {
cout<<"No hay personas registrados\n";
return -1;
}
cout<<"Los registros son: "<<endl;
while (fread(&registro,sizeof(t_persona),1,archivo)) {
cout<<"NOMBRE: "<<registro.nombre<<endl;
cout<<"DOMICILIO: "<<registro.domicilio<<endl;
cout<<"TELEFONO: "<<registro.telefono<<endl;
}
fclose(archivo);
return 0;
}
int bajas(char *nom, char *busqueda) {
FILE *archivo;
FILE *archivo_tmp;
int found=0;
t_persona registro;
archivo = fopen(nom, "rb");
if (!archivo) {
cout<<"Error "<<nom;
return -1;
}
archivo_tmp = fopen("tmp.bin", "wb");
if (!archivo_tmp) {
cout<<"Error archivo temporal";
return -1;
}
while (fread(&registro,sizeof(t_persona),1,archivo)) {
if (strcmp (busqueda, registro.nombre) == 0) {
cout<<"Registro borrado\n\n";
found=1;
} else {
fwrite(&registro, sizeof(t_persona), 1,archivo_tmp);
}
}
if (!found) {
cout<<"No se encontro el registro: "<<busqueda<<endl;
cout<<found;
}
fclose(archivo);
fclose(archivo_tmp);
remove(nom);
rename("tmp.bin",nom);
return 0;
}
int BuscarDatos(char *nom, char *busqueda){
 FILE *archivo;
int found=0;
t_persona registro;
archivo = fopen(nom, "rb");
if (!archivo) {
cout<<"Error "<<nom<<endl;
return -1;
}
while (fread(&registro,sizeof(t_persona),1,archivo)) {
if (strcmp (busqueda, registro.nombre) == 0) {
cout<<"Registro solicitado:\n\n";
cout<<"NOMBRE: "<<registro.nombre<<endl;
cout<<"DOMICILIO: "<<registro.domicilio<<endl;
cout<<"TELEFONO: "<<registro.telefono<<endl;
found=1;
}
}
if (!found) {
cout<<"No se encontro el registro: "<<busqueda<<endl;
cout<<found;
}
fclose(archivo);
}
int sr4(){
t_multas x [3];
char provincias[11][30] = {"Aguascalientes", "Jesus Maria","Asientos", "Calvillo", "Cosio", "Pabellon de Arteaga", "San Jose de Gracia", "Tepezala", "Rincon de Romos", "El llano", "San Francisco de los Romos"};
int a[2][11];
int aux;
for(int i=0; i<11; i++){
 a[0][i]=i;
 a[1][i]=0;
}
for (int i=0; i<=2; i++){
 cout<<"Ingresa tu provincia de origen\n";
 fflush(stdin);
 gets(x[i].provincia);
 cout<<"Ingresa tu importe\n";
 cin>>x[i].importe;
 cout<<"Ingresa tu placa \n";
 cin>>x[i].placa;
}
qsort(x, 3, sizeof(t_multas), compara);
cout<<"\n\nEn orden alfabetico de las provincias \n";
for (int i=0; i<=2; i++){
 cout<<x[i].provincia<<endl;
 cout<<x[i].importe<<endl;
 cout<<x[i].placa<<endl;
}
qsort(x, 3, sizeof(t_multas), compara);
cout<<"\n\nOrdenado por importe \n";
for (int i=0; i<=2; i++){
 cout<<x[i].provincia<<endl;
 cout<<x[i].importe<<endl;
 cout<<x[i].placa<<endl;
 for (int j=0; j<=10; j++)
 {
 if (strcmp(provincias[j],x[i].provincia)==0)
 {
 a[1][j]++;
 }
 }
}
 for (int k=0;k<11;k++)
 for(int j=0; j<11-1; j++){
 if(a[1][j]<a[1][j+1]){
 aux=a[1][j];
 a[1][j]=a[1][j+1];
 a[1][j+1]=aux;
 aux=a[0][j];
 a[0][j]=a[0][j+1];
 a[0][j+1]=aux;
 }
 }
 cout<<"\nDATOS ORDENADOS\n";
 aux=a[0][0];
 puts(provincias[aux]);
 system("pause");
}
int compara(const void* p, const void* q){
 return strcmp(((t_multas*)p)->provincia,((t_multas*)q)->provincia);
 }
 /*
int compara2(const void* p, const void* q){
 return ((int)p - (int)q);
}*/
