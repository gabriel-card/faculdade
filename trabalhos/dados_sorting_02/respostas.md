https://github.com/gabriel-card/faculdade/tree/master/trabalhos/dados_sorting_02

## Estrutura de Dados
### Sorting - Trabalho 02

1. Complexidade dos Algoritmos:<br/>
    a. *MERGE SORT*:<br/>
        a1. Pior cenário: O(n*logn)<br/>
        a2. Melhor cenário: Variação entre O(n) e O(n*logn)<br/>
        a3. Cenário médio: O(n*logn)<br/><br/>

    b. *QUICK SORT*:<br/>
        a1. Pior cenário: O(n*n)<br/>
        a2. Melhor cenário: O(n*logn) (partição simples) ou O(n) (partição em 3 vias)<br/>
        a3. Cenário médio: O(n*logn)<br/><br/>

2. Quais são as diferenças entre o *MERGE SORT* e o *QUICK SORT*? Cite e explique.
    - Ambas utilizam os método 'dividir para conquistar', ou seja, criar sub-arrays e ordená-los separadamente para depois juntá-los em um novamente. Porém, se diferem nas técnicas para aplicar tal método; enquanto o *MERGE SORT* divide o array até existirem apenas sub-arrays de 1 elemento e, depois, reune todos os sub-arrays em um único array enquanto ordena, o *QUICK SORT* assume um *pivot*, reorderna o array onde os numeros menores que o *pivot* se aloquem antes (à esquerda) dele, enquanto os maiores se aloquem após (direita). Após isso, separa-se o array em dois (utilizando o *pivot* como referência de partição) e aplica-se recursivamente as instruções anteriores.

3. Fazer o chinês do algoritmo *QUICK SORT* usando como entrada os números: {10, 7, 5, 8, 4}

```
quickSort(x = {10, 7, 5, 8, 4}, inicio = 0, fim = 4)
i = inicio (0)
j = fim (4)
a = 5

while(0 <= 4) (true)
    while(10 < 5 && 0 < 4) (false)
    while(4 > 5 && 4 > 0) (false)
    if(0 <= 4) (true)
        b = 10
        x[0] = 4
        x[4] = 10
        i = 1
        j = 3
        x = {4, 7, 5, 8, 10}

while(1 <= 3) (true)
    while(7 < 5 && 1 < 4) (false)
    while(8 > 5 && 3 > 0) (true)
        j = 2
    while(5 > 5 && 2 > 0) (false)
    if(1 <= 2) (true)
        b = 7
        x[1] = 5
        x[2] = 7
        i = 2
        j = 2
        x = {4, 5, 7, 8, 10}

while(2<=2) (true)
    while(7 < 5 && 2 < 4) (false)
    while(7 > 5 && 2 > 0) (true)
        j = 1
    while(5 > 5 && 1 > 0) (false)
    if(2 <= 1) (false)

while(2 <= 1) (false)
if(1 > 0)
    quickSort(x = {4, 5, 7, 8, 10}, inicio = 0, fim = 1)
        i = 0
        j = 1
        a = 4
        while(0 <= 1) (true)
            while(4 < 4 && 0 < 1) (false)
            while(5 > 4 && 1 > 0) (true)
                j = 0
            if(0 <= 0) (true)
                b = 4
                x[0] = 4
                x[0] = 4
                i = 1
                j = -1
                x = {4, 5, 7, 8, 10}
        while(1 <= -1) (false)
        if(-1 > 0) (false)
        if(1 < 1) (false)

final:
x = {4, 5, 7, 8, 10}
            
    

```


