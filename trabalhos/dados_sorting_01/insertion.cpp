#include <iostream>
using namespace std;
void printArr(int arr[], int size);

int main()
{
    int x[5] = {10, 5, 7, 4, 2};

    cout << "x[]: ";
    printArr(x, 5);

    for (int i = 1; i < 5; ++i)
    {
        int aux = x[i];
        int j = i - 1;


        while(j >= 0 && x[j] > aux) {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j+1] = aux;

        cout << i << ". ";
        printArr(x, 5);

    }

    cout << "x[] ordenado: ";
    printArr(x, 5);

    return 0;
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
