x = input()
y  = x.split()
ma = 0
for i in range(len(y)-1):
    ma = max(ma , abs(int(y[i]) - int(y[i+1])))

print(ma)
