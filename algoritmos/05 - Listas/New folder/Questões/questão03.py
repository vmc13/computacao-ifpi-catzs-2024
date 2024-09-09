def classificar_medias(medias):
    aprovados = []
    exame_final = []
    reprovados = []
    
    for media in medias:
        if media > 7:
            aprovados.append(media)
        elif 4 <= media < 7:
            exame_final.append(media)
        elif media < 4:
            reprovados.append(media)
    
    return aprovados, exame_final, reprovados

medias = []
for i in range(10):
    media = float(input(f"Informe a média do aluno {i+1}: "))
    medias.append(media)

aprovados, exame_final, reprovados = classificar_medias(medias)

print("\nMédias aprovativas (maiores que 7):")
print(aprovados if aprovados else "Nenhuma")

print("\nMédias na faixa de exame final (4 <= média < 7):")
print(exame_final if exame_final else "Nenhuma")

print("\nMédias reprovativas (menores que 4):")
print(reprovados if reprovados else "Nenhuma")
