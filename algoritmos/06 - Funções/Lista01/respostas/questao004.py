def vericia_aprovacao(media):
    aprova = True
    if media < 7:
        aprova = False
    return aprova

media = float(input("Digite sua média: "))
print(f"O aluno está aprovado? \n{vericia_aprovacao(media)}")