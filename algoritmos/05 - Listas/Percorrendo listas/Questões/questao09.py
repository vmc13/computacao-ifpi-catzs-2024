# Recebendo os salários dos 13 meses
salarios = []

for i in range(1, 14):
    salario = float(input(f"Digite o salário do mês {i}: "))
    salarios.append(salario)

# a) Exibir os salários maiores que 1.000,00
maiores_1000 = [salario for salario in salarios if salario > 1000]
print("Salários maiores que 1.000,00:", maiores_1000)

# b) Exibir os salários menores que 1.000,00
menores_1000 = [salario for salario in salarios if salario < 1000]
print("Salários menores que 1.000,00:", menores_1000)

# c) Exibir os salários dos meses pares
salarios_pares = [salarios[i] for i in range(1, 13, 2)]  # índices 1, 3, 5,... (meses pares)
print("Salários dos meses pares:", salarios_pares)
