int solucao(int edi, int rsi, int *rdx){
    int eax;
    eax = 4*rsi+rsi; //  lea    (%rsi,%rsi,4),%eax
    eax = eax + edi;    // add    %edi,%eax
    *rdx = eax;    // mov    %eax,(%rdx)
    eax = 2*rsi + rsi;  // lea    (%rsi,%rsi,2),%eax
    eax = 4*edi+eax;   // lea    (%rax,%rdi,4),%eax
    return eax;  //ret
}