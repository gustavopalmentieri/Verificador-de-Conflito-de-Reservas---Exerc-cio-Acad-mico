# 📅 | Verificador de Conflito de Reservas - Exercício Acadêmico

Este projeto é um exercício acadêmico desenvolvido em linguagem C com o objetivo de praticar conceitos fundamentais de programação, como entrada de dados, estruturas condicionais e lógica de verificação entre intervalos de tempo.

---

## 💡 | Descrição

O programa simula um sistema simples de **reserva de salas**, permitindo que até **três usuários** realizem suas reservas informando os horários de início e fim. Em seguida, o sistema verifica se **há sobreposição entre os horários**, identificando possíveis **conflitos de agenda**.

O código utiliza **estruturas de decisão** para comparar os intervalos fornecidos por cada usuário e determinar se as reservas podem ou não ser realizadas.

---

### ✅ Se não houver conflitos entre os horários:

```
Nao ha conflito entre os horarios. Reserva efetuada!!
```

### ❌ Se houver conflito entre qualquer um dos horários:

```
Existe conflito nos horarios. Reserva nao efetuada!!
```

---

## 🛠️ | Tecnologias utilizadas

* Linguagem C
* Compilador padrão (ex: `gcc`)

---

## 📚 | Objetivo acadêmico

Este projeto foi criado como parte dos estudos introdutórios à linguagem C e tem como propósito exercitar:

* Leitura de dados com `scanf`
* Impressão de mensagens com `printf`
* Estruturas condicionais (`if`, `else`)
* Operadores lógicos (`&&`, `||`)
* Comparação de intervalos de tempo
* Organização de um programa simples em C

---

## 🧠 | Observações

* O programa considera apenas três reservas por execução.
* Os horários devem ser inseridos no formato decimal (ex: `10.0`, `14.5`).
* Não há validação para casos como "hora inicial maior que a final" ou entradas inválidas.

---
