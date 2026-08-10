#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <math.h>
void firework(int x, int y) {
    for (int i = 0; i < 30; i++) {
        int angle = rand() % 360;
        int len = rand() % 50 + 50;
        int ex = x + len * cos(angle * 3.14 / 180);
        int ey = y + len * sin(angle * 3.14 / 180);
        setcolor(rand() % 15 + 1);
        line(x, y, ex, ey);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(BLACK);
    cleardevice();

    while (!kbhit()) {
        int x = rand() % getmaxx();
        int y = rand() % (getmaxy() / 2);
        firework(x, y);
        delay(400);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
