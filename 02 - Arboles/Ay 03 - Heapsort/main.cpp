#include <iostream>
using namespace std;
 
// Convertir a heap un sub-arbol con raiz en i,
// el cual es un indice en arr[].
// n es el tamaño del heap
void heapify(int arr[], int N, int i)
{
 
    // Inicializar raiz como largest
    int largest = i;
 
    // left = 2*i + 1
    int l = 2 * i + 1;
 
    // right = 2*i + 2
    int r = 2 * i + 2;
 
    // Si el hijo izquierdo es mayor a la raiz
    if (l < N && arr[l] > arr[largest])
        largest = l;
 
    // Si el hijo derecho es mayor a largest
    if (r < N && arr[r] > arr[largest])
        largest = r;
 
    // Si largest no es la raiz
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Convertir a heap el sub-arbol afectado
        // de manera recursiva
        heapify(arr, N, largest);
    }
}
 
void heapSort(int arr[], int N)
{
 
    // Construir heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
 
    // Extraer un elemento del heap uno por uno
    for (int i = N - 1; i > 0; i--) {
 
        // Mover raiz actual al final
        swap(arr[0], arr[i]);
 
        // Llamar max heapify en el heap reducido
        heapify(arr, i, 0);
    }
}
 
// Funcion para impimir un array
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    heapSort(arr, N);
 
    cout << "Sorted array is \n";
    printArray(arr, N);
}