# Lista de números
lista = [12, -7, 45, 0, 23, -13, 8, 19, -21, 34, 5, -3, 17, -9, 50, -2, 14, -11, 29, 7]

# a) Números entre os índices 1 e 5, incluindo o 1 e 7
a = lista[1:6]
print(f"a: {a}")

# b) Números nos índices menores que 10
b = lista[:10]
print(f"b: {b}")

# c) Números nos índices maiores que 10
c = lista[11:]
print(f"c: {c}")

# d) Números nos índices pares
d = []
e = []
for i in lista:
    if i%2==0:
        d.append(i)
# e) Números nos índices ímpares
    elif i%2!=0:
        e.append(i)
        
print(f"d: {d}")
print(f"e: {e}")
