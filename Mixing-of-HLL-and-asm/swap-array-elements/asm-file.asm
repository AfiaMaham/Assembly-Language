INCLUDE Irvine32.inc
.data
;public asmfunc
msg db "assebly procedure end now",0


.code
asmfunc PROC p1:ptr DWORD

    mov esi, p1
    mov eax, [esi]

    xchg eax, [esi + 16]
    mov [esi], eax


    mov edx,offset msg
    call writestring
    call crlf
    
  
    
    ret
asmfunc ENDP
end