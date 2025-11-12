.data
.globl add1
.globl add2
add1: .int 10
add2: .int 20

.text
.code32
.globl add

/*
0x8(%esp)=b
0x4(%esp)=a
*/

add:
        movl 0x8(%esp),%eax
        movl 0x4(%esp),%ebx
        add %ebx,%eax
        ret
