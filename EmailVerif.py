a,_ = map(str,input().split('@'))
b,c = map(str,_.split('.'))
print(a, b, c)
flaga = 1
flagb = 0
flagc = 1
for i in a:
    if i.isalnum():
        continue
    else:
        if i not in ['!','#','$','%','^','&','*','{','}','|','~','_','+','-','=','/']:
            flaga = 0
            break
if len(a) > 64:
    flaga = 0
for i in b:
    if i.isalpha():
        flagb = 1
        break
for i in b:
    if not i.isalpha():
        flagb = 0   
        break
if len(c) > 3:
    flagc = 0
for i in c:
    if not i.isalpha():
        flagc = 0
        break
print(("Invalid","Valid")[flaga and flagb and flagc == 1])