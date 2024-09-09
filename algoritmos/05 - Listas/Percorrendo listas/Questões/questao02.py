lista = [7, -3, 15, 0, -22, 9, -6, 13, -8, 4]
maiores = []
menores = []
pares = []
impares = []

for i in lista:
    if (i > 0):
        maiores.append(i)
        if (i % 2 == 0):
            pares.append(i)
        elif (i % 2 == 1):
            impares.append(i)
    elif (i < 0):
        menores.append(i)
        if (i % 2 == 0):
            pares.append(i)
        elif (i % 2 == 1):
            impares.append(i)

print(f"Maiores que 0: {maiores}")
print(f"Menores que 0: {menores}")
print(f"Valores pares: {pares}")
print(f"Valores ímpares: {impares}")
