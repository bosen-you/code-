n = int(input())
num = list(map(int , input().split()))
co = 0
for i in range(n):
    if num[i] != -1:
        friend = -1
        start = i
        while friend != i:
            friend = num[start]
            num[start] = -1
            start = friend
        co+=1
print(co)
