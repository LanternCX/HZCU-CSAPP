.text
.global _start

_start:
    movl $10, %eax    # eax = 10
    movl $20, %ebx    # ebx = 20
    addl %ebx, %eax   # eax = eax + ebx -> 10+20=30

    movl $30, %ecx    # ecx = 30
    addl %ecx, %eax   # eax = eax + ecx -> 30+30=60

    movl $40, %edx    # edx = 40
    addl %edx, %eax   # eax = eax + edx -> 60+40=100

    movl %eax, %ebx   # 把结果放到 ebx 作为 sys_exit 参数
    movl $1, %eax     # sys_exit
    int $0x80

