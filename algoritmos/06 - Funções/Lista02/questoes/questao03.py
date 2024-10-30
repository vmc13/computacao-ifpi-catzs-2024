def gerar_situacao(n1, n2, n3):
    media = (n1+n2+n3) / 3
    situacao = ""
    if media >= 7:
        situacao = "Aprovado"
    elif media >= 5 and media <= 6:
        situacao = "Prova final"
    else:
        situacao = "Reprovado"
    return situacao

print(gerar_situacao(8, 10, 6))