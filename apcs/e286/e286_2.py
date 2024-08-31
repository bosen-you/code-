a1,b1,a2,b2=[sum(map(int,input().split()))    for i in range(4)]
print(f'{a1}:{b1}\n{a2}:{b2}')
if a1>b1 and a2>b2:
    print('Win')
elif a1<b1 and a2<b2:
    print("Lose")
else:
    print("Tie")

