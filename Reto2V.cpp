/*Dada un vector, rotelo hacia la derecha en k pasos, donde k no es negativo.*/
#include<iostream>
#include<string>
#include<vector> 
#include<algorithm>
using namespace std;

int main()
{
    int n=0, k=0, a=0;
    vector<int> arreglo;
    vector<int> aux;
    cout<<"Ingrese el tamaño del arreglo: "; cin>>n;
    cout<<"Ingrese los valores del arreglo: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arreglo.push_back(a);
    }
    cout<<"Ingrese la cantidad de veces que desea rotar el vector: "; cin>>k;
        for(int i=0;i<n-k;i++)
        {
        int primero = arreglo[0];
        int x;
            for(x=0;x<n-1;x++)
            {
               arreglo[x] = arreglo[x+1];
            }
            arreglo[x]= primero;
        }
    cout<<"El resultado es: "<<endl;
   for(auto ir = arreglo.begin(); ir!=arreglo.end(); ++ir) //auto es de manera automatica, depende del tipo de dato que estemos iterando es el tipo de dato en el que se va a convertir el contador
    {
        cout<<*ir<<" ";
    }
    return 0;
}