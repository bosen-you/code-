ans=[]
a1,b1,c1=map(int,input().split())
a2,b2,c2=map(int,input().split())
n=int(input())

for i in range(n+1):
    j=n-i
    ans.append(a1*i*i+b1*i+c1+a2*j*j+b2*j+c2) 
print(max(ans))

