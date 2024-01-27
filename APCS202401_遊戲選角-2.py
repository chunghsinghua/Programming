n=int(input())
x1,y1 = -1,-1
x2,y2 = -1,-1
for _ in range(n):
    a, b = map(int,input().split())
    if a**2+b**2 > x1**2+y1**2:
        x2,y2=x1,y1
        x1,y1=a,b
    elif a**2+b**2 > x2**2+y2**2:
        x2,y2=a,b
print(x2,y2)
