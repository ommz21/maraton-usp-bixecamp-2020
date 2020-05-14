a = list(map(int, input().strip().split(' ')))
p = a[0]
r = a[1]

if p:
    if r:
        print('A')
    else:
        print('B')
else:
    print('C')