n = int(input())
lin = input().split()
num = ""
for x in lin:
    num += x
a = 0
b = 0

for x in range(len(num)):
    dig = int(num[0])
    if dig == 1:
        if a == 0:
            a = 1
        else:
            a = 0
    elif dig == 2:
        if a == 0:
            a = 1
        else:
            a = 0
        if b == 0:
            b = 1
        else:
            b = 0
    num = num[1:]
print(a)
print(b)