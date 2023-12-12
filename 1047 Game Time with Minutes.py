a,b,c,d = list(map(int,input().split(" ")))
start = a*60 + b
end = c*60 + d
if start< end :
    dif = end - start
    hr = dif//60
    min = dif%60
    print(f'O JOGO DUROU {hr} HORA(S) E {min} MINUTO(S)')
else:
    dif = (24*60 - start) + end
    hr = dif//60
    min = dif%60
    print(f'O JOGO DUROU {hr} HORA(S) E {min} MINUTO(S)')    