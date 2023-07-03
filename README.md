# libCpp_Algoritmos

```cpp
#include <iostream>
#include "Algoritmos.h"

using namespace std;

void printArray(int* arreglo, size_t TAM)
{
    cout << "+----------+----------+" << endl;
    cout << "+  Indice  |  Valor   |" << endl;
    cout << "+----------+----------+" << endl;
    for(size_t i = 0; i < TAM; ++i)
    {
        cout << "|";
        cout << setw(10) << i;
        cout << "|";
        cout << setw(10) << arreglo[i];
        cout << "|" << endl;
    }
    cout << "+----------+----------+" << endl;
}

void fillArrayRandomly(int* arreglo, size_t TAM)
{
    int MAXIMO = 50, MINIMO = 0;
    for(size_t i=0; i < TAM; ++i)
    arreglo[i] = (rand() % (MAXIMO - MINIMO + 1)) + MINIMO;
}

int main()
{
    int ar[20];
    fillArrayRandomly(ar, 20);
    printArray(ar, 20);

//    Algoritmos<int> algoritmo;
//    algoritmo.bubbleSort(ar,20);

//    countSort(ar,20);
    printArray(ar, 20);
    return 0;
}
```

# libCPP_Cronometro
Este proyecto es una clase escrita en C++ que representa a un cronometro y es muy útil cuando quieres medir el tiempo trascurrido entre dos puntos de tu programa, también cuando deseas saber cuanto tiempo toma realizar alguna operación.

Para hacer uso de esta clase solo descargar los archivos **Cronometro.h** y **Cronometro.cpp**, despues incluyelos en tu proyecto y listo.

A continuacion se muestra un ejemplo practico.
```cpp
#include <iostream>
#include "Cronometro.h";

using namespace std;

int main()
{
    // Paso 1: Inicializacion
    Cronometro cronometro;

    // Paso 2: Inicia el cronometro
    cronometro.start();

    // Paso 3: Realiza las operaciones que deseas medir
    
    // Paso 4: Deten el cronomtro
    cronometro.stop();

    // Paso 5: Consulta el tiempo transcurrido
    cout << "Tiempo Transcurrido: " << cronometro.getSecondsElapsed() << " segundos." << endl;
    return 0;
}

```

