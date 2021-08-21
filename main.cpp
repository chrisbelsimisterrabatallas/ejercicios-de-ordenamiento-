#include <iostream>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
using namespace std;

//Se tiene un vector que almacena las ciudades del mundo: Quito, Guayaquil, Cali, Bogotá, etc.
//Se tien otro vector que almacena las temperaturas de estas ciudades.
//A acada ciudad le corresponde una temperatura
//Quito     17
//Guayaquil 23
//Esmeraldas 28
//Cali       18
void MostrarCiudad(char *vector[],const int tamanio){
    int i;
    for(i=0;i<tamanio;i++){
        cout<<endl<<vector[i];
    }
}



//a) Se pide diseñar la función que ordene alfabéticamente por ciudades sin
//olvidar la temperatura. Resultado esperado de esta ordenación:
//Cali    18
//Esmeraldas 28
//Guayaquil 23
//Quito 17
void OrdenarCiudad(char *vector[],const int tamanio){
    char *temp;
    int i,j;

    for(i=0; i<tamanio-1; i++){
        for(j=i+1; j<tamanio; j++){
            if(strcmp(vector[i], vector[j]) > 0){
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
            }
        }
    }
}

//b) Se pide diseñar la función que ordene por la temperatura ascendentemente.
// (conservando la ciudad). Resultado esperado:
//  Quito   17
//  Cali 18
//  Guayaquil 23
//  Esmeraldas 28

void orden_temp_acs(int vector[], int tamanio)
{
    for(int i=0; i<tamanio; i++)
    {
        for(int j=i+1; j<tamanio; j++)
            if(vector[i] > vector[i+1])
            {
                int aux;
                aux=vector[i];
                vector[i]=vector[j];
                vector[j]=aux;
            }
    }
}

int main() {
    char *ciudad[] = {"Cali 18", "Esmeraldas 28", "Guayaquil 23", "Quito 17"};
    int num[4];

    const int Elementos=sizeof(ciudad)/sizeof(char*);

    cout<<endl<<"\n Nombres desordenados\n\n" ;
    MostrarCiudad(ciudad,Elementos);

    OrdenarCiudad(ciudad,Elementos);

    cout<<endl<<"\n Ordenados alfabeticamente\n\n";
    MostrarCiudad(ciudad,Elementos);

    cout<<endl<<"\n Ordenados Numericamente\n\n";
    orden_temp_acs(ciudad,num);
    MostrarCiudad(ciudad,Elementos);

    return 0;
}
