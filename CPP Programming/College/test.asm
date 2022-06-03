.mode small
.stack 100h
.data
string db 50 dup (?)
uppercase db 50 dup (?)

length1 dw $-string
length2 dw $-uppercase
.code

main proc
	mov ax, @data
	mov ds, ax

	mov bx, 0h
	mov cx, length1
	mov di, offset string
	mov si, offset uppercase
top:
	mov ah, 01h					; Characterwise input
	int 21h

	mov [di], al
	cmp al, 0dh
	jz go
	inc di
	inc bx						; actual length of string
	loop top
go:
	mov length1, bx
	mov cx, length1
back:
	dec di
	loop back
	
	mov cx, length1				; Reinitialize
next:
	mov al, [di]
	cmp al, 60h					; Compare with 96
	jc skip						; Skip if already a capital letter
	add al, 20h					; Convert to uppercase
skip:
	mov [si], al				; Store uppercased string
	inc di
	inc si
	loop next

	; Print the uppercaesed string
	mov dx, offset uppercase
	mov ah, 09h
	int 21h


	mov ah, 4ch
	int 21h
main endp
end main