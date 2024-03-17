/* Implemente aqui sua versão em C da função soma_n
 * presente no arquivo ex2.o
 *
 * Chame sua função de soma_n_solucao */

long soma_n_solucao(int edi) {
    long eax = 0x0;
    long edx = 0x0;
    
    while_goto:
    if (eax >= edi) {
        return edx;
    }
    
    long rcx = (long)eax;
    edx += rcx;
    
    eax += 0x1;
    goto while_goto;
}

