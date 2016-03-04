#include <iostream>
#define SIZE 5
using namespace std;
void printArr(int arr[], int size);
void splitMerge(int x[], int inicio, int fim, int y[]);
void merge(int x[], int inicio, int meio, int fim, int y[]);
void copyArr(int x[], int inicio, int fim, int y[]);

int main()
{
    int x[SIZE] = {10, 7, 5, 8, 4};
    int y[SIZE] = {};

    splitMerge(x, 0, SIZE, y);
    printArr(y, SIZE);

    return 0;
}

void splitMerge(int x[], int inicio, int fim, int y[])
{
    if(fim - inicio < 2)
    {
        return;
    }
    int meio = (fim + inicio)/2;
    splitMerge(x, inicio, meio, y);
    splitMerge(x, meio, fim, y);
    merge(x, inicio, meio, fim, y);
    copyArr(x, inicio, fim, y);
}

void merge(int x[], int inicio, int meio, int fim, int y[])
{
    int i = inicio;
    int j = meio;

    for(int k = inicio; k < fim; k++)
    {
        if(i < meio && (j >= fim || x[i] <= x[j]))
        {
            y[k] = x[i];
            i += 1;
        }
        else
        {
            y[k] = x[j];
            j += 1;
        }
    }
}

void copyArr(int x[], int inicio, int fim, int y[])
{
    for(int k = inicio; k < fim; k++)
    {
        x[k] = y[k];
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
