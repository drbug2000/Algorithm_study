instr = input()
size = len(instr)
print("size : ",size)
for a in range(int(size/2)):
    print("compare ",instr[a],"  vs  ",instr[size-a-1])
    if instr[a]==instr[size-a-1]:
        continue
    else:
        print(0)
        quit()
print(1)
quit()
