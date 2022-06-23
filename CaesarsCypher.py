a = input()
codeordec = int(input())
key = 14
if codeordec == 1:
    key  = -key
for i in a:
    if i.isalpha():
        if i.islower():
            orn = 97 + (ord(i)-97+key)%26
            print(chr(orn),end = "")
        if i.isupper():
            orn = 65 + (ord(i)-65+key)%26
            print(chr(orn),end = "")
    else:
        print(i,end = "")

        
