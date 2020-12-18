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
mov $2, $1[3]
println $2
