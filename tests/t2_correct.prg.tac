.table
.code
main:
mov $0, 0
mov $0, 2
mema $1, 4
mov $1[0], 1
mov $1[1], 2
mov $1[2], 3
mov $1[3], 4
mov $3, 0
_label0:
slt $4, $3, 4
brz _label1, $3
mov , $1[$3]
add $3, $3, 1
jump _label0
_label1:
print ''
mema $5, 9
mov $5[0], 0
mov $5[1], 0
mov $5[2], 0
mov $5[3], 1
mov $5[4], 0
mov $5[5], 1
mov $5[6], 0
mov $5[7], 0
mov $5[8], 0
mema $9, 42
mov $9[0], 'A'
mov $9[1], ' '
mov $9[2], 'v'
mov $9[3], 'a'
mov $9[4], 'l'
mov $9[5], 'i'
mov $9[6], 'd'
mov $9[7], ' '
mov $9[8], 's'
mov $9[9], 't'
mov $9[10], 'r'
mov $9[11], 'i'
mov $9[12], 'n'
mov $9[13], 'g'
mov $9[14], ' '
mov $9[15], 'c'
mov $9[16], 'a'
mov $9[17], 'n'
mov $9[18], ' '
mov $9[19], 'h'
mov $9[20], 'a'
mov $9[21], 'v'
mov $9[22], 'e'
mov $9[23], ' '
mov $9[24], 'm'
mov $9[25], 'u'
mov $9[26], 'l'
mov $9[27], 't'
mov $9[28], 'i'
mov $9[29], 'p'
mov $9[30], 'l'
mov $9[31], 'e'
mov $9[32], ' '
mov $9[33], 'c'
mov $9[34], 'h'
mov $9[35], 'a'
mov $9[36], 'r'
mov $9[37], 's'
