#Crie um programa que peça para o usuário digitar uma data, primeiro o dia, depois o mês e, por último, o ano. Ao final, o programa deve exibir a data no formato dd/mm/aaaa.

dia = int(input("Informe o dia: "))
mes = int(input("Informe o mês: "))
ano = int(input("Informe o ano: "))

print(f"{dia}/{mes}/{ano}")