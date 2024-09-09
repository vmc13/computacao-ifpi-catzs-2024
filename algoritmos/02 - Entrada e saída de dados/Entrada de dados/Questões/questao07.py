# Crie um programa que peça para uma pessoa digitar o seu salário e, em seguida, calcule e exiba qual será o imposto que a pessoa deve pagar e qual será salário final (salário - imposto) recebido por ela. Para efeito de programa, considere que o imposto será sempre 10% do salário. As saídas do programa devem ser semelhantes às do quadro abaixo.

salario = float(input("Informe o valor do salário: "))
imposto = salario * 0.1
salarioFinal = salario - imposto

print(f"Salário: {salario} \nImposto: {imposto} \nSalário final: {salarioFinal}")