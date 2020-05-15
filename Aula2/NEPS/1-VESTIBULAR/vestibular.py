n = int(input())
gab = input()
resp = input()
acertos = 0

for i in range(n):
    if gab[i] == resp[i]:
        acertos += 1

print(acertos)