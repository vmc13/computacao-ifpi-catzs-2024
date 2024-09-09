def calula_media(num1, num2, num3):
    media = (num1 + num2 + num3) / 3
    return media

value1 = float(input("Digite o 1ª nota: "))
value2 = float(input("Digite o 2ª nota: "))
value3 = float(input("Digite o 3ª nota: "))

print(f"Sua média é {calula_media(value1, value2, value3):.1f}")