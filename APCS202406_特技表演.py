import sys

# sys.stdin = open(
# "C:\\Users\\chunghsinghua\\Documents\\Programming\\cpp\\P_4_13_3.in", "r")

n = int(input())
d = [int(x) for x in input().split()]
cnt = 1
mx = pre = 0
for t in d:
    if t >= pre:
        cnt = 1
    else:
        cnt += 1
        mx = max(mx, cnt)
    pre = t
print(mx)
