.table
.code
mov $0, 42
sample_function:
mov $1, 
mov $2, 'a'
add $3, 165, $0
return $3
another_function:
rem $4, , 
return $4
third_func:
mov $5, 0
return 1
main:
mov $6, 3
mov $7, 1
mov $8, 7.980000
mov $11, 83
call third_func
pop 
mov $12, 0
mov $8, 0.000000
mov $13, 
mov $14, 1
println 
brz _label0, 
inttofl $6, $6
sub $15, $8, $6
mov $9, $15
jump _label1
_label0:
inttofl $6, $6
add $16, $6, $8
mov $9, $16
_label1:
return 1
