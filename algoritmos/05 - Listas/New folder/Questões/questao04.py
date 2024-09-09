def analisar_idades(idades):
    maiores_idade = 0
    menores_idade = 0
    existe_quinze = False
    
    for idade in idades:
        if idade >= 18:
            maiores_idade += 1
        else:
            menores_idade += 1
        
        if idade == 15:
            existe_quinze = True
    
    return maiores_idade, menores_idade, existe_quinze

idades = []
for i in range(10):
    idade = int(input(f"Informe a idade do aluno {i+1}: "))
    idades.append(idade)

maiores_idade, menores_idade, existe_quinze = analisar_idades(idades)

print(f"\nQuantidade de alunos maiores de idade (18 anos ou mais): {maiores_idade}")
print(f"Quantidade de alunos menores de idade (menos de 18 anos): {menores_idade}")

if existe_quinze:
    print("Existe pelo menos um aluno com 15 anos de idade.")
else:
    print("Não existe nenhum aluno com 15 anos de idade.")
