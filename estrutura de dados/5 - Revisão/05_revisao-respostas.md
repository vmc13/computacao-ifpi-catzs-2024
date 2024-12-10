### **Respostas**

---

### **Questão 1**
**Resposta correta:**
**E) I e II, apenas.**

- **I.** Verdadeiro: Compiladores convertem o código-fonte de alto nível para código de máquina antes da execução.
- **II.** Verdadeiro: Interpretadores executam o código diretamente linha por linha, sem conversão prévia.
- **III.** Falso: Compiladores não executam o código durante sua criação.
- **IV.** Falso: Interpretadores não requerem necessariamente um compilador para funcionar.

---

### **Questão 2**
**Resposta correta:**
**D) Um compilador produz código de máquina executável enquanto um interpretador interpreta o código linha por linha.**

---

### **Questão 3**
**Resposta correta:**
**B) Compiladores convertem todo o código fonte em linguagem de máquina de uma vez, enquanto interpretadores executam o código fonte linha por linha.**

---

### **Questão 4**
**Saída do código:**
O código contém um erro de tipo no `printf`, causando comportamento indefinido, mas considerando a entrada `15` e `1000`:

```c
Idade = 1000.000000
Salario = 15
```
Explicação:
- `%lf` espera um `double`, mas `idade` é um `int`.
- `%d` espera um `int`, mas `salario` é um `double`.

---

### **Questão 5**
**Saída do código:**
```c
16
```
Explicação: `idade + 2` (17) é menor ou igual a `18`, então o programa imprime `idade + 1` (16).

---

### **Questão 6**
**Saída do código:**
O código apresenta um erro lógico na condição `1000 < salario <= 2000`.  
O correto seria usar `1000 < salario && salario <= 2000`.

Considerando a correção:
```c
Salario = 675.15
```

Explicação:
- `salario = 1500.50` está na faixa de `1000 < salario <= 2000`.
- `inss = 1500.50 * 0.15 = 225.075`
- `irpf = 1500.50 * 0.25 = 375.125`
- `salario = inss + irpf = 675.15`.

---

### **Questão 7**
**Saída do código:**
```c
0.000000
1.000000
2.000000
3.000000
4.000000
5.000000
```

Explicação:
- `numero` vai de 0 a 10, incrementando por 2.
- Cada `numero` é dividido por `2.0` e impresso como `double`.

---

### **Questão 8**
**Saída do código:**
```c
0
1
2
3
4
5
6
7
8
9
10
```

---

### **Questão 9**
**Saída do código:**
```c
0
2
4
6
8
10
```

---

### **Questão 10**
**Saída do código:**
```c
10
11
13
14
16
17
19
20
```
Explicação:
- `a = 10`.
- Se `a % 2 == 0`, incrementa por 1; senão, incrementa por 2.

---

### **Questão 11**
**Respostas:**
1. (X) Capacidade de manipulação direta de memória utilizando ponteiros.
2. (X) Portabilidade, permitindo a execução de código em diferentes plataformas.
3. ( ) Tipagem dinâmica.
4. (X) Tipagem estática.
5. (X) Tipagem fraca.
6. ( ) Tipagem forte.

---

### **Questão 12**
**Respostas:**
a) A parte onde é colocada a condição de parada é a **parte_2**.
b) A **parte_1** é executada apenas **uma vez** antes do início do loop.
c) A **parte_3** é executada sempre **após cada iteração**, exceto se o loop for interrompido por um comando `break`.
d) Sim, a **parte_3** é executada **somente após o comando_1**.