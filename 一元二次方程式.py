a, b, c = map(int, input().split())
d = b**2-4*a*c
if d < 0:
    print("No real root")
elif d == 0:
    v = -b//(2*a)
    print(f"Two same roots x={v}")
else:
    v1 = int((-b+d**0.5)//(2*a))
    v2 = int((-b-d**0.5)//(2*a))
    if v1 < v2:
        v1, v2 = v2, v1
    print(f"Two different roots x1={v1} , x2={v2}")
