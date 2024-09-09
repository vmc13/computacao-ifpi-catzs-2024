def data_por_extenso(dia, mes, ano):
    meses = ["janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"]
    
    if 1 <= mes <= 12:
        return f"{dia} de {meses[mes - 1]} de {ano}"
    else:
        return "Mês inválido"

dia = int(input("Informe o dia: "))
mes = int(input("Informe o mês: "))
ano = int(input("Informe o ano: "))

print(data_por_extenso(dia, mes, ano))
