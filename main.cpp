#include <iostream>
using namespace std;
//Ejercico con blucle for

int main() {
    //1. Imprimir 5 veces la palabra PUCESE
    //for(int i=1; i<=5; i++)
    int i;
    for(int i=0; i<5; i++)
    {
           cout<<endl<<"Hola : "<<(i+1);
           cout<<endl<<"fin";
    }

    //2. Imprimir la tabla de miltiplicar del numero 5
    //cout<<"El valor de la variable i "<<i;
    cout<<"\nLa tabla del 5";
    for(i=1; i<=10; i++)
    {
        cout<<endl<<"5 x"<<i<<" = "<<(5*i);
    }

    //3.Se ingresa por teclado un entero que presenta una tabla de multiplicar
    //Se pide imprimir esta tabla desde el 1 al 12
    int tabla;
    cout<<"\nIngresar la tabla que deseas calcular: ";
    cin>>tabla;
    for(i=1;i<=12; i++)
    {
        cout<<endl<<tabla<< " x " << i << " = " << (tabla * i);
    }



    //4. Calcular la sumatoria de los numeros comprendidos entre 500 y 800
    int suma=0;
    for(i=500; i<=800; i++)
    {
        suma=suma + i;
        //suma +=i;
    }
    cout<<endl<<"La sumatoria de los numeros comprendidos ";
    cout<<"entre 500 y 800 es: "<<suma;

    //5. Se pide por teclado dops enteros que representa el principio y fin
    // de una serie. Se pide realizar la sumatoria de los numeros
    // multiplos de 5 que se encuentra en esta serie
   int inicio, fin;
    cout<<"\nIngrese el inicio de la serie: ";
    cin>>inicio;
    cout<<"\nIngrese el fin de la serie: ";
    cin>>fin;
    for(i=inicio; i<=fin; i++)
    {
        if(i%5==0)
            suma+=i;
    }
    cout<<"\nLa sumatoria de los multiplos es: "<<suma;


    //6. For anidados(un for dentro de otro for)
    //**********
    //**********
    //**********
    //**********
    //**********
    cout<<"\nImpresion de un rectangulo\n";
    for(i=1; i<=5; i++)
    {
        for(int l=1;l<=10;l++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }


    //7. Imprimir las 10 primeras tablas de multiplicar
    //use for anidados
    cout<<"\nLas primeras tablas de multiplicar: ";
    for(int tabla=1; tabla<=10; tabla++)
    {   cout<<endl<<"tabla del "<<tabla;
        for(i=1; i<=10; i++)
        {
            cout<<endl<< tabla<<" x "<<i << " = "<<(tabla*i);
        }
        cout<<endl;
    }
    return 0;
}



