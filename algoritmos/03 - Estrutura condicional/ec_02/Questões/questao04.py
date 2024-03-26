# Questão 04

nota1 = float(input("Escreva a 1ª nota: "))
nota2 = float(input("Escreva a 2ª nota: "))
nota3 = float(input("Escreva a 3ª nota: "))
nota4 = float(input("Escreva a 4ª nota: "))

notaExm = float(input("Escreva a nota do exame: "))

# Média 01
media = (nota1+nota2+nota3+nota4) / 4
resultado = ""
newMedia = (notaExm + media) / 2
mediaFinal = ""

if media >= 7.0:
    resultado = "Aluno aprovado."
elif media >= 5.0 and media <= 6.9:
    resultado = "Aluno em exame."
else:
    resultado = "Aluno reprovado."

# Média 02
if newMedia >= 5.0:
    mediaFinal = "Aluno aprovado."
else:
    mediaFinal = "Aluno reprovado."

print(f"Média: {media:.1f}")
print(resultado)
print(f"Nota do exame: {notaExm:.1f}")
print(mediaFinal)
print(f"Média final: {newMedia:.1f}")


