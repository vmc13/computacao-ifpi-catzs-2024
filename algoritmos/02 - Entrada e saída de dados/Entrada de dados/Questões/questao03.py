# Crie um programa que peça para o usuário digitar seu nome, sua idade. Por fim, exiba o nome e a idade digitados de acordo com a saída apresentada abaixo:
# Nome: <<nome>>
# Idade: <<idade>>
# Obs: A idade deve ser armazenada como int.

nome = input("Digite seu nome: ")
idade = int(input("Digite sua idade: "))

print(f'Nome: {nome} \nIdade: {idade}')