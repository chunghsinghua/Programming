n= int(input())
n -=1
if n < 2500:
    print(f"1 {n//25+1} {n%25+1}")
elif n < 7500:
    n-=2500
    print(f"2 {n//50+1} {n%50+1}")
else:
    n-=7500
    print(f"3 {n//25+1} {n%25+1}")
    
