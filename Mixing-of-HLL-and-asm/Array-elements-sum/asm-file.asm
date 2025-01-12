INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assebly procedure end now",0


.code
asmfunc PROC p1:ptr DWORD, p2:ptr DWORD, p3: DWORD
    
    mov esi, [esp + 8]
    mov ecx, p3
    mov edi, [esp + 12]
    mov eax, [edi]
    L1:
    add eax, [esi]
    add esi, 4
    loop L1
    mov [edi],eax
    mov edx, offset msg
    call writestring
    call crlf
    
    ret
asmfunc ENDP
end