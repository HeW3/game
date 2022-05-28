#include <conio.h>
#include <stdlib.h>
int main(){
    int w = 10, h = 15, s = 0, d = 0, *m, i = 0, S = w * h, p = w / 2, c, t = 0;
    for (srand(m = calloc(w * h, 4)); i < 5 * w; ++i)m[i] = rand() % 2;
    for (; c - 27; _cprintf("score:%d", t), c = _kbhit() ? getch() & 95 : 1, _sleep(50), ++d){
        c == 65 ? p && --p : c == 83 ? p < w - 1 && (++p) : c || (m[S - 2 * w + p] = 2);
        if (d == 10)
            for(d = 0, i = S; i >= 0; --i)m[i] = i < w ? rand() % 2 : m[i - w];
        for (system("cls"), i = 0; i < S; ++i % w || _cputs("|\n")){
            _cputs(i == S - w + p ? "[]" : m[i] == 2 ? "||" : m[i] ? "()" : "  ");
            if (m[i] == 2)m[i] = i < w ? 0 : m[i - w] ? m[i - w] = 0, ++t, 0 : (m[i - w] = 2, 0);
            if (m[i] & 1 && i > S - w)exit(0);
        }
    }
}