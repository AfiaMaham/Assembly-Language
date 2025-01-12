INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assebly procedure end now",0


.code
asmfunc PROC p1:DWORD, p2:DWORD, p3: DWORD, p4: ptr DWORD
    
    mov esi, p4
    mov eax, p1
    add eax, p2
    sub eax, p3

    mov [esi], eax
    
    ret
asmfunc ENDP
end