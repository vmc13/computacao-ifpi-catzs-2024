altura = float(input('Digite o valor da altura do triângulo: '))
base = float(input('Digite o valor da base do triângulo: '))

def calculaAreaTriangulo(altura, base):
    area = (base*altura)/2
    return area

print(calculaAreaTriangulo(altura, base))