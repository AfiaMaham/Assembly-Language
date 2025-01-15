INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assebly procedure end now",0


.code
asmfunc PROC p1:ptr DWORD, p2: DWORD, p3: ptr DWORD

    mov esi, p1
    mov edi, p3
   
    mov ecx, p2

    mov eax, [esi]
    mov p3, eax
    L1:
    test dword ptr [esi], 1h
    jz count
    jnz next
    
    count:
    mov eax, [edi]
    inc eax
    mov [edi], eax
    next:
    add esi, 4
    loop L1

    mov edx,offset msg
    call writestring
    call crlf
    
  
    
    ret
asmfunc ENDP
end