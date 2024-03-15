/* Implementar função solucao_ex1 */
int solucao_ex1(long rdi, long rsi, long rdx) {
    long rax = rdi + rsi;
    long rcx = rax + (rdx * 4);
    rdi *= rdi;
    rax = rdi + (rsi * 2);
    rdx += rax;
    char result = (rcx>=rdx);
    return result;
}