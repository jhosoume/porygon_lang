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
mov $9[0], 65
mov $9[1], 32
mov $9[2], 118
mov $9[3], 97
mov $9[4], 108
mov $9[5], 105
mov $9[6], 100
mov $9[7], 32
mov $9[8], 115
mov $9[9], 116
mov $9[10], 114
mov $9[11], 105
mov $9[12], 110
mov $9[13], 103
mov $9[14], 32
mov $9[15], 99
mov $9[16], 97
mov $9[17], 110
mov $9[18], 32
mov $9[19], 104
mov $9[20], 97
mov $9[21], 118
mov $9[22], 101
mov $9[23], 32
mov $9[24], 109
mov $9[25], 117
mov $9[26], 108
mov $9[27], 116
mov $9[28], 105
mov $9[29], 112
mov $9[30], 108
mov $9[31], 101
mov $9[32], 32
mov $9[33], 99
mov $9[34], 104
mov $9[35], 97
mov $9[36], 114
mov $9[37], 115
