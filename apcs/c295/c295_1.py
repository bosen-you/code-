n , m = map(int , input().split())
s = []
out = []
for i in range(n):
    x = list(map(int ,input().split()))
    s.append(max(x))
print(sum(s))
for i in s:
    if sum(s) % i==0:
        out.append(i)
if out == []:
    print("-1")
else:
    print(" ".join(map(str , out)))
