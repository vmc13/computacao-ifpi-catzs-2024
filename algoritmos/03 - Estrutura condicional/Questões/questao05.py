# Questao 05

salario = float(input("Digite o salário: "))
inss = 0.0
imposto = 0.0

if salario >= 2000.00:
    imposto = 0.15
    inss = 0.10
else:
    imposto = 0.0
    inss = 0.0

print(f"Salário: R${salario:.2f} \nImposto de renda: R${salario*imposto:.2f} \nINSS: R${salario*inss:.2f}")