f=open("..\Project Euler\Problem 22\p022_names.txt","r")
isimler=f.read()

sonu_sil=isimler.split("\",")
yazi=""
for i in sonu_sil:
    yazi+=i

names=[]
isim=yazi.split("\"")
for i in isim:
    names.append(i)

names.sort()
names.__delitem__(0)
names.__delitem__(0)
#büyük harfler 65 ile 90 arası
#ord(i[j])-64
deger=0
toplam=0
i=1
for isim in names:
    for harf in isim:
        deger+=(ord(harf)-64)
    toplam+=deger*i
    i+=1
    deger=0

print(toplam)




f.close()