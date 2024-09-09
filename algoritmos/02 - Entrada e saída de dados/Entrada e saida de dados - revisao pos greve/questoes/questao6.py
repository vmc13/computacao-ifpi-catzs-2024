n1 = float(input('Digite a 1ª nota: '))
n2 = float(input('Digite a 2ª nota: '))
n3 = float(input('Digite a 3ª nota: '))
n4 = float(input('Digite a 4ª nota: '))

def calculaMedia(n1, n2, n3, n4):
    media = (n1+n2+n3+n4)/4
    return media

def gerarStatus(media):
    status = ''
    if media < 5:
        status = 'Aluno reprovado'
    elif media > 5 and media < 6.9:
        status = 'Aluno em exame'
    else:
        status = 'Aluno aprovado'
    
    return status

media = calculaMedia(n1, n2, n3, n4)
status = gerarStatus(media)

print(f'Média: {media:.1f}')
print(status)