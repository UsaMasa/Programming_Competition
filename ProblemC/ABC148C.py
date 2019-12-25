#from fractions import gcd
#A,B = map(int, input().split())
#print(A*B//gcd(A,B))
def gcd(a,b):
    if(a<b):
         b,a=a,b
    if(b==0):
        return a
    r = a%b
    if(r!=0) :
        a,b,r=b,r,b%r
        return gcd(b,r)
    else:
        return b

A,B = map(int, input().split())
print(A*B//gcd(A,B))