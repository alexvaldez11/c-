#include<stdio.h>
#include<iostream>
#include<math.h>
#include<locale.h>
#include<bits/stdc++.h>
#include <time.h>
using namespace std;


int main (){
 int a[10], n1,n2,n3;
 float sal[10];
 char n[15], ap[15], app[15];
 int x;
 float salario[10];

srand(time(NULL));

	for(x=0;x<10;x++){
		a[x]=rand()%9999+1000;
		salario[x]=rand()%100000.00+10000.00;
		printf("con ID %d ",a[x]);
		printf("con salario de $ %.2f \n",salario[x]);
	}
	
 system("pause");

}
