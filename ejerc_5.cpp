/*
Una variable temporal es una variable que se utiliza para almacenar 
un valor que se utilizará más adelante en el código. 
En el contexto de la refactorización, una variable temporal se utiliza a menudo para almacenar
el resultado de una expresión compleja o una llamada a un método, 
para que no tener que repetir la misma expresión o
llamada a un método cada vez que necesite su valor.
*/
/*
Código antes de la refactorización
class Order {
public:
    double basePrice() const {
        //Calcula y devuelve el precio base
        return 1050.0;
    }
};
//Esta función recibe como argumento una referencia que es un objeto estático de la clase Order que se llama order
bool isExpensive(const Order& order) {
    double basePrice = order.basePrice();
    return basePrice > 1000;
}
Si refactorizo, elimino la necesida de llamar a la variable temporal basePrice
*/

#include <iostream>

using namespace std;

class Order 
{
public:
    double basePrice() const {
        //Calcula y devuelve el precio base
        return 1050.0;
    }
};

//En lugar de la función boobleana tan "fea", puedo refactorizarla eliminando la variable
//temporal, haciendo el código más legible

bool isExpensive(const Order& order)
{   //LA variable temporal basePrice fue eliminada en el proceso de refactoring
    return order.basePrice() > 1000;//Devuelve el resultado del objeto que hace uso de la funcion basePrice
}

int main(int argc,char **argv)
{

    return 0;
}