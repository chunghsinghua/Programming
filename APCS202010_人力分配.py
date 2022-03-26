a1,b1,c1=map(int,input().split())
a2,b2,c2=map(int,input().split())
n = int(input())
ans = -1e9
for x in range(n+1):
    y1 = a1*x*x+b1*x+c1
    x2 = n-x
    y2 = a2*x2*x2+b2*x2+c2
    ans = max(ans,y1+y2)    

print(ans)
