#include <stdio.h> // Biblioteca para entrada e saída

int main() // Função principal
{
    int numero, i; // numero = valor digitado, i = contador
    long long fatorial = 1; // Variável para armazenar o resultado

    printf("Insira um numero inteiro positivo: "); // Solicita o número
    scanf("%d", &numero); // Guarda o valor digitado

    if (numero < 0) // Verifica se é negativo
    {
        printf("Numero invalido. Digite um numero positivo.\n");
    }
    else
    {
        // Calcula o fatorial multiplicando de 1 até o número
        for (i = 1; i <= numero; i++)
        {
            fatorial = fatorial * i; // Multiplicação acumulativa
        }

        printf("O fatorial de %d e %lld\n", numero, fatorial); // Exibe o resultado
    }

    return 0; // Finaliza o programa corretamente
}