#include <iostream>
#include <cmath>

using namespace std;

void entero(int, int);
void decimal(float, int);

int main(int argc, char const *argv[])
{
    float num;
    int base;

      cout<<"\t Bievnvenido al menu de convertidor de numeros:\n";
      cout<<"\n Dime el numero a decimal:  ";
      cin>>num;
      cout<<"\n Dime la base a la que quieres convertir el nume (2 al 9): ";
      cin>>base;

    float decima, enter;

    decima = modf(num, &enter);

    entero(enter, base);
    cout << ".";
    decimal(decima, base);

    return 0;
}
void entero(int num, int base)
{
    if (num < base)
    {
        cout << num;
    }
    else
    {
        entero(num / base, base);
        cout << num % base;
    }
}
void decimal(float num, int base)
{
    if (num == 0)
    {
        cout << num;
    }
    else
    {
        num *= base;
        float enter, decima;
        decima = modf(num, &enter);
        cout << enter;
        decimal(decima, base);
    }
}
