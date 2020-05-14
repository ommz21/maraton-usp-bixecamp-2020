entrada = input().split()
h = int(entrada[0])
p = int(entrada[1])
f = int(entrada[2])
sentido = int(entrada[3])
if sentido == 1:
    if p > f:
        if h > f:
            if p > h:
                resp = 'S'
            else:
                resp = 'N'
        else:
            resp = 'N'
    else:
        if h > f:
            resp = 'S'
        else:
            if p > h:
                resp = 'S'
            else:
                resp = 'N'
else:
    if p > f:
        if h > f:
            if p > h:
                resp = 'N'
            else:
                resp = 'S'
        else:
            resp = 'S'
    else:
        if h > f:
            resp = 'N'
        else:
            if p > h:
                resp = 'N'
            else:
                resp = 'S'
print(resp)
