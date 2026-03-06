.section .text
.globl sum_array


sum_array:
    xor %eax, %eax
    xor %ecx, %ecx

loop:
    cmp %rsi, %rcx
    jge done

    mov (%rdi,%rcx,4), %edx
    add %edx, %eax
    
    inc %rcx
    jmp loop

done:
    ret

.section .note.GNU-stack,"",@progbits

