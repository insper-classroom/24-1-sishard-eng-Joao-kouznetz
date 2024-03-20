/* Implemente aqui sua versão em C da função ex3
 * presente no arquivo ex3.o
 * 
 * Chame sua função de ex3_solucao */
long ex3_solucao(long rdi, long rsi) {
    long rcx = 0x0;
    long r8d = 0x0;
    
    while_goto:
    if (rcx >= rdi) {
        return r8d;
    }
    
    long rax = rcx;
    long rdx = 0x0;

    // Divisão de rax por rsi (rax / rsi)
    rdx = rax % rsi;

    if (rdx != 0x0) {
        goto loop_continue;
    }
    
    // r8d += rcx;
    
    loop_continue:
    rcx += 0x1;
    goto while_goto;
}