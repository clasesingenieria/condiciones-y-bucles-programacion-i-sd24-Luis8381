#include <iostream>
#include <vector>

using namespace std;

//Funcion para obtener el valor maximo de una lista de numeros 
int obtener_valor_maximo_de_lista (vector <int> lista_numeros)
{
    int max = 0;
     for (int numero : lista_numeros){
        if (numero > max) {
            max = numero;
        }
     }
return max;
}
int main()
{
    vector<int> lista_numeros;

    //pedir al usuario que ingrese 5 numeros
    for (int i=0; i <5; i++) {
        int numero_ingresado;
        cout << "Ingrese un numero: ";
        cin >> numero_ingresado;
        lista_numeros.push_back(numero_ingresado);
    }
    //mostrar el numero maximo de los numeros ingresados
    cout << "El valor maximo es: " 
         << obtener_valor_maximo_de_lista(lista_numeros)
         << endl;
         return 0;
}
