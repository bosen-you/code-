m , n = map(int , input().split())
maxs = []
ans =[]
for i in range(m):
    a = list(map(int , input().split()))
    maxs.append(max(a))
print(sum(maxs))
#print(maxs)
for i in maxs:
    if sum(maxs) % i == 0:
        ans.append(i)
print("-1" if ans == [] else " ".join(map(str , ans)))
