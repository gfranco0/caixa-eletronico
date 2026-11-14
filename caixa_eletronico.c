#include <stdio.h>

int main(void) {
    // Saldo inicial utilizado na atividade.
    int saldo = 1000;

    // Valor solicitado e valor restante para distribuir as cedulas.
    int valorSaque;
    int valorRestante;

    // Contadores da quantidade de cedulas de cada valor.
    int notas100, notas50, notas20, notas10, notas5;

    printf("===== CAIXA ELETRONICO =====\n");
    printf("Saldo disponivel: R$ %d\n", saldo);
    printf("Digite o valor do saque: R$ ");

    // Verifica se a entrada foi lida corretamente.
    if (scanf("%d", &valorSaque) != 1) {
        printf("\nERRO: Entrada invalida!\n");
        return 1;
    }

    // O saque precisa ser maior que zero.
    if (valorSaque <= 0) {
        printf("\nERRO: Valor de saque invalido!\n");
    }
    // O caixa trabalha com cedulas de 5; o saque deve ser multiplo de 5.
    else if (valorSaque % 5 != 0) {
        printf("\nERRO: O valor deve ser multiplo de 5!\n");
    }
    // Verifica se existe saldo suficiente para o saque.
    else if (valorSaque > saldo) {
        printf("\nERRO: Saldo insuficiente!\n");
    }
    else {
        // Usa uma copia do valor para calcular as cedulas,
        // preservando o valor original do saque.
        valorRestante = valorSaque;

        // Calcula as cedulas de R$ 100 e atualiza o restante.
        notas100 = valorRestante / 100;
        valorRestante = valorRestante % 100;

        // Calcula as cedulas de R$ 50.
        notas50 = valorRestante / 50;
        valorRestante = valorRestante % 50;

        // Calcula as cedulas de R$ 20.
        notas20 = valorRestante / 20;
        valorRestante = valorRestante % 20;

        // Calcula as cedulas de R$ 10.
        notas10 = valorRestante / 10;
        valorRestante = valorRestante % 10;

        // Calcula as cedulas de R$ 5.
        notas5 = valorRestante / 5;
        valorRestante = valorRestante % 5;

        printf("\n===== NOTAS ENTREGUES =====\n");

        // Exibe somente os tipos de cedula utilizados.
        if (notas100 > 0) {
            printf("%d nota(s) de R$ 100\n", notas100);
        }
        if (notas50 > 0) {
            printf("%d nota(s) de R$ 50\n", notas50);
        }
        if (notas20 > 0) {
            printf("%d nota(s) de R$ 20\n", notas20);
        }
        if (notas10 > 0) {
            printf("%d nota(s) de R$ 10\n", notas10);
        }
        if (notas5 > 0) {
            printf("%d nota(s) de R$ 5\n", notas5);
        }

        printf("\nSaque realizado com sucesso!\n");
    }

    return 0;
}
