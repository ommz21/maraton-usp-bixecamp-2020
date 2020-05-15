teste = int(input())
for i in range(teste):
    string = input()
    if string[-2:] == "po":
        print("FILIPINO")
    elif string[-4:] == "desu" or string[-4:] == "masu":
        print("JAPANESE")
    else:
        print("KOREAN")