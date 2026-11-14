# Caixa Eletrônico em C

Projeto desenvolvido para a **Atividade 02 – Caixa eletrônico**, da disciplina **Algoritmos e Pensamento Computacional**.

## Objetivo

Implementar um programa em linguagem C que simula a operação de saque de um caixa eletrônico. O programa solicita o valor desejado, valida a solicitação e calcula a quantidade de cédulas necessárias.

## Regras da atividade

- Saldo inicial: **R$ 1.000**.
- O valor do saque deve ser positivo.
- O valor deve ser múltiplo de 5.
- O saque não pode ultrapassar o saldo disponível.
- Cédulas disponíveis: **R$ 100, R$ 50, R$ 20, R$ 10 e R$ 5**.
- O programa mostra somente as cédulas utilizadas.

## Pseudocódigo

```text
INÍCIO
    saldo <- 1000

    ESCREVA "Digite o valor do saque:"
    LEIA valorSaque

    SE valorSaque <= 0 ENTÃO
        ESCREVA "Valor de saque inválido"
    SENÃO SE valorSaque MOD 5 != 0 ENTÃO
        ESCREVA "O valor deve ser múltiplo de 5"
    SENÃO SE valorSaque > saldo ENTÃO
        ESCREVA "Saldo insuficiente"
    SENÃO
        valorRestante <- valorSaque

        notas100 <- valorRestante DIV 100
        valorRestante <- valorRestante MOD 100

        notas50 <- valorRestante DIV 50
        valorRestante <- valorRestante MOD 50

        notas20 <- valorRestante DIV 20
        valorRestante <- valorRestante MOD 20

        notas10 <- valorRestante DIV 10
        valorRestante <- valorRestante MOD 10

        notas5 <- valorRestante DIV 5
        valorRestante <- valorRestante MOD 5

        ESCREVA as quantidades de cédulas maiores que zero
        ESCREVA "Saque realizado com sucesso!"
    FIM SE
FIM
```
