a,b = input().split()
suma = 0
sumb = 0
for i in a:
    suma += ord(i)
for i in b:
    sumb += ord(i)
print(("False","True") [suma==sumb])
