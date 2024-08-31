while True:
    try:
        n= []
        s=[]
        a= int(input())
        b= list(map(int, input().split()))
        b.sort()
        for i in range(a):
            if b[i]<60:
                n.append(b[i])
            else:
                s.append(b[i])
        print(' '.join(map(str,b)))
        if n!=[] :
            print(max(n))
        else:
            print("best case")

        if s!=[] :
            print(min(s))
        else :
            print("worst case")
    except EOFError:
        break

