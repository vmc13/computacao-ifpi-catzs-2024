velocidade = int(input('Digite a sua velocidade: '))


def gerarMulta(velocidade):
    verificacao = ''
    if velocidade > 80:
        excesso = velocidade - 80
        multa = excesso * 10
        verificacao = f"Você foi multado em R${multa:.2f}"
    else:
        verificacao = ''
    return verificacao

print(gerarMulta(velocidade))
