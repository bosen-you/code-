while True:
    try:
        s = input()  # 讀入系統給的測資(字串)
        n = s.split(" ")  # 把測資(字串)依" "切開，存入名稱為n的List，注意此時 n 的成員都是字串

        # 手動將 n 的成員一一由字串轉整數，再放回 n （此寫法非最佳解寫法） *****
        n[0] = int( n[0] )
        n[1] = int( n[1] )
        n[2] = int( n[2] )

        # n 排序，此時才是真正的數字排序（字串排序規則與數字排序不同） *****
        n.sort()
        

        a = n[0]
        b = n[1]
        c = n[2]  # 依題意 c 為最大邊
        print(a,b,c)

        # if分支判斷三角形 *****
        if a+b<=c:
            print("No")
        elif a*a + b*b < c*c:
            print("Obtuse")
        elif a*a + b*b == c*c:
            print("Right")
        else:
            print("Acute")



    except EOFError:
        break
