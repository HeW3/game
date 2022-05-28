#include <conio.h>
#include <stdlib.h>
#define r s % w || (x < 0 && (x = 1)), -~s % w || (x > 0 && (x = -1)), s < w\
        && (y = w)
int main(){
    int w = 10, h = 15, S, *m, x = 1, y = -w, s, p = 0, l = 5, c, i = 0, t;
    for(srand(m = calloc(S = w * h, 4)); i < 5 * w; ++i)m[i] = 1;
    for(s = S - w - rand() % w, t = w * 5, i = 0; i < l; ++i)m[i + S - w] = -1;
    for(; s < S - w && c - 27 && t; c = _kbhit() ? getch() : 1, r, _sleep(25)){
        c == 97 ? p && (--m[S - w + p - 1], ++m[S - w + p + l - 1], --p) : c ==
        115 && p + l < w && (++m[S - w + p], --m[S - w + p + l], ++p);
        while(m[s + x + y] | m[s + x] | m[s + y])m[s + x] | m[s + y] ? m[s + x]
        && (m[s + x] = 0, x = -x, --t), m[s + y] && (m[s + y] = m[s + y] < 0 ?
        -1 : (--t, 0), y = -y) : m[s + x + y] && (m[s + x + y] = m[s + x + y] <
        0 ? -1 : (--t, 0), y = -y, x = -x), r;
        for(s += x + y, system("cls"), i = 0; i < S; ++i % w || _cputs("|\n"))
            _cputs(i ^ s ? m[i] > 0 ? "[]" : m[i] ? "==" : "  " : "()");
    }
}
//打砖块游戏
//小写a,s控制板子左右,w为屏幕宽,h为屏幕高l,l为板子长度,可以自己调,别太大就行
//663字符(不包含非必须的空格和换行)
//使用 VScode + MinGW8.1.0 编写
//编译命令: gcc v1.c -o v1.exe
//文件格式: UTF-8
//2022.5.21 HeW