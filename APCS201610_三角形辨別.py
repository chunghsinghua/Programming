d= [int(x) for x in input().split()]
d.sort()
print(*d)
a = d[0];b=d[1];c=d[2]
if a+b<=c:
    print("No")
else:
    if a*a+b*b < c*c:
        print("Obtuse")
    elif a*a+b*b == c*c:
        print("Right")
    else:
        print("Acute")
