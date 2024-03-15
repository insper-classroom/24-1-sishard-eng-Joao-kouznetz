/* Implementar função solucao_ex3 */
void solucao_ex3(int rdi, int rsi, int *rdx, int *rcx, int *r8){
int al = rdi<rsi;
*rdx = al;
al = rdi == rsi;
*rcx = al;
al= rdi>rsi;
*r8=al;
}

