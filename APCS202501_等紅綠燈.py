# import sys
# from pathlib import Path
# sys.stdin = open("C:\\Users\\ChungHsingHua\\Documents\\c-program\\kevin\\q_1_8_5.in")

a,b = [int(x) for x in input().split()]
n = int(input())
lst = [int(x) for x in input().split()]
period = a+b
tot = 0
for t in lst:
    t %= period
    if t>=a :
        tot += period-t
print(tot)
