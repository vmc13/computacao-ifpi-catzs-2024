# Questão 08

resposta = ""
vertebrado = input("Ele é vertebrado? ")

if vertebrado.lower() == "sim":
    ave = input("Ele é ave? ")

    if ave.lower() == "sim":
        onivoro = input("Ele é ovívoro?")

        if onivoro.lower() == "sim":
            resposta = "pomba"
        else:
            resposta = "águia"

    else:
        onivoro = input("Ele é ovívoro?")

        if onivoro.lower() == "sim":
            resposta = "homem"
        else:
            resposta = "vaca"

else:
    inseto = input("Ele é inseto? ")

    if inseto == "sim":
        hematofago = input("Ele é hematófago?")

        if hematofago.lower() == "sim":
            resposta = "pulga"
        else:
            resposta = "lagarta"
    else:
        hematofago = input("Ele é hematófago?")

        if hematofago.lower() == "sim":
            resposta = "sanguessuga"
        else:
            resposta = "minhoca"

print(f"Resposta = {resposta}")