# Crie um programa que peça para o usuário digitar o raio de um círculo e, em seguida, calcule e exiba a sua área e o seu comprimento. A saída do programa deve ser igual a do quadro abaixo.
# Dica: Nos cálculos, considere o π como 3.14.

raio = float(input("Digite o raio: "))
pi = 3.14
area = pi * (raio**2)
comprimento = 2 * pi * raio

print(f'Área: {area} \nComprimento: {comprimento}')