n = input()
a = b = 0
for i, s in enumerate(n):
    if i & 1 == 0:
        a += int(s)
    else:
        b += int(s)
print(abs(a-b))
