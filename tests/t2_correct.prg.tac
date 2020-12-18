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
brz _label1, $4
mov $2, $1[$3]
println $2
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
mema $6, 4
mov $6, $5[3]
mov $6, $5[3]
sub $9, , 
mema $8, $9
mov $10, 0
mov $10, 
_label2:
slt $9, $10, 0
brz _label3, $9
mov $8[$10], $5[$11]
add $10, $10, 
add $11, $11, 
jump _label2
_label3:
print ''
mema , 3
mema , 3
mema , 3
mema $15, 42
mov $15[0], 'A'
mov $15[1], ' '
mov $15[2], 'v'
mov $15[3], 'a'
mov $15[4], 'l'
mov $15[5], 'i'
mov $15[6], 'd'
mov $15[7], ' '
mov $15[8], 's'
mov $15[9], 't'
mov $15[10], 'r'
mov $15[11], 'i'
mov $15[12], 'n'
mov $15[13], 'g'
mov $15[14], ' '
mov $15[15], 'c'
mov $15[16], 'a'
mov $15[17], 'n'
mov $15[18], ' '
mov $15[19], 'h'
mov $15[20], 'a'
mov $15[21], 'v'
mov $15[22], 'e'
mov $15[23], ' '
mov $15[24], 'm'
mov $15[25], 'u'
mov $15[26], 'l'
mov $15[27], 't'
mov $15[28], 'i'
mov $15[29], 'p'
mov $15[30], 'l'
mov $15[31], 'e'
mov $15[32], ' '
mov $15[33], 'c'
mov $15[34], 'h'
mov $15[35], 'a'
mov $15[36], 'r'
mov $15[37], 's'
