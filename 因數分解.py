n = int(input())
ans = ""
for i in range(2, n+1):
    p = 0
    while (n % i == 0):
        p += 1
        n //= i
    if p > 1:
        if n > 1:
            ans += f"{i}^{p} * "
        else:
            ans += f"{i}^{p}"
    if p == 1:
        if n > 1:
            ans += f"{i} * "
        else:
            ans += f"{i}"
    if n == 1:
        break
print(ans)
