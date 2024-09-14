n = int(input())
ch = list(map(int , input().split()))
eagle = int(input())
time = int(input())
change = list(map(int , input().split()))

for i in range(time):
    n = ch.index(change[i])
    ch[n] , eagle = eagle , ch[n]

print(' '.join(map(str , ch)))
