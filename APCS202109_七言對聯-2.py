n = int(input())
for _ in range(n):
    a = [0]+[x for x in input().split()]
    b = [0]+[x for x in input().split()]
    ans = ''
    if not(a[2]!=a[4] and b[2]!=b[4] and a[2]==a[6] and b[2]==b[6]):
        ans +='A'
    if not(a[-1]=='1' and b[-1]=='0'):
        ans +='B'
    if not(a[2]!=b[2] and a[4]!=b[4] and a[6]!=b[6]):
        ans +='C'

    if len(ans):
        print(ans)
    else:
        print("None")
