int ex4_solucao(int *rdi, int *rsi, int *rdx, int ebx) {
    printf(rdi, "rdi");
    printf(rsi);
    int eax = 0;
    eax = *rsi + *rdx * 2 + ebx;
    return eax;
}
