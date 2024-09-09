numero1 = int(input('Insira o 1º número: '))
numero2 = int(input('Insira o 2º número: '))

if numero1>numero2:
    for i in range(numero2, numero1+1):
        print(i)
elif numero2>numero1:
    for i in range(numero1, numero2+1):
        print(i)
else:
    print(numero1)