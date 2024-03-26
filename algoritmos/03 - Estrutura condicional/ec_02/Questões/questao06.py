# Questão 06

dia = int(input("Digite o dia: "))
mes = int(input("Digite o mês: "))
ano = int(input("Digite o ano: "))

dias = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30]
meses = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]

if dia in dias and mes in meses:
    print("Data válida")
else:
    print("Data inválida")
