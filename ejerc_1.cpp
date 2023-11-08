/*
Campo de encapsuladoEncapsulación de campo implica proporcionar métodos que se pueden 
utilizar para leer/escribir en/desde el campo en lugar de acceder 
directamente al campo. Estos métodos se denominan métodos accesorios.
Encapsule el siguiente código:
class A
{
public:
  int var;
};
Página: 1
*/

#include <iostream>

using namespace std;

class A 
{
    //Encapsulo la variable miembro usando el modificador de acceso private
    private:
        int var;
    public:
    //Creo funciones miembro que me permiten acceder a la variable miembro encapsulada
    //Defino getter que me permite leer el valor encapsulado
    int getValor()
    {
        return var;
    }
    //Defino setter que me permite modificar el valor encapsulado
    void setValor(int _var)
    {   
        var = _var;
    }


};



int main(int argc,char **argv)
{
    return 0;
}