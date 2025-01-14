INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assebly procedure end now",0


.code
asmfunc PROC p1:ptr BYTE, p2: DWORD

    mov esi, [esp + 8]
    mov ecx, p2

    L1:
    and byte ptr [esi], 11011111b
    inc esi
    loop L1

    mov edx,offset msg
    call writestring
    call crlf
    
  
    
    ret
asmfunc ENDP
end