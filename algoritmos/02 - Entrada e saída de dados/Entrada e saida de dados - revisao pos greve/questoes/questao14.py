numero = int(input("Digite um número inteiro maior que 1: "))

if numero > 1:
    soma = 0

    for i in range(1, numero + 1):
        soma += i
        print(i)

    print(f"Soma = {soma}")
else:
    print("O número digitado não é maior que 1. Tente novamente.")
