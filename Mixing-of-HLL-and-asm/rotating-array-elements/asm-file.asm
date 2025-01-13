INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assebly procedure end now",0


.code
asmfunc PROC p1:ptr DWORD, p2: DWORD, p3: DWORD

    mov esi, p1
    mov ecx, p2
    mov eax, [esi]
    mov p3, eax
    L1:
    add esi, 4
    mov eax,[esi]
    mov [esi - 4], eax
    loop L1

    mov eax, p3
    call writeint
    mov [esi - 4], eax

    mov edx,offset msg
    call writestring
    call crlf
    
  
    
    ret
asmfunc ENDP
end