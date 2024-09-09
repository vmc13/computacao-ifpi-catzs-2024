def calcula_area(lado):
    resultado = lado**2
    return resultado

value = float(input("Digite o lado: "))
print(f"A área é: {calcula_area(value)}")