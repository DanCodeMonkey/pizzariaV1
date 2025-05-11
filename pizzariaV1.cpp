#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

// PROJETO PIZZARIA 1DSM - FATEC VOTORANTIM:
// Daniel Fernando Vieira Arruda
// Gustavo Polâino
// Rodrigo Kauan da Silva Santos

int main()
{

    setlocale(LC_ALL,"pt_BR.UTF-8");//mudar dentro do aspas dessa forma
    SetConsoleOutputCP(65001);//Adicionar essa linha logo abaixo do setlocale

    system("cls");

    // declaração de variáveis
    const float pizzaMistaGrande = 46, chopp = 12, cobertura = 8, refri = 6, agua = 4;
    unsigned int NumeroPessoasMesa;
    unsigned int quantidade;
    float totalPizzaMistaGrande, totalChopp, totalCobertura, totalRefri, totalAgua, totalConta, gorjeta = 0.1, valorGorjeta, totalContaEGorjeta, valorPorPessoa, desconto, descontoPorcentagem, totalContaEGorjetaEDesconto;


    // Entrada de dados
    printf(" <--- FECHAMENTO DE CONTA DE MESA DA PIZZARIA ---> \n\n");

    printf("Nº de pizzas: \n");
    fflush(stdout);
    scanf("%d", &quantidade);
    totalPizzaMistaGrande = quantidade * pizzaMistaGrande;

    printf("Nº de chopp: \n");
    fflush(stdout);
    scanf("%d", &quantidade);
    totalChopp = quantidade * chopp;

    printf("Nº de coberturas: \n");
    fflush(stdout);
    scanf("%d", &quantidade);
    totalCobertura = quantidade * cobertura;

    printf("Nº de refrigerante: \n");
    fflush(stdout);
    scanf("%d", &quantidade);
    totalRefri = quantidade * refri;

    printf("Nº de agua: \n");
    fflush(stdout);
    scanf("%d", &quantidade);
    totalAgua = quantidade * agua;

    printf("Nº de pessoas na mesa: \n");
    fflush(stdout);
    scanf("%d", &NumeroPessoasMesa);

    
    //processamento de dados
    totalConta = totalPizzaMistaGrande + totalChopp + totalCobertura + totalRefri + totalAgua;
    valorGorjeta = totalConta * gorjeta;
    totalContaEGorjeta = totalConta + valorGorjeta;


    //aplicação de descontos por quantia gasta
    if(totalContaEGorjeta > 0 && totalContaEGorjeta <= 300){
      desconto = totalContaEGorjeta * 0.052;
    }else if(totalContaEGorjeta > 300 && totalContaEGorjeta <= 600){
        desconto = totalContaEGorjeta * 0.08;
    }else{
        desconto = totalContaEGorjeta * 0.1;
    }

    descontoPorcentagem = (desconto / totalContaEGorjeta) *100;

    totalContaEGorjetaEDesconto = totalContaEGorjeta - desconto;

    valorPorPessoa = totalContaEGorjeta / NumeroPessoasMesa;


    //saída de dados
    system("cls");

    printf(" <--- FECHAMENTO DE CONTA DE MESA DA PIZZARIA ---> \n\n");

    printf("Total sem gorjeta: R$%.2f \n", totalConta);
    printf("Valor da gorjeta em reais: R$%.2f \n", valorGorjeta);
    printf("Valor da gorjeta em porcentagem: %.2f%%\n", gorjeta * 100);
    printf("Total consumo + gorjeta: R$%.2f \n", totalContaEGorjeta);
    printf("Desconto em reais: R$%.2f \n", desconto);
    printf("Desconto em porcentagem: %.1f%% \n", descontoPorcentagem);
    printf("Total consumo + gorjeta com desconto: R$%.2f \n", totalContaEGorjetaEDesconto);
    printf("Quantidade de pessoas na mesa: %d \n", NumeroPessoasMesa);
    printf("Total a pagar por pessoa: R$%.2f\n", valorPorPessoa);

    system("pause");

    return 0;
}
