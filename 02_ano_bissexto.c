#include <stdio.h> // Biblioteca para entrada e saída
int main() // Função principal
{
int ano; // Variável para armazenar o ano
printf("Digite um ano:\n"); // Solicita o ano
scanf("%d", &ano); // Guarda o valor digitado
// Verifica se o ano é bissexto
// Regra: divisível por 4 e não por 100, ou divisível por 400
if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0)
{
printf("O ano %d e bissexto\n", ano); // Exibe se for bissexto
}
else
{
printf("O ano %d nao e bissexto\n", ano); // Exibe se não for
}
return 0; // Encerra o programa
}