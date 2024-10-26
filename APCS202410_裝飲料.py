import sys
# sys.stdin = open("C:\\Users\\ChungHsingHua\\Documents\\c-program\\kevin\\q_1_8_5.in")

n=int(input())
w1,w2,h1,h2=map(int,input().split())
v1 = w1**2*h1
totv = v1+w2**2*h2
tot = 0
mx = 0
pre = 0
water = [int(x) for x in input().split()]
for t in water:
    tot += t
    if tot <= v1:
        cur = tot // (w1**2)
    elif v1 < tot <= totv:
        cur = h1 + (tot-v1) // (w2**2)
    else:
        cur = h1+h2
    
    mx = max(mx, cur - pre)
    pre = cur

print(mx)
