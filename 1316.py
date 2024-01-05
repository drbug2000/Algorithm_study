import math
A, B, V = map(int, input().split())
R1=(V-A)/(A-B)
print(math.ceil(R1)+1)
