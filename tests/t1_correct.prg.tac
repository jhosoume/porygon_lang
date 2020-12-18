.table
.code
sample_function:
mema $0, 5
mov $0, 'a'
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
mov $13, 83
param 1
call third_func, 1
pop $15
mov $14, $15
param 1.500000
param 6.000000
param 'a'
call another_function, 3
pop $16
mov $10, $16
mema $17, 16
mov $17, 'I'
mov $17, 'm'
mov $17, ' '
mov $17, 'a'
mov $17, ' '
mov $17, 's'
mov $17, 't'
mov $17, 'r'
mov $17, 'i'
mov $17, 'n'
mov $17, 'g'
mov $17, '!'
mov $18, 1
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
mov $20, $18
brz _label0, $20
inttofl $8, $8
sub $19, $10, $8
mov $11, $19
jump _label1
_label0:
inttofl $8, $8
add $21, $8, $10
mov $11, $21
_label1:
print ''
