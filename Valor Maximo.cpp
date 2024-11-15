#include <iostream> 
#include <vector>
using namespace std;

// Funcion para obtener valor maximo a partir de una lista
int obener_valor_maximo_de_lista(vector <int> lista_numeros)
{
    int max = 0;
    for (int numero : lista_numeros) {
        if (numero > max) {
            max = numero;
        }
    } 
return max; 

}
int main()
{
    //Lista de numeros
    vector <int> lista_numeros = { 3, 5, 88, 156, -6};
    //Imprimir el valor maximo
    cout << "Valor maximo de la lista de numeros: "
         << obener_valor_maximo_de_lista(lista_numeros) 
         << endl;
         return 0;
}
