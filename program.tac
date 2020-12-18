.table
.code
sample_function:
mema $0, 5
mov $0[0], 'a'
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
mov $18[0], 'I'
mov $18[1], 'm'
mov $18[2], ' '
mov $18[3], 'a'
mov $18[4], ' '
mov $18[5], 's'
mov $18[6], 't'
mov $18[7], 'r'
mov $18[8], 'i'
mov $18[9], 'n'
mov $18[10], 'g'
mov $18[11], '!'
mema , 3
mema , 3
mema , 3
mov $22, 1
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
mov $24, $22
brz _label0, $24
inttofl $8, $8
sub $23, $10, $8
mov $11, $23
jump _label1
_label0:
inttofl $8, $8
add $25, $8, $10
mov $11, $25
_label1:
print ''
