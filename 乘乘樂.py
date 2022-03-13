t = int(input())
for _ in range(t):
    n  =str(input())
    v = 1
    for i in range(len(n)):
        v *= int(n[i])
    print(v)
