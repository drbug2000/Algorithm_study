input_str = input()
temp_str =''
temp_str = input_str[1:3]

L=0
index = 0
chratia = {"c=":2,"c-":2,"dz":0,"dz=":3,"d-":2,"lj":2,"nj":2,"s=":2,"z=":2}
while index < len(input_str)-1:
    next=1
    temp=input_str[index:index+2]
    #print("index : ",index," : string :",temp)
    next=chratia.get(temp,1)
    if next ==0:
        if index<len(input_str)-2:
            temp=input_str[index:index+3]
            next=chratia.get(temp,1)
        if next ==0:
            next =1
    index += next
    L +=1
if index != len(input_str):
    L+= len(input_str)-index
print(L)