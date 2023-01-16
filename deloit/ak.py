a,b = input().split()
a = int(a)
b = int(b)
def check_condition(n):
    ds = sum([int(digit) for digit in str(n)])
    ld = max([int(digit) for digit in str(n)])
    return (ds - ld) == ld

s = 0
for i in range(a , b+1):
    if(check_condition(i)):
        s += i
print(s)
