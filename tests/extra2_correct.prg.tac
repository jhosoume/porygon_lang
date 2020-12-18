.table
.code
main:
mov $0, 10
mov $2, 
mov $3, 
_label0:
sleq $4, 1, $0
brz _label1, 
mul $5, $0, $0
mov $1, $5
println $2
println $1
println $3
sub $6, $0, 1
mov $0, $6
jump _label0
_label1:
return 0
