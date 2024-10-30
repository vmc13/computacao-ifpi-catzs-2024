def calcular_area_piscina():
    num_azulejos = int(input("Digite o número de tipos de azulejos: "))

    area_total = 0

    for i in range(1, num_azulejos + 1):
        total_azulejos = int(input(f"Total do {i}º azulejo: "))
        altura_azulejo = float(input(f"Altura do {i}º azulejo: "))
        largura_azulejo = float(input(f"Largura do {i}º azulejo: "))
        
        area_azulejo = altura_azulejo * largura_azulejo
        
        area_total += total_azulejos * area_azulejo

    print(f"A área total da piscina é: {area_total:.2f} metros quadrados")

calcular_area_piscina()
