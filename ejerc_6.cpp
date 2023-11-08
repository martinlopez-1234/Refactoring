/*
6. Explicación de variables
Coloque el resultado de la expresión en variables temporales con un nombre que explique el propósito.
if ((platform.toUpperCase().indexOf("MAC") > -1) &&
   (browser.toUpperCase().indexOf("IE") > -1) &&
    wasInitialized() && resize > 0 ) {
         // do something
}
*/


//Refactorización mediante método de la explicación de variables. 
#include <iostream>
#include <string>

using namespace std;

int main(int argc,char **argv)
{
    string plataformaDesarrollo = "MAC";
    string browser = "IE";
    bool fueInicialliazado = true;
    int resize = 1;

    //Busca el string "MAC" en la variable plataformaDesarrollo y la guarda 
    //en la variable booleana esPlataformaDesarrolloMac
    bool esPlataformaDesarrolloMac = plataformaDesarrollo.find("MAC") != string::npos;
    
    //Busca el string "IE" en la variable browser y la guarda 
    //en la variable booleana esPlataformaDesarrolloMac
    
    bool esBrowserIE = browser.find("IE") != string::npos;
 
    // Asigna el valor de fueInicialliazado a la variable esInicializado
    bool esInicializado = fueInicialliazado;
    //Comprueba si resizeEsPositivo es postivo
    bool resizeEsPositivo = resize > 0;
    // Si todas las condiciones son verdaderas, imprime este mensaje
    if (esPlataformaDesarrolloMac && esBrowserIE && esInicializado && resizeEsPositivo)
    {
        cout << "El desarrollador esta usando una pc del tipo MAC y su explorador es IE de Microsoft" << endl;
    }

    return 0;
}