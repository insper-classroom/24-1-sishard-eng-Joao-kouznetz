int ex4_solucao(int edi) {
int ebx = edi;
    int *rsp_8 = (int *)((char *)&edi + 8);
    int *rsp_c = (int *)((char *)&edi + 12);
    int eax = 0;

    eax = ex4();

    int edx = *rsp_8;
    eax = ebx + (edx * 2);

    return eax;
}
