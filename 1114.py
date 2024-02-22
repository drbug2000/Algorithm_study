# 첫째 줄: 3개의 정수 입력 받기
input_line_1 = input()
numbers = list(map(int, input_line_1.split()))

# 둘째 줄: 두 번째 수만큼의 정수 입력 받기
second_number = numbers[1]
input_line_2 = input()
second_numbers_list = list(map(int, input_line_2.split()))

# 결과 출력
#print("첫째 줄에서 입력받은 3개의 정수:", numbers)
#print("둘째 줄에서 입력받은 정수들:", second_numbers_list)

array=list(set(second_numbers_list))
array=sorted(array)


#print("결과:",array)

def check(size, time, array, big,sett=-1):
    Time=time+1
    buffer=0
    left_size=size
    i=0
    if(sett>=0):
        if array[sett]>big:
            #print("too big")
            return -1
        left_size-=array[sett]
        i=sett+1
        Time-=1
        #print("sett active")
    Arr=array
    last=len(Arr)-1
    while Time>0 and last>=i:
        #print("i:",i)
        if i==0:
            buffer +=Arr[i]
        else:
            
            buffer += Arr[i]-Arr[i-1]

        if(buffer>big):
            if(buffer==0):
                return Arr[i]-Arr[i-1]
            else:
                buffer=0
                #i += 1
                Time -= 1
                continue
        else:
            i+=1
            continue
    if(last>=i):
        return -1
    else:
        return 0


size=numbers[0]
time=numbers[2]
L=len(array)
if array[L-1]<size:
    array.append(size)

if L<time:
    time=L

start=size//(time+1)-1
end =size
#print("setting array:",array)
#print("set start:",start,"  set end",end)
while end>start:
    
    target_big=int((end+start)/2)
    #print("start target:",target_big," ( ",start,"~",end,")")
    C=check(size,time,array,target_big)
    if(C==0):
        end=target_big
    elif(C<0):
        start= target_big+1 
    else:
        start=C+1

#print("result start:",start," end",end)
BIG = start

flag=True
i=0
start=0
end=L
while end>start:
    
    i=int( (end+start) / 2 )
    #print("try:",i)
    if array[i]>BIG:
        #print("too big")
        end=i
        continue
    e=check(size,time,array,BIG,i)
    #print("result:",e)
    if( e ==0):
       end=i
       continue
    else:
        start=i+1
#print("i:",i)
print(BIG,array[start])
       
   
##최선인가
##size 활용
##마지막도 이진탐색?
