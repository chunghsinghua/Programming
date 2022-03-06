import math
n = int(input())
for i in range(n):
    ans = 0
    a = int(input())
    b = int(input())
    s = math.ceil(a**0.5)
    while(a <= s**2 <= b):
        ans += s**2
        s += 1
    print(f"Case {i+1}: {ans}")
