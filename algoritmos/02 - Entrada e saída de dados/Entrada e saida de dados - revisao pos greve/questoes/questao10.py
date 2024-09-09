# Receber os dois números do usuário
numero1 = int(input("Digite o primeiro número: "))
numero2 = int(input("Digite o segundo número: "))

if numero1 < numero2:
    for numero in range(numero1, numero2 + 1):
        print(numero)
else:
    print("O primeiro número deve ser menor que o segundo.")
