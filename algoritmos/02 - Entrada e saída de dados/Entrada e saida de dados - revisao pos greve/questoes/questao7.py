valor = int(input('Digite um valor entre 1 e 12: '))

def gerarMeses(valor):
    mes = ''
    if valor == 1:
        mes = 'Janeiro'
    elif valor == 2:
        mes = 'Fevereiro'
    elif valor == 3:
        mes = 'Março'
    elif valor == 4:
        mes = 'Abril'
    elif valor == 5:
        mes = 'Maio'
    elif valor == 6:
        mes = 'Junho'
    elif valor == 7:
        mes = 'Julho'
    elif valor == 8:
        mes = 'Agosto'
    elif valor == 9:
        mes = 'Setembro'
    elif valor == 10:
        mes = 'Outubro'
    elif valor == 11:
        mes = 'Novembro'
    elif valor == 12:
        mes = 'Dezembro'
    else:
        mes = 'Valor inválido!'
    return mes

print(gerarMeses(valor))