# Questão 08

salario = float(input("Insira o seu salário: "))
ir = 0.0
inss = 0.0

if salario<1000:
    ir = 0.0
    inss = 0.0
elif salario >= 1000 and salario < 2000:
    ir = 0.1
    inss = 0.11
elif salario>=2000 and salario<3000:
    ir = 0.2
    inss = 0.15
else: 
    ir = 0.27
    inss = 0.2

print(f"Salário: R${salario:.2f} \nImposto de renda: R${salario*ir:.2f} \nINSS: R${inss*salario:.2f}")