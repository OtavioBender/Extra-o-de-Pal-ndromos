# Extração de Palíndromos e Número Mínimo de Cortes em uma String

Este programa em C utiliza programação dinâmica para encontrar o número mínimo de cortes em uma string de forma que todos os substrings resultantes sejam palíndromos. Além disso, ele imprime os cortes realizados e os palíndromos resultantes..

## Descrição
O programa utiliza programação dinâmica para resolver o problema de particionamento de palíndromos. Dada uma string, ele calcula o número mínimo de cortes necessários para particionar a string de forma que cada partição seja um palíndromo. Ele também imprime as substrings palindrômicas como resultado.

## Exemplo
Para a string de entrada `bcdddaaadddadabba`, o programa deve produzir:
Palíndromos: b | c | dddaaaddd | ada | bb | a
Número mínimo de cortes: 3

## Como Funciona
1. **Verificação de Palíndromo**:
    - Uma função auxiliar `isPalindrome` verifica se uma substring é um palíndromo.

2. **Tabelas de Programação Dinâmica**:
    - A tabela `palin[i][j]` armazena se a substring de `i` a `j` é um palíndromo.
    - A tabela `dp[i]` armazena o número mínimo de cortes necessários para a substring de `0` a `i`.

3. **Preenchimento das Tabelas**:
    - A tabela `palin` é preenchida verificando todas as possíveis substrings.
    - A tabela `dp` é preenchida usando as informações da tabela `palin` para calcular os cortes mínimos.

4. **Reconstrução e Impressão**:
    - O programa reconstrói as substrings palindrômicas a partir da tabela `palin` e as imprime junto com o número mínimo de cortes.

## Como Compilar e Executar
1. Salve o código em um arquivo, por exemplo, `palindrome_partitioning.c`.
2. Abra um terminal e navegue até o diretório contendo o arquivo.
3. Compile o programa usando um compilador C.
