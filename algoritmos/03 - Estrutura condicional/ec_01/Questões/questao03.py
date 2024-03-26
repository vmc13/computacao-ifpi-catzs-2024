# Questão 03

salario = float(input("Insira o valor do salário: "))
aumento = 0.0

if salario >= 1250.0:
    aumento = 0.1
else:
    aumento = 0.15

novoSalario = (salario*aumento) + salario

print(f"Aumento: R${salario*aumento:.2f} \nNovo salário: {novoSalario:.2f}")