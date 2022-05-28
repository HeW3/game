#include <windows.h>
#include <stdlib.h>
int w = 10, h = 15, p, s, S, d, i, c, *m;
int main() {
    SetConsoleCursorInfo(GetStdHandle((DWORD)-11),&(CONSOLE_CURSOR_INFO){25});
    for (srand(m = calloc(S = w * h, 4)); c - 27; _cprintf("%d", s), ++d) {
        c = _kbhit() ? getch() & 95 : 1;
        c ^ 68 ? c ^ 65 ? c || (m[S - w + p] = 2) : p && --p : -~p ^ w && ++p;
        if (!(d % 10))
            for (i = S; i >= 0; --i) m[i] = i < w ? rand() % 2 : m[i - w];
            SetConsoleCursorPosition(GetStdHandle((DWORD)-11),(COORD){0});
        for (_sleep(100), system("cls"), i = 0; i < S; _cputs("  "), ++i %
            w || _cputs("\n"))
            SetConsoleTextAttribute(GetStdHandle((DWORD)-11),
            i == S - w + p ? 200 : m[i] ^ 2 ? m[i] ? 20 : 240 : 230), m[i] = m[i
            ] & 2 ? i < w ? 0 : m[i - w] ? m[i - w] = 0, ++s, 0 : (m[i - w] = 2
            , 0) : m[i], i > S - w && m[i] && (c = 27);
    }
}