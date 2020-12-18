.table
.code
StartMsg:
print 'P'
print 'r'
print 'o'
print 'g'
print 'r'
print 'a'
print 'm'
print ':'
print ' '
print 'B'
print 'I'
print 'L'
print 'L'
print '''
print 's'
print ' '
print 'C'
print 'O'
print 'U'
print 'N'
print 'T'
print '\'
print 'n'
println
return
main:
mov $7, 0
mema $10, 15
mov $10[0], 92
mov $10[1], 110
mov $10[2], 66
mov $10[3], 105
mov $10[4], 108
mov $10[5], 108
mov $10[6], 115
mov $10[7], 32
mov $10[8], 111
mov $10[9], 102
mov $10[10], 32
mema $11, 7
mov $11[0], 49
mov $11[1], 48
mov $11[2], 48
mema $12, 6
mov $12[0], 53
mov $12[1], 48
mema $13, 6
mov $13[0], 50
mov $13[1], 53
mema $14, 6
mov $14[0], 49
mov $14[1], 48
mema $15, 5
mov $15[0], 53
mema $16, 5
mov $16[0], 49
call StartMsg, 0
pop $17
print '\'
print 'n'
print 'I'
print 'n'
print 'p'
print 'u'
print 't'
print ' '
print 'a'
print 'n'
print 'd'
print ' '
print 'i'
print 'n'
print 't'
print 'e'
print 'g'
print 'e'
print 'r'
print ' '
print 'v'
print 'a'
print 'l'
print 'u'
print 'e'
print ':'
print ' '
println
scani $0
div $18, $0, 100
mov $6, $18
mul $19, $6, 100
sub $20, $0, $19
mov $0, $20
div $21, $0, 50
mov $5, $21
mul $22, $5, 50
sub $23, $0, $22
mov $0, $23
div $24, $0, 25
mov $4, $24
mul $25, $4, 25
sub $26, $0, $25
mov $0, $26
div $27, $0, 10
mov $3, $27
mul $28, $3, 10
sub $29, $0, $28
mov $0, $29
div $30, $0, 5
mov $2, $30
mul $31, $2, 5
sub $32, $0, $31
mov $0, $32
div $33, $0, 1
mov $1, $33
mul $34, $1, 1
sub $35, $0, $34
mov $0, $35
print '\'
print 'n'
print 'N'
print 'u'
print 'm'
print 'b'
print 'e'
print 'r'
print ' '
print 'o'
print 'f'
print ' '
print 'b'
print 'i'
print 'l'
print 'l'
print 's'
print ':'
print ' '
print '\'
print 'n'
println
sub $36, $6, 0
mov $37, $36
brz _label0, $37
println $10
println $11
print ':'
println
println $6
_label0:
print ''
sub $38, $5, 0
mov $39, $38
brz _label1, $39
println $10
println $12
print ':'
println
println $5
_label1:
print ''
sub $40, $4, 0
mov $41, $40
brz _label2, $41
println $10
println $13
print ':'
println
println $4
_label2:
print ''
sub $42, $3, 0
mov $43, $42
brz _label3, $43
println $10
println $14
print ':'
println
println $3
_label3:
print ''
sub $44, $2, 0
mov $45, $44
brz _label4, $45
println $10
println $15
print ':'
println
println $2
_label4:
print ''
sub $46, $1, 0
mov $47, $46
brz _label5, $47
println $10
println $16
print ':'
println
println $1
_label5:
print ''
print '\'
print 'n'
print '\'
print 'n'
print 'E'
print 'n'
print 'd'
print ' '
print 'o'
print 'f'
print ' '
print 'p'
print 'r'
print 'o'
print 'g'
print 'r'
print 'a'
print 'm'
print '.'
print '\'
print 'n'
print '\'
print 'n'
println
return 0
