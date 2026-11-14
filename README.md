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

## Código-fonte

O código completo está no arquivo [`caixa_eletronico.c`](caixa_eletronico.c).

## Como compilar e executar

É necessário ter um compilador C, como o GCC.

```bash
gcc caixa_eletronico.c -o caixa_eletronico
```

No Linux ou macOS:

```bash
./caixa_eletronico
```

No Windows:

```bash
caixa_eletronico.exe
```

## Exemplos de testes

Os testes abaixo consideram que cada execução começa novamente com saldo de R$ 1.000.

### Teste 1 — Saque de R$ 50

**Resultado esperado: válido**

```text
===== CAIXA ELETRONICO =====
Saldo disponivel: R$ 1000
Digite o valor do saque: R$ 50

===== NOTAS ENTREGUES =====
1 nota(s) de R$ 50

Saque realizado com sucesso!
```

**Análise:** R$ 50 é múltiplo de 5 e não ultrapassa o saldo disponível.

### Teste 2 — Saque de R$ 95

**Resultado esperado: válido**

```text
===== CAIXA ELETRONICO =====
Saldo disponivel: R$ 1000
Digite o valor do saque: R$ 95

===== NOTAS ENTREGUES =====
1 nota(s) de R$ 50
2 nota(s) de R$ 20
1 nota(s) de R$ 5

Saque realizado com sucesso!
```

**Análise:** R$ 95 é múltiplo de 5 e há saldo suficiente. A distribuição totaliza R$ 95.

### Teste 3 — Saque de R$ 123

**Resultado esperado: inválido**

```text
===== CAIXA ELETRONICO =====
Saldo disponivel: R$ 1000
Digite o valor do saque: R$ 123

ERRO: O valor deve ser multiplo de 5!
```

**Análise:** R$ 123 não é múltiplo de 5, então o saque é recusado.

### Teste 4 — Saque de R$ 1005

**Resultado esperado: inválido**

```text
===== CAIXA ELETRONICO =====
Saldo disponivel: R$ 1000
Digite o valor do saque: R$ 1005

ERRO: Saldo insuficiente!
```

**Análise:** R$ 1005 é múltiplo de 5, mas ultrapassa o saldo disponível.

## Resumo dos testes

| Valor solicitado | Resultado | Justificativa |
|---:|---|---|
| R$ 50 | Válido | Múltiplo de 5 e saldo suficiente |
| R$ 95 | Válido | Múltiplo de 5 e saldo suficiente |
| R$ 123 | Inválido | Não é múltiplo de 5 |
| R$ 1005 | Inválido | Saldo insuficiente |

## Conceitos de programação utilizados

- Variáveis e tipos primitivos (`int`);
- Estruturas condicionais (`if`, `else if`, `else`);
- Operadores aritméticos de divisão inteira (`/`) e módulo (`%`);
- Contadores para a quantidade de cédulas;
- Comentários para documentar o código.
