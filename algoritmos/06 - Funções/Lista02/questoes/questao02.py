taxa_basica = 0.1

def calcula_imposto(salario):
    new_salario = salario * taxa_basica
    return new_salario

print(f"Você deve pagar R${calcula_imposto(1000):.0f} de imposto.")

