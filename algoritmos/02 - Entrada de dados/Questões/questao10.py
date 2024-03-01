#  Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, segundo a fórmula:
# 𝑑 = √(𝑥1 − 𝑥2) 2 + (𝑦1 − 𝑦2) 
# Assim, o primeiro valor que o usuário vai digitar será o x1, o segundo valor será o y1, o terceiro valor será o x2 e o quarto valor será o y2.

x1 = float(input("Digite o x1: "))
y1 = float(input("Digite o y1: "))
x2 = float(input("Digite o x2: "))
y2 = float(input("Digite o y2: "))

formula = (((x1-x2)**2) + ((y1-y2)**2)) ** (1/2)

print(f"{formula:.4f}")