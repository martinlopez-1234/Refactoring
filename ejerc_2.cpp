/*
Generalización de tipos es una técnica para hacer tipos más generalizados.
Ejemplos:
Mover un método de un hijo a una clase principal 
Crear métodos en la Clase Hijos y refactorizar en la clase padre
*/


#include <iostream>

using namespace std;
/*
Aca escribo el código que había antes de la refactorización
class Animal
{
    private:
        int sexo;
        int color;

    public:
        virtual void comunicar()
        {
            cout << "Grrrrrrr" << endl;
        } 
        virtual void comer()
        {
            cout << "Comiendo" << endl;
        }
        void dormir()
        {
            cout << "Durmiendo!" << endl;
        }

};

class gato:public Animal
{
    public:
        void maullar()
        {
            cout << "Miau!!!" << endl;
        }

};


class Perro:public Animal
{
    public:
        void ladrar()
        {
            cout << "Guau!!!" << endl;
        }



};
*/
//Código refactorizado
#include <iostream>

using namespace std;

class Animal
{
    private:
        int sexo;
        int color;

    public:
        
        //Muevo los dos métodos, el del gato maullar y el del perro ladrar a la clase padre, 
        //que se vah a llamar comunicar, que es un concepto más general que maullar o ladrar
        virtual void comunicar() = 0;//Comunicar pasa a ser un método que debe ser definido si o si por sus clases derivadas.
        virtual void comer()
        {
            cout << "Comiendo" << endl;
        }
        void dormir()
        {
            cout << "Durmiendo!" << endl;
        }

};

class Gato:public Animal
{
    //Elimino el método maullar, lo que hace que esta clase sea más 
    public:
    void comunicar()
    {
        cout << "Miau!" << endl;
    }
    void comer()
    {
        cout << "Gato comiendo!" << endl;
    }

};


class Perro:public Animal

{
    public:
    void comunicar()
    {
        cout << "Guau!" << endl;
    }
    void comer()
    {
        cout << "Perro comiendo!" << endl;
    }

};



int main(int argc,char **argv)
{
    //Creo instancia de perro
    Perro Boby;

    Boby.comunicar();
    //Creo instancia de gato en la memoria dinámica
    Animal* felix = new Gato();

    felix->comunicar();

    //Borro instancia de Gato en el heap
    delete felix;


    return 0;
}

