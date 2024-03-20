int ex5_solucao () {
    int rsp_offset = 0xc;
    int *rsp_c = (int *)((char *)&rsp_offset + rsp_offset);
    int ebx = 0;
    
    *rsp_c = 1;
    
    if (*rsp_c > 0) {
        int *rsi = rsp_c;
        int *rdi = 0; // Supondo que seja um ponteiro para uma variável global ou string
        int eax = 0;
        
        eax = ex5(rdi);
        
        if (eax > 0) {
            ebx += eax;
        }
    }
    
    return ebx;
}

