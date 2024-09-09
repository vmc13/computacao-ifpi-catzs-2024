idade = int(input('Digite a sua idade: '))

def verificaIdade(idade):
    verificacao = ''
    if idade >= 18:
        verificacao = 'Maior de idade'
    elif idade < 18:
        verificacao = 'Menor de idade'
    else:
        verificacao = 'Digite um valor válido!'
    return verificacao

verificado = verificaIdade(idade)
print(verificado)
