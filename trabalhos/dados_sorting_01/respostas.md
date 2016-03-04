https://github.com/gabriel-card/faculdade/tree/master/trabalhos/dados_sorting_01

## Estrutura de Dados
### Sorting - Trabalho 01

1. Objetivo do *INSERTION SORT*:
  1a. Objetivo do *INSERTION SORT*:
    - Ordernar pequenos números de elementos com eficiência.

  2b. Complexidade do *INSERTION SORT*:
    - O(n^2)

2. Qual a diferença entre os algoritmos de sorting: *BUBBLE* e *SELECTION*?
  - Não há diferenças significativas na complexidade de ambos algoritmos (se desconsiderar a complexidade de melhor caso), apenas na forma que se ordena os elementos. Enquanto no *BUBBLE* se percorre pelo vetor várias vezes e em cada loop flutuar o maior elemento para o final do array, o *SELECTION* faz o inverso, ou seja, traz o menor elemento para o início.

3. "Chinês" do algoritmo de *INSERTION SORT*:

    x[]: {10, 5, 7, 4, 2}
    x[1] < x[0]
    x[1] = x[0]
    x[0] = 5

    i = 1 - {5, 10, 7, 4, 2}
    x[2] < x[1]
    x[2] = x[1]
    x[1] = 7

    i = 2 - {5, 7, 10, 4, 2}
    x[3] < x[2]
    x[3] = x[2]
    x[3] < x[1]
    x[2] = x[1]
    x[3] < x[0]
    x[1] = x[0]
    x[0] = 4

    i = 3 - {4, 5, 7, 10, 2}
    x[4] < x[3]
    x[4] = x[3]
    x[4] < x[2]
    x[3] = x[2]
    x[4] < x[1]
    x[2] = x[1]
    x[4] < x[0]
    x[1] = x[0]
    x[0] = 2

    i = 4 - {2, 4, 5, 7, 10}
    x[] ordenado: {2, 4, 5, 7, 10}
