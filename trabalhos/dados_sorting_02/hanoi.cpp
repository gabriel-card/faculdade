#include <iostream>
using namespace std;
void hanoi(int n, string inicial, string final, string aux);

int main()
{
    int x = 3;
    hanoi(x, "A", "C", "B");
 
    return 0;
}

void hanoi(int n, string inicial, string final, string aux)
{
    if (n == 1)
    {
        cout << "\nMova o disco 1 do bastao " << inicial << " para o " << final;
        return;
    }
    hanoi(n - 1, inicial, aux, final);
    cout << "\nMova o disco " << n << " do bastao " << inicial << " para o " << final;

    hanoi(n - 1, aux, final, inicial);
}
