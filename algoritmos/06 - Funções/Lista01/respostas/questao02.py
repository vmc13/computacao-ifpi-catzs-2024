def maior_numero(num1, num2):
    maior = 0
    if num1>num2:
        maior = num1
    elif num2>num1:
        maior = num2
    return maior

value1 = int(input("Digite o 1º número: "))
value2 = int(input("Digite o 2º número: "))

print(f"O maior é: {maior_numero(value1, value2)}")