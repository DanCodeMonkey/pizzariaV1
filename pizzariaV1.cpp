#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{

    setlocale(LC_ALL,"pt_BR.UTF-8");//mudar dentro do aspas dessa forma
    SetConsoleOutputCP(65001);//Adicionar essa linha logo abaixo do setlocale

    system("cls");

    // declaração de variáveis
    const float pizzaMistaGrande = 46;
    const float chopp = 12;
    const float cobertura = 8;
    const float refri = 6;
    const float agua = 6;
    int NumeroPessoasMesa;

    unsigned int mult;

    // Entrada de dados
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

    printf("Nº de refrigerante: \n");
    fflush(stdout);
    scanf("%d", &mult);
    float totalRefri = mult * refri;

    printf("Nº de agua: \n");
    fflush(stdout);
    scanf("%d", &mult);
    float totalAgua = mult * agua;

    printf("Nº de pessoas na mesa: \n");
    fflush(stdout);
    scanf("%d", &NumeroPessoasMesa);

    //processamento de dados
    float totalConta = totalPizzaMistaGrande + totalChopp + totalCobertura + totalRefri + totalAgua;
    float gorjeta = 0.1;
    float valorGorjeta = totalConta * gorjeta;
    float totalContaEGorjeta = totalConta + valorGorjeta;

    float valorPorPessoa = totalContaEGorjeta / NumeroPessoasMesa;

    //saída de dados
    system("cls");

    printf("Total sem gorjeta: R$%.2f \n", totalConta);
    printf("Valor da gorjeta: R$%.2f \n", valorGorjeta);
    printf("Valor da gorjeta: %.2f%%\n", gorjeta * 100);
    printf("Total consumo + gorjeta: R$%.2f \n", totalContaEGorjeta);
    printf("Quantidade de pessoas na mesa: %d \n", NumeroPessoasMesa);
    printf("Total a pagar pro pessoa: R$%.2f \n", valorPorPessoa);

    system("pause");

    return 0;
}