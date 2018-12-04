import numpy as np

s = """
8 8 4
4
u
"""

s = s.strip().split('\n')

cfh = s[0].split()
c, f, h = [int(x) for x in cfh]
init = int(s[1])
direction = s[2]

map = np.chararray((20,20))
map[:] = ' '

def print_map():
    for i in range(h+2):
        for j in range(max(c,f)+5):
            try:
                print(map[i,j].decode('utf-8'),end='')
            except AttributeError:
                print(' ',end='')
        print()


for i in range(c):
    map[0,i] = '-'
for j in range(f):
    map[h+1,j] = '-'

not_end=True
x_,y_ = (init,0)
map[x_,y_] = '*'
while(not_end):

    if direction == 'u':
        x_ -=1
        y_ +=1
        if map[x_, y_] == b'-':
            direction = 'd'
            x_ += 2

    elif direction == 'd':
        x_ +=1
        y_ +=1
        if map[x_, y_] == b'-':
            direction = 'u'
            x_ -= 2

    map[x_,y_] = '*'

    if not (0<=x_<20 and 0<=y_<20):
        not_end =False

print_map()