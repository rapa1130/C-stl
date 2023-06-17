.386
.model flat,stdcall
.stack 4096
ExitProcess proto,dwExitCode:dword

.code
main PROC
mov eax,5
add eax,6
INVOKE ExitProcess,0
main ENDP
end main