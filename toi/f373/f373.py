n = int(input())
flag = n // 2000
temp = n // 1000
if (n < 1000):
    print(f'{n} 0')
elif (n - flag*200 < n - temp*100):
    print(f'{n-flag*200} 0')
elif (n - flag*200 > n - temp*100):
    print(f'{n - temp*100} 1')
else:
    print(f'{n-temp*100} 0')
