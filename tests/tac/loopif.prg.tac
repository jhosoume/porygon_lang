.table
.code
main:
mov $0, 73
mov $1, 41
println 1
_label0:
print ''
slt $3, $0, $1
mov $4, $3
brz _label1, $4
println 99
jump _label2
_label1:
println 2
_label2:
slt $5, $1, $0
mov $6, $5
brz _label3, $6
println 3
jump _label4
_label3:
println 70
_label4:
mov $7, 5
_label5:
slt $8, 0, $7
mov $10, $8
brz _label6, $10
println $7
sub $9, $7, 1
mov $7, $9
jump _label5
_label6:
print ''
