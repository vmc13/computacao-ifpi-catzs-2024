def calcula_imc(massa, altura):
    imc = massa / (altura**2)
    return imc

massa = float(input("Digite a massa: "))
altura = float(input("Digite a altura: "))

print(f"Seu imc é: {calcula_imc(massa, altura)}")