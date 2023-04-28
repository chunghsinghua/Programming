import bisect

n = int(input())
a = [int(x) for x in input().split()]
a.sort()
print(*a)
idx = bisect.bisect_left(a, 60)
if idx == 0:
    print("best case")
else:
    print(a[idx-1])

if idx != len(a):
    print(a[idx])
else:
    print("worst case")
