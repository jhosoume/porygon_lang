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
