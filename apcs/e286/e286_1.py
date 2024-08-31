h1 = sum(list(map(int , input().split())))
g1 = sum(list(map(int , input().split())))
h2 = sum(list(map(int , input().split())))
g2 = sum(list(map(int , input().split())))
if h1 > g1 and h2 > g2:
    print(f'{h1}:{g1}\n{h2}:{g2}\nWin')
elif h1 < g1 and h2 < g2:
    print(f'{h1}:{g1}\n{h2}:{g2}\nLose')
else:
    print(f'{h1}:{g1}\n{h2}:{g2}\nTie')
