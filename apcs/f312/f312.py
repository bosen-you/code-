from math import inf
a1,b1,c1=map(int,input().split())
a2,b2,c2=map(int,input().split())
n=int(input())
ans=-inf
for i in range(n +1):
    j=n-i
    y1 = a1 * i * i + b1 * i + c1
    y2 = a2 * j * j + b2 * j + c2
    ans=max(ans,y1+y2)
print(ans)
