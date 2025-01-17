; Afia Maham
; 23-NTU-CS-1126
include irvine32.inc

.data
str1 BYTE " Inner Loop",0
str2 BYTE " Outer Loop",0
.code

main proc 
mov ecx,5
mov eax,16
L1:
push ecx
mov edx,offset str2
mov eax,ecx
call crlf
call writedec
call writestring
mov ecx,3
L2:
mov edx,offset str1
mov eax,ecx
call crlf
call writedec
call writestring
loop L2
pop ecx

loop L1


exit
main endp
end main