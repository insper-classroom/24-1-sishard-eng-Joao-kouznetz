long vezes2(long a);

/* Implementar função solucao_ex2 */
long solucao_ex2(long rdi, long rsi){
    long rax= vezes2(rsi);
    if (rax<=rdi) goto if1;
    rdi+=rdi;
    if1:
    rax+=rdi;
    return rax;
}