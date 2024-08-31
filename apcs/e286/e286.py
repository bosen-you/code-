# 讀入測資字串，切割後，轉整數，再轉為list
home1    = sum( list( map(int, input().split() ) ) ) # 主隊第1場得分 
guest1   = sum( list( map(int, input().split() ) ) ) # 客隊第1場得分
home2    = sum( list( map(int, input().split() ) ) )  # 主隊第2場得分
guest2   = sum( list( map(int, input().split() ) ) )  # 客隊第2場得分
home_win = 0  # 主隊贏幾場
ans = ["Lose" , "Tie" , "Win"]
print( f"{home1}:{guest1}" )  # 輸出第1場兩隊比分
print( f"{home2}:{guest2}" )  # 輸出第2場兩隊比分

if home1 > guest1 :  # 如果主隊贏第一場
    home_win+=1   # 主隊贏場數+1

if home2 >guest2 :  # 如果主隊贏第二場
    home_win+=1   # 主隊贏場數+1
print(ans[home_win])

