n=int(input())
for _ in range(n):
    a=[int(x) for x in input().split()]
    b=[int(x) for x in input().split()]
    check =False
    if not (a[2-1]!=a[4-1] and b[2-1]!=b[4-1] and a[2-1]==a[6-1] and b[2-1]==b[6-1]):
        check=True
        print("A",end='')
    if not(a[-1]==1 and b[-1]==0):
        check=True
        print("B",end='')
    if not(a[2-1]!=b[2-1] and a[4-1]!=b[4-1] and a[6-1]!=b[6-1]):
        check=True
        print("C",end='')
    if not check:
        print("None")
    else:
        print()
