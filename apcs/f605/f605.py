n , d =map(int , input().split())
s = []
flag = 0
for i in range(n):
    c = list(map(int , input().split()))
    if (max(c) - min(c)) >= d:
        a = sum(c) / len(c)
        s.append(a)
        flag +=1
print(flag , int(sum(s)))

