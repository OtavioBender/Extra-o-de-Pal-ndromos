#include <stdio.h>
#include <string.h>
#include <ctype.h>

int EhPalindromo(char *str, int in, int fin) {
    while (in < fin) {
        if (str[in] != str[fin]) {
            return 0; // não é palíndromo
        }
        in++;
        fin--;
    }
    return 1; // é palíndromo
}

void particao_palindromo_guloso(char *str) {
    int Tamanho = strlen(str);
    int in = 0, aux = 0, corte = 0;
    int fin = Tamanho;

    while (in < fin && in <= Tamanho) {
        if (str[in] == str[fin]) {
            aux = EhPalindromo(str, in, fin); // verificar se é palíndromo
            if (aux == 1) {
                corte++;
                if (in != 0) {
                    printf(" | ");
                }
                for (int i = in; i <= fin; i++) { // Imprimir subpalíndromo
                    printf("%c", str[i]);
                }
                in = in + 1; // avançar o início para o próximo segmento
                fin = Tamanho; // redefinir o final para o tamanho total
            }
        }
        fin--;
        if (in == fin) {
            printf("%c", str[in]); // imprime o último caractere
            in++;
            fin = Tamanho;
        }
    }
    printf("\n"); // adicionar uma nova linha após a impressão
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%s", str);

    particao_palindromo_guloso(str);
    return 0;
}