.table
.code
fib:
mov $1, #0
sub $4, $1, 1
sleq $4, $4, 0
mov $5, $4
brz _label0, $5
return 1
jump _label3
_label0:
sub $6, $1, 2
sleq $6, $6, 0
mov $7, $6
brz _label1, $7
return 1
jump _label2
_label1:
sub $8, $1, 1
mov $9, $8
param $9
call fib, 1
pop $10
mov $2, $10
sub $11, $1, 2
mov $12, $11
param $12
call fib, 1
pop $13
mov $3, $13
add $14, $2, $3
return $14
_label2:
_label3:
return 0
main:
mov $15, 0
scani $15
slt $17, 0, $15
mov $20, $17
brz _label4, $20
mov $18, $15
param $18
call fib, 1
pop $19
mov $16, $19
println $16
_label4:
print ''
