.mode small
.stack 100h
.data

string db 50 dup ('$')
uppercase db 50 dup ('$')

length dw $-string
.code


main proc

mov ax, @data
mov ds, ax

mov bx, 0h
mov cx, length
mov di, offset string
mov si, offset uppercase



top:

mov al, [di]
inc di

cmp al, 60h

jc setbreakpoint
sub al, 20h

cxcxcx




mov ah, 4ch
int 21h


main endp
end main