
#include <stdbool.h>

bool function(long rdi, long rsi, long rdx) {
    long rax = rdi + rsi;             // lea    (%rdi,%rsi,1),%rax
    long rcx = rax + (rdx * 4);       // lea    (%rax,%rdx,4),%rcx
    rdi *= rdi;                       // imul   %rdi,%rdi
    rax = rdi + (rsi * 2);            // lea    (%rdi,%rsi,2),%rax
    rdx += rax;                       // add    %rax,%rdx
    return rdx >= rcx;                // cmp    %rdx,%rcx; setge  %al; movzbl %al,%eax
}