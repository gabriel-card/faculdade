#include <iostream>
using namespace std;
void printArr(int arr[], int size);

int main()
{
    int x[5] = {10, 7, 5, 8, 4};
 
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
