# Questão 03

nota1 = float(input("Escreva a 1ª nota: "))
nota2 = float(input("Escreva a 2ª nota: "))
nota3 = float(input("Escreva a 3ª nota: "))
nota4 = float(input("Escreva a 4ª nota: "))

media = (nota1+nota2+nota3+nota4) / 4
resultado = ""

if media >= 7.0:
    resultado = "Aluno aprovado."
elif media >= 5.0 and media <= 6.9:
    resultado = "Aluno em exame."
else:
    resultado = "Aluno reprovado."

print(f"Média: {media:.1f}")
print(resultado)