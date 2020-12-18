.table
.code
mov $0, 42
sample_function:
mov $1, 
mov $2, 'a'
add $3, 165, $0
return $3
another_function:
mov $4, #0
mov $5, #1
mov $6, #2
rem $7, $4, $5
return $7
third_func:
mov $8, #0
mov $9, 0
return 1
main:
mov $10, #0
mov $11, 3
mov $12, 1
mov $13, 7.980000
mov $16, 83
param 1
call third_func, 1
pop $18
mov $17, $18
param 1.500000
param 6.000000
param a
call another_function, 3
pop $19
mov $13, $19
mov $20, 
mov $21, 1
println 
mov $23, $21
brz _label0, $23
inttofl $11, $11
sub $22, $13, $11
mov $14, $22
jump _label1
_label0:
inttofl $11, $11
add $24, $11, $13
mov $14, $24
_label1:
return 1
