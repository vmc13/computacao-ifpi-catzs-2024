def calcular_contracheque():
    nome = input("Digite o nome do funcionário: ")
    salario = float(input("Digite o salário do funcionário: "))

    imposto_renda = salario * 0.15
    inss = salario * 0.10

    salario_final = salario - imposto_renda - inss

    print(f'''
          DIVINOS SOFTWARE CARIDADES
          FUNCIONÁRIO: {nome}
          DEMONSTRATIVO:
          Salário: R$ {salario:.2f}
          Imposto: R$ {imposto_renda:.2f}
          INSS: R$ {inss:.2f}
          Total a Receber: R$ {salario_final:.2f}''')


calcular_contracheque()
