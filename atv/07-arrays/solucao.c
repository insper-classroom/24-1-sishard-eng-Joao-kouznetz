void solucao(long rdi, long rsi, int rdx) {
    for (rdx = rdx - 1; rdx >= 0; rdx--) {
        long lVar2 = rdx * 2;
        short sVar1 = *(short *)(rdi + lVar2);
        
        if (sVar1 < 1) {
           short *mem;
            mem = rsi + lVar2; 
            *mem = -sVar1;

        } else {
            short *mem2;
            mem2=rsi+lVar2;
            *mem2 = sVar1;
            // *(short *)(rsi + lVar2) = sVar1;
        }
    }
}