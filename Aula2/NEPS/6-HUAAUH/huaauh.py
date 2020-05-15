original = input()
copia = ""
for i in range(len(original)):
    if original[i] == 'a' or original[i] == 'e' or original[i] == 'i' or original[i] == 'o' or original[i] == 'u':
        copia += original[i]
if copia == copia[::-1]:
    print('S')
else:
    print('N')