.text
.global _start

_start:
    movl $5, %eax    # 5
    movl $8, %ecx    # 8
    addl %ecx, %eax  # eax = 13

    movl %eax, %ebx  # 把结果放到 ebx 作为退出码
    movl $1, %eax    # sys_exit
    int $0x80
