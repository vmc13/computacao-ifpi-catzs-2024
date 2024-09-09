dia = int(input('Digite o dia: '))
mes = int(input('Digite o mês: '))
ano = int(input('Digite o ano: '))

def exibeData(dia, mes, ano):
    data = f'{dia}/{mes}/{ano}'
    return data


print(exibeData(dia, mes, ano))