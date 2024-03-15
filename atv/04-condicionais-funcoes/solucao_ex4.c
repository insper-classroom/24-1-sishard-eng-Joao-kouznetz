/* Implementar função solucao_ex4 */
int solucao_ex4(int di, int si) {
    if_goto_di:
    if (di <= 0x11) {
        int result = 0x12 - di;
        return result;
    }
    
    si -= 0x41;
    if (si > 0x1) {
        return 0xfffffff;
    }
    
    int result = di - 0x11;
    return result;
}
