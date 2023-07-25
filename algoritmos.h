#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include <iostream>
#include <iomanip>
#include "Cronometro.h"

using namespace std;

template <class T>
class Algoritmos
{
private:
    Cronometro cronometro;
public:
    size_t cantidadDeItineraciones; // Cantidad de veces que se itinera en el algoritmo
    double tiempoDeEjecucion;       // Tiempo que tarda en ejecutarse en milisegundos

    void bubbleSort(T* arreglo, size_t TAM);
    bool countingSort(T& arreglo, size_t TAM);

    /**
     * @brief shellSort
     *
     * Complexity: O(N^2)
     */
    void shellSort();

    /**
     * @brief insertionSort
     * Tiempo: O(N^2)
     */
    void insertionSort();

    /**
     * @brief heapSort
     * Tiempo: O(N logN)
     */
    void heapSort();

    /**
     * @brief mergeSort
     * Tiempo: O(N logN)
     */
    void mergeSort();

    /**
     * @brief quickSort
     * Tiempo AVG:          O(N logN)
     * Tiempo Worst Case:   O(N^2)
     */
    void quickSort();
};

/**
 *                                  bubbleSort Algorithm Time Complexity
 * +----------------------------------------------------------------------------------------------------+
 * |         Best               |                 Worst              |             Average              |
 * +----------------------------------------------------------------------------------------------------+
 * |         O(n)               |                 O(n^2)             |              O(n^2)              |
 * +----------------------------------------------------------------------------------------------------+
 *
 * @brief ordena los elementos de un array de menor a mayor.
 * @category algoritmo de ordenamiento.
 * @param [int* arreglo]
 * Es el array que se desea ordenar
 * @return [bool]
 * Si el array se puede ordenar de manera correcta retorna true, en caso de algun error retorna false.
 */
template <class T>
void Algoritmos<T>::bubbleSort(T* arreglo, size_t TAM)
{
    this->cantidadDeItineraciones = 0;
    this->tiempoDeEjecucion       = 0;
    this->cronometro.start();

    T aux;
    for(size_t i=0; i < (TAM - 1) ; ++i)
    {
        for(size_t j=0; j < (TAM - 1)-i; ++j)
        {
            if( arreglo[j] > arreglo[j+1] )
            {
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
           this->cantidadDeItineraciones++;
        }
    }

    this->cronometro.stop();
    this->tiempoDeEjecucion = this->cronometro.getSecondsElapsed();
}

#endif // ALGORITMOS_H
