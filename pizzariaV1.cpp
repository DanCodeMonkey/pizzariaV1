#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

// PROJETO PIZZARIA 1DSM - FATEC VOTORANTIM:
// Daniel Fernando Vieira Arruda
// Gustavo Polâino
// Rodrigo Kauan da Silva Santos

int main() {

    setlocale(LC_ALL,"pt_BR.UTF-8");//mudar dentro do aspas dessa forma
    SetConsoleOutputCP(65001);//Adicionar essa linha logo abaixo do setlocale

    system("cls");

    // declaração de variáveis
    const float pizzaMistaGrande = 46;
    const float chopp = 12;
    const float cobertura = 8;
    const float refri360ml = 6;
    const float agua500ml = 6;
    unsigned int numeroPessoasMesa;

    unsigned int mult;

    // Entrada de dados
    printf("RESUMO DO VALOR DE CONSUMA DE MESA DA PIZZARIA \n\n");
    printf("Nº de pizzas: \n");
    fflush(stdout);
    scanf("%d", &mult);
    float totalPizzaMistaGrande = mult * pizzaMistaGrande;

    printf("Nº de chopp: \n");
    fflush(stdout);
    scanf("%d", &mult);
    float totalChopp = mult * chopp;

    printf("Nº de coberturas: \n");
    fflush(stdout);
    scanf("%d", &mult);
    float totalCobertura = mult * cobertura;

    printf("Nº de refrigerante 360ml: \n");
    fflush(stdout);
    scanf("%d", &mult);
    float totalRefri360ml = mult * refri360ml;

    printf("Nº de agua 500ml: \n");
    fflush(stdout);
    scanf("%d", &mult);
    float totalAgua500ml = mult * agua500ml;

    printf("Nº de pessoas na mesa: \n");
    fflush(stdout);
    scanf("%d", &numeroPessoasMesa);

    //processamento de dados
    float totalConta = totalPizzaMistaGrande + totalChopp + totalCobertura + totalRefri360ml + totalAgua500ml;
    float gorjeta = 0.1;
    float valorGorjeta = totalConta * gorjeta;
    float totalContaEGorjeta = totalConta + valorGorjeta;

    float valorPorPessoa = totalContaEGorjeta / numeroPessoasMesa;

    //saída de dados
    system("cls");

    printf("RESUMO DA CONTA \n\n");

    printf("Total sem gorjeta: R$%.2f \n", totalConta);
    printf("Valor da gorjeta: R$%.2f \n", valorGorjeta);
    printf("Porcentagem da gorjeta: %.f%%\n", gorjeta * 100);
    printf("Total consumo + gorjeta: R$%.2f \n", totalContaEGorjeta);
    printf("Quantidade de pessoas na mesa: %d \n", numeroPessoasMesa);
    printf("Total a pagar pro pessoa: R$%.2f \n\n", valorPorPessoa);

    system("pause");

    return 0;
}
