/*
La “extracción de método” es una técnica de refactorización en programación
que consiste en crear un nuevo método a partir de un fragmento de código existente. 
Esta técnica se utiliza cuando tienes un fragmento de código que se repite en varios lugares
o es lo suficientemente complejo como para justificar su propia función.

3. Métodos de composición
Extract (método)
Convierta el fragmento en un método cuyo nombre explique el propósito del método. 
Ejemplo:
void printOwing(double amount) 
{
    printBanner();
 
    //print details
    cout << "name:" <<  name << endl;
    cout << "amount" << amount << endl;;
}
*/
//Separo el método en dos métodos independientes
#include <iostream>

using namespace std;
//Esta función ahora tiene un nombre significativo
void imprimirDeuda(double cantidad)
{
    cout << "La deuda del usuario es " << cantidad << endl;
}
//Esta función también ahora tiene un nombre significativo
void imprimirNombre(string nombre)
{
    cout << "El nombre del deudor es " << nombre << endl;
}

#include <iostream>

using namespace std;

int main(int argc,char **argv)
{
    string nombreDeudor = "Pepito";
    double deudaEnPesos = 10000;

    imprimirNombre(nombreDeudor);
    imprimirDeuda(deudaEnPesos);
    
    return 0;
}