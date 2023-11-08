/*
El caso específico del método “Inline” se presenta cuando tenemos uno o más métodos cuyos códigos
son lo suficientemente autoexplicativos como para poder prescindir de ellos.
En lugar de tener un método separado, puedes mover el cuerpo del método al lugar donde se llama.
Esto se conoce como “inlining” un método.
Es decir cuando tengo una función que hace algo, pero es algo es muy simple, en lugar de ser una función separada
aumentando la complejidad innecesariamente creando más modulos de los que necesito, muevo el cuerpo de la función dentro de otra función

Al mover el cuerpo del método a la función que lo llama, reduces la cantidad de módulos o métodos en tu código, 
lo que puede hacer que tu código sea más fácil de leer y mantener. 
sto es especialmente útil cuando el método solo se utiliza en un lugar y su lógica es simple y fácil de entender.
*/
/*
El cuerpo de un método es tan claro como su nombre. [5].
Cuando el cuerpo de un método es tan claro como el nombre,
entonces debe deshacerse del método.

Ejemplo:
int getRating()
{
  return (moreThanFiveLateDeliveries()) ? 2 : 1;
}
boolean moreThanFiveLateDeliveries()
{
  return numberOfLateDeliveries > 5;
*/


#include <iostream>

using namespace std;

//Refactorizo ingresando el cuerpo de la función de tipo boolean moreThanFiveLateDeliveries dentro de la 
//función getRating

int getRating(int numberOfLateDeliveries)
{
    return (numberOfLateDeliveries > 5) ?  2 : 1;
}




int main(int argc,char **argv)
{
    int numeroEntregasTarde = 3;

    cout << "Por favor, ingresa el número de entregas tardías: ";
    cin >> numeroEntregasTarde;

    int rating = getRating(numeroEntregasTarde);
    
    cout << "El rating del empleado Pepito es: " << rating << endl;
    
    return 0;
}