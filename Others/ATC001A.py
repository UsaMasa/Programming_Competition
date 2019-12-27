#Reference : tableの読み込み：#9131946 & #9131824
#再帰関数を用いる手法：Submission #9131946
#キューをwhileで回す手法：Submission #9131824

#tableの読み込み
H,W = map(int,input().split())
table = []
for i in range(H):
    C = input()
    if "s" in C:
        sx = C.index("s")
        sy = i
    if "g" in C:
        gx = C.index("g")
        gy = i
    table.append(C)

#たどり着けるところを列挙する
from collections import deque
import sys
sys.setrecursionlimit(10**9)
D = deque()
D.append((sx,sy))
visited = [[0]*W for i in range(H)]
dX = [1,0,-1,0]
dY = [0,-1,0,1]

#再帰関数を使う場合はこちら

def dfs(x,y):
    if visited[y][x] == 1:
        return
    visited[y][x] = 1
    for i in range(4):
        nx = x + dX[i]
        ny = y + dY[i]
        if 0<=nx<W and 0<=ny<H and table[ny][nx]!="#":
            dfs(nx,ny)
dfs(sx,sy)
"""
#キューを使って関数で書かない場合はこちら

while D:
    x,y = D.popleft()
    for i in range(4):
        nx = x + dX[i]
        ny = y + dY[i]
        if 0<=nx<W and 0<=ny<H and visited[ny][nx]==0 and table[ny][nx]!="#":
            D.appendleft((nx,ny))
            visited[ny][nx]=1
       """     
if visited[gy][gx]==1:
    print("Yes")
else:
    print("No")