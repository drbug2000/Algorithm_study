alpha = [0]*26
string = input()
string=string.upper()
#print(string)
for a in string:
    a=ord(a)-65
    #print(a)
    if(a<0 or a>25):
        print("not alphabet")
        quit()
    alpha[a]+=1
biggest = ["?",0]
for a in range(26):
    num = alpha[a]
    tar = chr(a+65)
    if   num > biggest[1]:
        biggest[0] = tar
        biggest[1]=num
    elif num == biggest[1]:
        biggest[0]="?"
print(biggest[0])
