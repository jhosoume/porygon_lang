.table
.code
sum:
mov $0, #0
mov $1, #1
mov $2, 9
add $3, $0, $1
return $3
test:
mov $4, #0
mov $5, #1
mov $6, 10.000000
inttofl $5, $5
sub $7, $6, $5
return $7
main:
param 1
param 3
call sum, 2
pop $9
mov $8, $9
println $8
param 0.100000
param 2
call test, 2
pop $11
mov $10, $11
println $10
return 1
