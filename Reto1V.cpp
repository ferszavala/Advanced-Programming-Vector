/*Reto 1. Dada un vector de enteros "A" ordenados en orden no decreciente, devuelve un vector de los cuadrados de cada número, también en orden 
no decreciente.*/

#include<iostream>
#include<string>
#include<vector> 
#include<algorithm>

using namespace std;
int main()
{
    int n=0, aux;
    vector<int> A; 
    vector<int> B;
    cout<<"Ingrese la cantidad de numeros que desea: "<<endl; cin>>n;
    cout<<"Ingrese los valores del vector: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>aux;
        A.push_back(aux);
    }
    for(auto ir = A.begin(); ir!=A.end(); ++ir) //auto es de manera automatica, depende del tipo de dato que estemos iterando es el tipo de dato en el que se va a convertir el contador
    {
       *ir=((*ir)*(*ir));
    }
    for(auto ir = A.begin(); ir!=A.end(); ++ir) //auto es de manera automatica, depende del tipo de dato que estemos iterando es el tipo de dato en el que se va a convertir el contador
    {
       sort(A.begin(), A.end());
    }
    for(auto ir = A.begin(); ir!=A.end(); ++ir) //auto es de manera automatica, depende del tipo de dato que estemos iterando es el tipo de dato en el que se va a convertir el contador
    {
        cout<<*ir<<endl;
    }
    return 0;
}