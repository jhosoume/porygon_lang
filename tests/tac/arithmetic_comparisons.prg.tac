.table
.code
main:
mov $0, 8
println $0
slt $2, 9, $0
mov $1, $2
println $1
and $4, $1, 1
or $5, $4, 0
mov $3, $5
println $3
mov $6, 1
println $6
mov $6, 0
println $6
println $0
sub $7, 8, $0
sleq $7, $7, 0
mov $6, $7
println $6
sub $8, 8, $0
sub $9, 3, $0
or $10, $8, $9
mov $6, $10
println $6
