# O cronômetro de João marca apenas os minutos. Entretanto, ele queria que saber o seu tempo em horas e minutos. Por exemplo, quando ele faz uma viagem, o cronometro mostrou, 110 min, quando João queria o resultado como 1h e 50m. Sabendo disso, concerte o cronometro de João fazendo um programa que recebe o tempo em minutos e decompõem esse tempo em horas e minutos, conforme o quadro abaixo.

tempo = int(input("Informe os minutos: "))

horas = tempo // 60
minutos = tempo % 60
segundos = minutos % 60

print(f"{horas}h, {minutos}m e {segundos}s.")