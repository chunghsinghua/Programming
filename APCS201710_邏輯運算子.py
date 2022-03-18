a, b, c = map(int, input().split())
a = (a != 0)
b = (b != 0)
c = (c != 0)
flag = False
if (a and b) == c:
    print("AND")
    flag = True
if (a or b) == c:
    print("OR")
    flag = True
if (a != b) == c:
    print("XOR")
    flag = True
if not flag:
    print("IMPOSSIBLE")
