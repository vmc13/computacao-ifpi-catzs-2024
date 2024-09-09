# Crie um programa que peça para o usuário digitar a altura e a base de um triângulo. Após isso, calcule e exiba qual é a sua área. As saídas do programa devem ser semelhantes às apresentadas no quadro abaixo. 

altura = float(input("Digite a altura: "))
base = float(input("Digite a base: "))
area = (base*altura)/2

print(f'Área: {area}')