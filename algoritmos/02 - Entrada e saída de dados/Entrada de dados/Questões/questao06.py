# Crie um programa peça para o usuário digitar o salário de uma pessoa e, seguida, calcule e exiba qual será o imposto que essa pessoa deva pagar, conforme a saída do quadro abaixo. Para efeito de programa, considere que o imposto será sempre 10% do salário.

salario = float(input("Informe o valor do salário: "))
imposto = salario * 0.1

print(f"Salário: {salario} \nImposto: {imposto}")