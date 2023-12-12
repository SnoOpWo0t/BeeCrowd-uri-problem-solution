import math
a,b,c = list(map(float,input().split(" ")))

p =3.14159
tri = (.5 * a * c)
cir = (p * (c**2))
trap = (.5 * (a + b) * c)
quad = (b**2)
rect = (a * b)
print(f'TRIANGULO: {tri:.3f}')
print(f'CIRCULO: {cir:.3f}')
print(f'TRAPEZIO: {trap:.3f}')
print(f'QUADRADO: {quad:.3f}')
print(f'RETANGULO: {rect:.3f}')
