a = int( input() )  # 學生人數
b = [ int(i) for i in input().split() ]  # 學生成績字串讀入，轉整數後存入List
b.sort()     # 排序

print( " ".join(map(str,b)) )  # 輸出score排序後的成績（用List Comprehension將score裡每個元素轉回字串，然後用join()把List裡所有元素用"空白"接起來）

if b[0] >= 60 :  # 填入正確的索引值（表List中最小）
    print("best case")
else :
    print( max([int(i) for i in b if i<60]) )  # 最高不及格分數（用 List Comprehension 取出score裡面所有不及格分數，然後用max()求其最大值）

if b[-1] < 60 :  # 填入正確的索引值（表List中最大）
    print("worst case")
else :
    print( min( [int(i) for i in b if i>=60]  ) )  # 最低及格分數（用List Comprehension取出score裡面所有及格分數，然後用min()求其最小值）
