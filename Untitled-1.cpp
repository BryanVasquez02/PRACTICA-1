#include <iostream>

// Declaraciones de las funciones
int sumar(int a, int b);
void imprimiResultado(int resultado);

int main(){
    //Ejemplo de uso de las funciones
    int num1,num2;
    std::cout<< "INGRESE EL PRIMER NUMERO";
    std::cin>>num1;

    std::cout<< "INGRESE EL SEGUNDO NUMERO";
    std::cin>> num2;

    // Llamada a la funcion de suma
    int resultado = sumar(num1,num2);

    // Llamada a la funcion de impresion
    imprimiResultado(resultado);

    return 0;
}

int sumar(int a, int b){
    return a + b;
}

//Declaracion de las funciones de imnpresion
void imprimiResultado(int resultado){
    std::cout << "El resultado de la suma es:"<<resultado << std::endl;
}
