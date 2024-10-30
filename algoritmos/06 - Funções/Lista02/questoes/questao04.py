inss = 0.1
ir = 0.15

def gerar_salario_final(salario):
    new_salario = salario - ((salario*ir) + (salario*inss))
    return new_salario

print(gerar_salario_final(1000))