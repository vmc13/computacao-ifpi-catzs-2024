def calcular_salarios(salarios):
    soma_total = sum(salarios)
    soma_maiores_1000_50 = sum(salario for salario in salarios if salario > 1000.50)
    
    return soma_total, soma_maiores_1000_50

salarios = []
for i in range(13):
    salario = float(input(f"Informe o salário {i+1}: R$ "))
    salarios.append(salario)

soma_total, soma_maiores_1000_50 = calcular_salarios(salarios)

print(f"\nSoma de todos os salários: R$ {soma_total:.2f}")
print(f"Soma dos salários maiores que R$ 1000,50: R$ {soma_maiores_1000_50:.2f}")
