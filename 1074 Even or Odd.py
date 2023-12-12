n =int(input())
i = 0
while i<n :
    x = int(input())
    if x==0:
        print('NULL')
    elif x%2==0 and x>0:
        print('EVEN POSITIVE')
    elif x%2==0 and x<0:
        print('EVEN NEGATIVE')
    elif x%2!=0 and x>0:
        print('ODD POSITIVE')
    elif x%2!=0 and x<0:
        print('ODD NEGATIVE')
    i+=1
    