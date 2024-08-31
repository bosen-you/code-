a=list(map(int,input().split()))
a.sort()
print(' '.join(map(str,a)))
if a[0]+a[1]<=a[2]:
    print('No')
elif a[0]*a[0] +a[1]*a[1] <a[2]*a[2] :
    print('Obtuse')
elif a[0] *a[0]  + a[1] *a[1]  == a[2] *a[2] :
    print('Right')
else:
    print('Acute')
