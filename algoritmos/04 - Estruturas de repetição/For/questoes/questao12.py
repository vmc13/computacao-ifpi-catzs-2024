numero = int(input('Insira um número inteiro: '))
soma = 0

for i in range(1, numero+1):
    print(i)
    soma+=i

print(f"Soma = {soma}")