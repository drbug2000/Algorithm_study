#import numpy as np 

chess_default = [1,1,2,2,2,8]

left = list(map(int,input().split()))
if(len(left)!=len(chess_default)):
    print("invalue string ")
    #quit()
output =[]

for a in range(len(chess_default)):
    left[a] = chess_default[a]- left[a]
print(' '.join((map(str,left))))
