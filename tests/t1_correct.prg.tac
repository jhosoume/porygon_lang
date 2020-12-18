.table
.code
sample_function:
mema $0, 5
mov $0[0], 97
mov $1, 'a'
return 165
another_function:
mov $2, #0
mov $3, #1
mov $4, #2
mod $5, $2, $3
return $5
third_func:
mov $6, #0
mov $7, 0
return 1
main:
mov $8, 3
mov $9, 1
mov $10, 7.980000
mema $13, 4
mov $13[0], 1
mov $13[1], 2
mov $13[2], 3
mov $13[3], 4
mov $14, 83
param 1
call third_func, 1
pop $16
mov $15, $16
param 1.500000
param 6.000000
param 'a'
call another_function, 3
pop $17
mov $10, $17
mema $18, 16
mov $18[0], 73
mov $18[1], 109
mov $18[2], 32
mov $18[3], 97
mov $18[4], 32
mov $18[5], 115
mov $18[6], 116
mov $18[7], 114
mov $18[8], 105
mov $18[9], 110
mov $18[10], 103
mov $18[11], 33
mov $19, 1
print 'R'
print 'u'
print 'n'
print 'n'
print 'i'
print 'n'
print 'g'
print ' '
print 'i'
print 'm'
print 'p'
print 'l'
print 'i'
print 'c'
print 'i'
print 't'
print ' '
print 'c'
print 'o'
print 'n'
print 'v'
print 'e'
print 'r'
print 's'
print 'i'
print 'o'
print 'n'
print '.'
println
mov $21, $19
brz _label0, $21
inttofl $8, $8
sub $20, $10, $8
mov $11, $20
jump _label1
_label0:
inttofl $8, $8
add $22, $8, $10
mov $11, $22
_label1:
print ''
