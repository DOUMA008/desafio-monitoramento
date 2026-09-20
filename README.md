
# Sistema de Monitoramento de Temperatura

## 1. Identificação

nome do aluno: Vítor Hugo Nunes Pereira.

Disciplina:  Algoritmos e Pensamento Computacional

Professora: Profa. Karla Sartin.

Título do projeto: Sistema de Monitoramento de Temperatura

## 2. Objetivo

O objetivo deste projeto é desenvolver um sistema simples de monitoramento de temperatura utilizando a linguagem C.

O programa recebe temperaturas informadas pelo usuário, permite a utilização das unidades Celsius, Fahrenheit e Kelvin e verifica se a temperatura está normal, alta ou muito alta.

O sistema também identifica quando ocorrem três temperaturas consecutivas acima do limite definido e encerra o monitoramento automaticamente.

## 3. Funcionamento do programa

### Limite de temperatura

O limite utilizado pelo programa é de **35 °C**.

Temperaturas:

Abaixo de 0 °C: temperatura muito baixa;

De 0 °C até 25 °C: temperatura normal;

Acima de 25 °C até 35 °C: temperatura alta;

Acima de 35 °C: temperatura muito alta e considerada acima do limite.

### Realização das leituras

O programa solicita ao usuário uma temperatura e, em seguida, solicita a unidade de medida:

C para Celsius,
F para Fahrenheit,
K para Kelvin.

Quando a temperatura é informada em Fahrenheit ou Kelvin, ela é convertida para Celsius antes da verificação do limite.

As conversões utilizadas são:

**Fahrenheit para Celsius:**

**Kelvin para Celsius:**

### Tratamento de valores inválidos

O programa verifica se o valor informado pelo usuário é realmente um número.

Caso o usuário digite uma entrada inválida, como:


abc

o programa apresenta uma mensagem de erro:


Entrada invalida. Por favor, digite um numero valido.


Em seguida, a entrada incorreta é limpa e o programa solicita uma nova temperatura.

O programa também verifica se a unidade informada é válida. As opções aceitas são C, F e K.

### Identificação de temperaturas acima do limite

Depois da conversão para Celsius, o programa verifica se a temperatura é maior que 35 °C.

Quando isso acontece, uma mensagem de alerta é apresentada e um contador é incrementado.

Exemplo:


Temperatura: 40 °C

Temperatura muito alta!

Temperaturas consecutivas acima do limite: 1


### Contagem de temperaturas consecutivas

O programa utiliza uma variável chamada contador para registrar quantas temperaturas acima de 35 °C foram informadas consecutivamente.

Quando uma temperatura igual ou menor que 35 °C é informada, o contador é zerado.

Dessa forma, somente temperaturas realmente consecutivas são consideradas.

### Condição de encerramento

O monitoramento é encerrado automaticamente quando o contador chega a **3 temperaturas consecutivas acima de 35 °C**.

Nesse momento, o programa chama a função encerrarSistema() e finaliza o while utilizando break.


## 4. Estruturas de repetição utilizadas

O programa utiliza a estrutura de repetição:


while (1)


O while foi utilizado para manter o sistema funcionando continuamente, permitindo que o usuário informe várias temperaturas.

A repetição continua até que uma das condições de encerramento seja alcançada.

O programa utiliza:


break;

## 5. Como executar

Para compilar o programa utilizando o GCC, abra o terminal na pasta onde está o arquivo monitoramento.c e execute:


gcc monitoramento.c -o monitoramento


Depois, execute o programa com:


./monitoramento


No Windows, dependendo do ambiente utilizado, também pode ser necessário executar:


monitoramento.exe




## 6. Testes realizados

### Teste 1 — Validação de entradas inválidas

**Entrada utilizada:**


Digite uma temperatura: abc


**Resultado obtido:**


Entrada invalida. Por favor, digite um numero valido.


### Teste 2 — Temperaturas acima do limite, porém não consecutivas

Foram utilizadas temperaturas acima de 35 °C intercaladas com temperaturas dentro do limite.

**Exemplo:**

40 °C

25 °C

42 °C

30 °C


**Resultado:**

40 °C → contador = 1

25 °C → contador = 0

42 °C → contador = 1

30 °C → contador = 0


O programa não foi encerrado, pois as temperaturas acima do limite não ocorreram de forma consecutiva.



### Teste 3 — Três temperaturas consecutivas acima do limite

Foram informadas três temperaturas consecutivas acima de 35 °C:

40 °C

42 °C

45 °C


**Resultado obtido:**

40 °C → contador = 1

42 °C → contador = 2

45 °C → contador = 3


Ao atingir três temperaturas consecutivas acima do limite, o programa apresentou a mensagem de encerramento:

ATENCAO!

Tres temperaturas consecutivas acima do limite.

Sistema encerrado automaticamente.

