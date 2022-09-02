// Ordenamiento Burbuja.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Anaya Hernández Alfredo Jordano

#include <iostream>
using namespace std;

int main()
{
    int Arr[20],Aux,TAM,res;
    bool ban1,ban2;

    do
    {
        do
        {
            ban1 = false;
            cout << "Cual es el numero de espacios del arreglo?" << endl;
            cin >> TAM;
            if (TAM < 2 || TAM > 20)
            {
                cout << "la cantidad no es aceptada favor de volverla a digitar" << endl;
                ban1 = true;
            }
        }while (ban1 == true);
        
        cout << "Cuales son los elementos del arreglo?" << endl;

        for (int i = 0; i < TAM; i++)
        {
            cin >> Arr[i];
        }

        for (int i = 1; i < TAM; i++)
        {
            for (int j = 0; j < TAM - 1; j++)
            {
                if (Arr[j] > Arr[j + 1])
                {
                    Aux = Arr[j];
                    Arr[j] = Arr[j + 1];
                    Arr[j + 1] = Aux;
                }
            }
            for (int i = 0; i < TAM; i++)
            {
                cout << Arr[i]<< " ";
            }
            cout << endl;
        }

        cout << "Desea volver a usar el programa?" << endl;
        cout << "1) si" << endl;
        cout << "2) no" << endl;

        cin >> res;
        if(res == 1)
        {
            ban2 = true;
        }
        else
        {
            ban2 = false;
        }

    }while(ban2 == true);

    return 0;
} 