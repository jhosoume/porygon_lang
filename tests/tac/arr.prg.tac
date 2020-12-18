.table
.code
main:
mema $0, 4
mov $0[0], 1
mov $0[1], 2
mov $0[2], 3
mov $0[3], 4
mema $1, 4
mov $1[0], 15.100000
mov $1[1], 2.400000
mov $1[2], 42.488998
mov $1[3], 0.440000
mov $3, 0
_label0:
slt $4, $3, 4
brz _label1, $4
mov $2, $0[$3]
println $2
add $3, $3, 1
jump _label0
_label1:
print ''
mov $5, 4
mov $6, $0[0]
println $6
sub $7, $5, 3
mov $8, $0[$7]
println $8
mov $10, 0
_label2:
slt $11, $10, 4
brz _label3, $11
mov $9, $1[$10]
println $9
add $10, $10, 1
jump _label2
_label3:
print ''
