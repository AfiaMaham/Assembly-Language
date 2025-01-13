INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assebly procedure end now",0


.code
asmfunc PROC p1:ptr BYTE, p2:ptr BYTE, p3: DWORD

    mov esi, p1
    mov edi, p2
    mov ecx, p3

    L1:
    mov al, [esi]
    mov [edi], al
    inc esi
    inc edi
    loop L1

    mov edx,offset msg
    call writestring
    call crlf
    
  
    
    ret
asmfunc ENDP
end