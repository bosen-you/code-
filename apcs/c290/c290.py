while True:
    try:
        a=input()
        b=[]
        c=[]
        for i in range(len(a)):
            if i %2==0:
                b.append(a[i])
            else:
                c.append(a[i])
        for i in range (len(b)):
            b[i]=int(b[i])
        for i in range (len(c)):
            c[i]=int(c[i])
        print(abs(sum(c)-sum(b)))
    except EOFError:
        break

