# Questao 06

a = float(input("Insira o valor de A: "))
b = float(input("Insira o valor de B: "))
c = float(input("Insira o valor de C: "))

delta = (b**2) - (4*a*c)

if delta > 0:
    print("2 raízes")
    print(delta)
elif delta == 0:
    print("1 raíz")
    print(delta)
else:
    print("0 raízes")
    print(delta)