# Extração de Palíndromos e Número Mínimo de Cortes em uma String

Este programa em C utiliza o metodo guloso para identificar e ordenar todos os palíndromos presentes em uma string fornecida pelo usuário. Além disso, ele remove os subpalíndromos redundantes e imprime a string original com barras verticais (|) indicando as posições dos palíndromos identificados.

## Exemplo
Para a string de entrada `bcdddaaadddadabba`, o programa deve produzir:
Palíndromos: b | c | dddaaaddd | ada | bb | a
Número mínimo de cortes: 3

## Como Funciona
1. **int EhPalindromo(char *str, int in, int fin)**:
    - Verifica se uma substring é um palíndromo.

2. **void ordenar_posicoes(int pos[][30], int n)**:
    - Ordena as posições dos palíndromos encontrados com base no comprimento em ordem decrescente.

3. **void achar_todos_palindromos(char *str, int tamanho)**:
    - Identifica todos os palíndromos na string e remove os subpalíndromos redundantes.

## Como Compilar e Executar
1. Salve o código em um arquivo, por exemplo, `extraipalindromos.c`.
2. Abra um terminal e navegue até o diretório contendo o arquivo.
3. Compile o programa usando um compilador C.
