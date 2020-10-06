//c++ primero lee y luego ejecuta
//en script (como java script) ejecuta conforme va leyendo
#include<iostream>
#include<string>
#include<vector> //vector se puede comparar con las listas en Python

using namespace std;
int main()
{
    vector<int> g1; //forma de declarar un vector
    vector<double> g2;
    vector<string> g3;

    for(int i=0;i<=5;i++)
    {
        g1.push_back(i); //agrega al final
    }

    for(int i=0;i<=5;i++)
    {
        g2.push_back(0.25); //agrega al final
    }

    for(int i=0;i<=5;i++)
    {
        g3.push_back("hola"); //agrega al final
    }

    for(auto ir = g1.begin(); ir!=g1.end(); ++ir) //auto es de manera automatica, depende del tipo de dato que estemos iterando es el tipo de dato en el que se va a convertir el contador
    {
        cout<<*ir<<endl; //es lo mismo que si con arreglos escribimos cout<<arr[i]<<endl;
    }

    for(auto ir = g2.begin(); ir!=g2.end(); ++ir) //auto es de manera automatica, depende del tipo de dato que estemos iterando es el tipo de dato en el que se va a convertir el contador
    {
        cout<<*ir<<endl; //es lo mismo que si con arreglos escribimos cout<<arr[i]<<endl;
    }

    for(auto ir = g3.begin(); ir!=g3.end(); ++ir) //auto es de manera automatica, depende del tipo de dato que estemos iterando es el tipo de dato en el que se va a convertir el contador
    {
        cout<<*ir<<endl; //es lo mismo que si con arreglos escribimos cout<<arr[i]<<endl;
    }  

    cout<<"Size: "<<g1.size(); //tamaño de las variables que están dentro del vector
    cout<<"Size: "<<g1.capacity(); //la memoria que se reserva para el vector 
    cout<<"Max Size: "<<g1.max_size(); //depende en cada computadora, por la memoria

    g1.resize(4); //se cambia la dimensión de nuestro vector 

    if(g1.empty() == true) //para ver si el vector está vacío
    {
        cout<<"Vector vacio"<<endl;
    }

    cout<<g1[0]<<endl;
    cout<<g1.at(4)<<endl;
    cout<<g1.front()<<endl;
    cout<<g1.back()<<endl;

    return 0;
}