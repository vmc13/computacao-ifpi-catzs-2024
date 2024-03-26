# Questão 07

print('''
    _____________________
   | Tabela de produtos  |
   |=====================|
   | 1  || Milkshake     |
   | 2  || Hambúrguer    |
   | 3  || Sorvete       |
   | 4  || Refrigerante  |
    ---------------------
      ''')

valor = int(input("Insira o produto que você deseja: "))

if valor == 1:
    print("Milkshake")
elif valor == 2:
    print("Hambúrguer")
elif valor == 3:
    print("Sorvete")
elif valor == 4:
    print("Refrigerante")
else:
    print("Código inválido")