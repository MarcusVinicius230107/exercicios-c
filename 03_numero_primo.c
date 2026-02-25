#include <stdio.h> // Biblioteca para entrada e saída

int main() // Função principal
{
    int i; // Variável contador do laço
    int ehPrimo = 1; // Assume inicialmente que é primo
    int num; // Número digitado pelo usuário

    printf("Insira um numero inteiro positivo: "); // Solicita o número
    scanf("%d", &num); // Guarda o valor digitado

    if (num <= 1) // Verifica se é menor ou igual a 1
    {
        ehPrimo = 0; // Não é primo
    }
    else
    {
        // Testa divisores de 2 até num - 1
        for (i = 2; i < num; i++)
        {
            if (num % i == 0) // Se divisão for exata
            {
                ehPrimo = 0; // Não é primo
                break; // Interrompe o laço
            }
        }
    }

    if (ehPrimo == 1) // Se permaneceu como primo
    {
        printf("O numero %d e primo\n", num); // Exibe que é primo
    }
    else
    {
        printf("O numero %d nao e primo\n", num); // Exibe que não é primo
    }

    return 0; // Boa prática
}