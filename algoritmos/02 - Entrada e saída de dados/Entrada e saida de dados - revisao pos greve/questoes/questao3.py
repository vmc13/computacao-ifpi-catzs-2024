salario = float(input('Digite o valor do salátrio: '))

def caulculaImposto(salario):
    valorImposto = salario*0.1
    return valorImposto

def novoSalario(salario, imposto):
    valorNovoSalario = salario-imposto
    return valorNovoSalario

imposto = caulculaImposto(salario)
novoSalario = novoSalario(salario, imposto)

print(f'Salário: {salario:.2f}')
print(f'Imposto: {imposto:.2f}')
print(f'Salário final: {novoSalario:.2f}')