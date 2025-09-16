/*
Asignacion 3: Tres Numeros Aleatorios
Nombre: Derek Mead Rivera
Num. Est: 801-23-5307
Colaboraciones: n/a
*/
// este programa genera tres numeros aleatorios
// luego los numera en orden descendiente
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    
    // se generan tres enteros entre 0 y 100
    int num1 = rand() % (100 - 0 + 1) + 0;
    int num2 = rand() % (100 - 0 + 1) + 0;
    int num3 = rand() % (100 - 0 + 1) + 0;
    
    // se inician variables temporeras para ordenar los enteros
    int grande , mediano , pequeno;
    
    // desplegando los numeros de forma aleatoria
    cout << "Numeros aleatorios generados: " << num1 << ", " << num2 << ", " << num3 << endl;
    
    // aqui se usan condicionales y operadores relacionales para determinar
    // el tamano de cada numero en relacion al otro
    
    if (num1 >= num2 && num1 >= num3) // se determina si el primer numero generado es el mayor
    {
        grande = num1; // si el primer numero es el mayor, se define como el grande
        if (num2 >= num3) // se determina si el segundo numero es mayor que el tercero
            mediano = num2 , pequeno = num3; // si lo es, se define como el mediano y el tercero se define como el pequeno
        else 
            mediano = num3, pequeno = num2; // si no lo es, se define como el pequeno y el tercero se define como el mediano
    }
    else if (num2 >= num1 && num2 >= num3) // si el primer numero no fue el mas grande, se evalua con el segundo
    {
        grande = num2; // se repiten los pasos previos
        if (num1 >= num3)
            mediano = num1 , pequeno = num3;
        else
            mediano = num3 , pequeno = num1;
    }
    else // si ni el primer ni el segundo numero fue el mas grande, se define el tercero como el mas grande
    {
        grande = num3;
        if (num1 >= num2)
            mediano = num1 , pequeno = num2;
        else
            mediano = num2 , pequeno = num1;
    }
    
    // desplegando los numeros de orden descendiente
    
    cout << "Orden descendiente: " << grande << " >= " << mediano << " >= " << pequeno << "\n";
    
    return 0;
}
