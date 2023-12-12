prod1 = input().split(" ")[1:] 
to = float(prod1[0]) * float(prod1[1])

prod2 = input().split(" ")[1:]
to2 = float(prod2[0]) * float(prod2[1])
sum = to+to2
print(f'VALOR A PAGAR: R$ {sum:.2f}')

