# Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R). A fórmula para calcular o volume é: (4/3) *  3.14159 * (r**2)

raio = float(input("Informe o valor do raio: "))
pi = 3.14159
volume = (4/3) *  pi * (raio**3)

print(f"Volume = {volume:.3f}")