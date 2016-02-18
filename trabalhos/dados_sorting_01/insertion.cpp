#include <iostream>
using namespace std;

int main()
{
    int x[5] = {10, 5, 7, 4, 2};
    int i, j, aux;

    for (i = 1; i < 5; ++i)
    {
        aux = x[i];
        j = i - 1; 

        while(j >= 0 && x[j] > aux) {
            x[j + 1] = x[j];
            j = j - 1;
        }
        x[j+1] = aux;

    }

    for (int i = 0; i < 5; ++i)
    {
        cout << x[i] << endl;
    }

    return 0;
}
