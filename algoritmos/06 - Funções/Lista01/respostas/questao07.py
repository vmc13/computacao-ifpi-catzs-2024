def area_triangulo(base, altura):
    area = (base * altura) / 2
    return area

base = float(input("Digite a base: "))
altura = float(input("Digite a altura: "))

print(f"A área do triângulo é: {area_triangulo(base, altura):.0f} m2.")