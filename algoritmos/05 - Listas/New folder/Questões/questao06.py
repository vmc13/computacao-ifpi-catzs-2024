nomes = []
notas = []

for i in range(5):
    nome = input(f"Informe o nome do aluno {i+1}: ")
    nomes.append(nome)

# Recebe as notas dos alunos
for i in range(5):
    nota = float(input(f"Informe a nota do aluno {nomes[i]}: "))
    notas.append(nota)

alunos_notas = zip(nomes, notas)

print("\nRelação de alunos e notas:")
for nome, nota in alunos_notas:
    print(f"{nome}: {nota}")
