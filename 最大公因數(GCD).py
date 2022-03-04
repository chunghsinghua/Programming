a, b = map(int, input().split())
if b > a:
    a, b = b, a
while b != 0:
    t = a % b
    a = b
    b = t
print(a)
