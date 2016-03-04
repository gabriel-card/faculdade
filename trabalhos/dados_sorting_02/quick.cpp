#include <iostream>
#define SIZE 5
using namespace std;
void printArr(int arr[], int size);
void quickSort(int arr[], int inicio, int fim);

int main()
{
    int x[SIZE] = {10, 7, 5, 8, 4};

    quickSort(x, 0, SIZE-1);
    printArr(x, SIZE);
 
    return 0;
}

void quickSort(int arr[], int inicio, int fim)
{
    int i, j, a, b;
    i = inicio;
    j = fim;
    a = arr[(inicio + fim) / 2];

    while(i <= j) 
    {
        while(arr[i] < a && i < fim)
        {
            i++;
        }

        while(arr[j] > a && j > inicio)
        {
            j--;
        }

        if(i <= j)
        {
            b = arr[i];
            arr[i] = arr[j];
            arr[j] = b;
            i++;
            j--;
        }
    }

    if(j > inicio)
    {
        quickSort(arr, inicio, j);
    }
    if(i < fim)
    {
        quickSort(arr, i, fim);
    }

}

void printArr(int arr[], int size)
{
    cout << "{";
    for (int i = 0; i < size; ++i)
    {
        if (i == size-1)
        {
            cout << arr[i] << "}"<< endl;
        }
        else
        {
            cout << arr[i] << ", ";
        }
    }
}
