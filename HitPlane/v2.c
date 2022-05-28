#include <conio.h>
#include <stdlib.h>
int w = 10, h = 15, p, s, S, d, i, c, *m;
int main(){
    for(srand(m = calloc(S = w * h, 4)); i < w * 5; ++i)m[i] = rand() % 2;
    for(S -= w; c - 27; _cprintf("score:%d", s), _sleep(50), ++d){
        c = _kbhit() ? getch() & 95 : 1, c ^ 68 ? c ^ 65 ? c || (m[S - w + p] =
        2) : p && --p : -~p ^ w && ++p;
        if(!(d % 10))
            for (i = S + w; i >= 0; --i)m[i] = i < w ? rand() % 2 : m[i - w];
        for(system("cls"), i = 0; i < S + w; ++i % w || _cputs("|\n"))
            _cputs(i == S + p ? "[]" : m[i] == 2 ? "||" : m[i] ? "()" : "  "),
            m[i] = m[i] & 2 ? i < w ? 0 : m[i - w] ? m[i - w] = 0, ++s, 0 : (m[
            i - w] = 2, 0) : m[i], i >= S && m[i] && (c = 27);
    }
}