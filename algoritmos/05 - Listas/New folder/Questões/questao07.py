# Cria as duas listas
lista1 = []
lista2 = []

for i in range(5):
    numero = int(input(f"Informe o número {i+1} da primeira lista: "))
    lista1.append(numero)

for i in range(5):
    numero = int(input(f"Informe o número {i+1} da segunda lista: "))
    lista2.append(numero)

lista3 = lista1 + lista2

print("\nA terceira lista formada pela junção das duas listas é:")
print(lista3)
