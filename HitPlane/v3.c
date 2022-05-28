#include <conio.h>
#include <stdlib.h>
int w = 10, h = 15, p, s, S, d, i, c, *m;
int main(){
    for (srand(m = calloc(S = w * h, 4)); i < w * 5; ++i)m[i] = rand() % 2;
    for (; c - 27; _cprintf("%d", s), c = _kbhit() ? getch() & 95 : 1){
         c ^ 68 ? c ^ 65 ? c || (m[S - w + p] = 2) : p && --p : -~p ^ w && ++p;
        if (++d, !(d % 10))
            for (i = S; i >= 0; --i)m[i] = i < w ? rand() % 2 : m[i - w];
        for (_sleep(50), system("cls"), i = 0; i < S; ++i % w || _cputs("|\n"))
            _cputs(i == S - w + p ? "[]" : m[i] == 2 ? "||" : m[i] ? "()" :
            "  "), m[i] = m[i] & 2 ? i < w ? 0 : m[i - w] ? m[i - w] = 0, ++s,
            0 : (m[i - w] = 2, 0) : m[i], i > S - w && m[i] && (c = 27);
    }
}