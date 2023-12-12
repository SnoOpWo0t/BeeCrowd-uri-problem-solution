a,b = list(map(int,input().split(" ")))
if a==1:
    x = 4.00
elif a==2:
    x = 4.50
elif a==3:
    x = 5.00
elif a==4:
    x = 2.00
elif a==5:
    x = 1.50
# if b==1:
#     y = 4.00
# elif b==2:
#     y = 4.50
# elif b==3:
#     y = 5.00
# elif b==4:
#     y = 2.00
# elif b==5:
#     y = 1.50
print(f'Total: R$ {x*b:.2f}')