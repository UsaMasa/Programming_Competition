N = int(input())
S,T = input().split()
res = ""
for i in range(N):
    res += S[i]+T[i]
print(res)