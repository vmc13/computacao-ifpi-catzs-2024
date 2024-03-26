# Questão 02

numero1 = int(input("Digite o 1º número: "))
numero2 = int(input("Digite o 2º número: "))
numero3 = int(input("Digite o 3º número: "))

maior = 0
menor = 0

# Condicional maior
if numero1 > numero2 and numero1 > numero3:
    maior = numero1
elif numero2 > numero1 and numero2 > numero3:
    maior = numero2
else:
    maior = numero3

# Condicional menor
if numero1 < numero2 and numero1 < numero3:
    menor = numero1
elif numero2 < numero1 and numero2 < numero3:
    menor = numero2
else:
    menor = numero3

print(f"Maior: {maior}")
print(f"Menor: {menor}")