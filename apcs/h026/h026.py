f = int(input())
n = int(input())
y = list(map(int, input().split()))

ans = []
num = 0

for i in range(n):
    ans.append(f)
    # win
    if (f, y[i]) in [(0, 2), (2, 5), (5, 0)]:
        num = 1
        break

    # lose
    elif (f, y[i]) in [(0, 5), (2, 0), (5, 2)]:
        num = 2
        break

    # drew
    else:
        if i > 0 and y[i] == y[i-1]:
            if y[i] == 0:    f = 5
            elif y[i] == 2:  f = 0
            else:   f = 2
        else: f = y[i]

out = ' '.join(map(str, ans))

if num == 0:  print(f"{out} : Drew at round {n}")
elif num == 1: print(f"{out} : Won at round {len(ans)}")
else:   print(f"{out} : Lost at round {len(ans)}")
