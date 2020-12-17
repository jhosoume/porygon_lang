.table
.code
StartMsg:
println 
main:
mov $7, 0
mov $10, 
mov $11, 
mov $12, 
mov $13, 
mov $14, 
mov $15, 
mov $16, 
call StartMsg:
println 
scani $0
div $17, $0, 100
mov $6, $17
mul $18, $6, 100
sub $19, $0, $18
mov $0, $19
div $20, $0, 50
mov $5, $20
mul $21, $5, 50
sub $22, $0, $21
mov $0, $22
div $23, $0, 25
mov $4, $23
mul $24, $4, 25
sub $25, $0, $24
mov $0, $25
div $26, $0, 10
mov $3, $26
mul $27, $3, 10
sub $28, $0, $27
mov $0, $28
div $29, $0, 5
mov $2, $29
mul $30, $2, 5
sub $31, $0, $30
mov $0, $31
div $32, $0, 1
mov $1, $32
mul $33, $1, 1
sub $34, $0, $33
mov $0, $34
println 
sub $35, $6, 0
brz _label0, 
println $10
println $11
println 
println $6
_label0:
sub $36, $5, 0
brz _label1, 
println $10
println $12
println 
println $5
_label1:
sub $37, $4, 0
brz _label2, 
println $10
println $13
println 
println $4
_label2:
sub $38, $3, 0
brz _label3, 
println $10
println $14
println 
println $3
_label3:
sub $39, $2, 0
brz _label4, 
println $10
println $15
println 
println $2
_label4:
sub $40, $1, 0
brz _label5, 
println $10
println $16
println 
println $1
_label5:
println 
return 0
