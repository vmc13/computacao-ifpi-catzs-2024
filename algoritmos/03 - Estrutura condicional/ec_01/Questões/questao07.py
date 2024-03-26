# Questao 07
import math

a = float(input("Insira o valor de A: "))
b = float(input("Insira o valor de B: "))
c = float(input("Insira o valor de C: "))

delta = b**2 - 4*a*c

if a == 0:
    print("Impossível calcular")
else:
    x1 = ((-b) + math.sqrt(delta))/(2*a)
    x2 = ((-b) - math.sqrt(delta))/(2*a)
    print(f"R1 = {x1:.5f}")
    print(f"R2 = {x2:.5f}")
