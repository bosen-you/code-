n = int(input())
c = [map(int , input().split())]
e = int(input())
time = int(input())
catch = [map(int , input().split())]

for i in range(time):
    c.index(catch[i]) , e = e , c.index(catch[i])
    
print(''.join(map(str , c)))
