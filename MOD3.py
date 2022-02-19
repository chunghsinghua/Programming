n = int(input())
s = s1=s2 = 0
for _ in range(n):
    temp = int(input())
    if temp%3==0:
        s +=1
    elif temp%3==1:
        s1 +=1
    else:
        s2 +=1
print(s,s1,s2)
