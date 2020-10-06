/*Llamemos a una vector una montaña si se cumplen las siguientes propiedades:longitud arr > = 3
Existe una i con 0 <i <longitud de arr. - 1 tal que:
arr [0] <arr [1] <... arr [i-1] <arr [i]
arr [i]> arr [i + 1]> ...> arr [longitud arr. - 1]
Dado un arr entero arr que se garantiza que es una montaña, devuelva cualquier i tal que arr [0] <arr [1] <... arr [i - 1] <arr [i]> arr [i + 1]> ...> arr [longitud arr. - 1].*/
#include<iostream>
#include<string>
#include<vector> 
#include<algorithm>

using namespace std;
int main()
{
    int n=0, aux, mayor=-999999;
    vector<int> arr;
    cout<<"Ingrese la cantidad de datos que desea en su vector: "; cin>>n;
     if(n<3)
    {
        cout<<"No es vector montaña"<<endl;
        return 0;
    }
    cout<<"Ingrese los datos que irán dentro del vector: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>aux;
        arr.push_back(aux);
    }
    for(auto ir = arr.begin(); ir!=arr.end(); ++ir) //auto es de manera automatica, depende del tipo de dato que estemos iterando es el tipo de dato en el que se va a convertir el contador
    {
       if(*ir>mayor)
       {
           mayor = *ir;
       }
    }
    if(arr[0]==mayor||arr[n-1]==mayor)
    {
        cout<<"No es vector montaña"<<endl;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==mayor)
            {
                cout<<i<<endl;
            }
        }
    }

    return 0;
}