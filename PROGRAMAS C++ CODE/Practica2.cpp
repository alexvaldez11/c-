#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int tempo;
	int numeros [ ] = {2, 23, 74, 11, 65, 58, 94, 36, 99, 87};
	
			//Arreglo desordenado
	cout<<"Arreglo original: "<<endl;
	for (int x=0; x<=9; x++)
	{
		cout<< " "<<numeros[x]<<" ";
	}
	cout<<"\n\nElementos ordenados en forma ascendente "<<endl;
	
			//Ordena el arreglo
	for (int i=1; i<10; i++)
	{
		for (int j=0; j<9; j++)
		{
			if (numeros [j] > numeros [j+1])
				{
					tempo = numeros[j];
					numeros[j] = numeros[j+1];
					numeros[j+1] = tempo;
				}
			}
		}
			//Arreglo ordenado
			
		for(int x=0; x<=9; x++)
		{
			cout<<" "<<numeros [x]<<" ";
		}
		
		getchar();
}
			
