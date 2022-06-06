a = input().split()
print(a)
countpng = 0
countjpeg = 0
countbmp = 0
for i in a:
    if i.find(".png") != -1:
        countpng += 1
    elif i.find(".jpeg") != -1:
        countjpeg += 1
    elif i.find(".bmp") != -1:
        countbmp += 1
print(countpng,countbmp,countjpeg)
        
    
