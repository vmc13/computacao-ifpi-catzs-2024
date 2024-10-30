inss = 0.1
ir = 0

def salario_inss(salario):
    new_salario = salario - (salario*inss)
    return new_salario

def calcula_ir(salario):
    salario = salario_inss(salario)
    ir = salario * 0.1
    return ir

def salario_final(salario):
    new_salario = (salario_inss(salario) - calcula_ir(salario))
    return new_salario

salario_final = salario_final(1000)
print(f'Salário final: R${salario_final}')
