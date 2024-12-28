#include <graphics.h>
#include <time.h>

using namespace std;

int main() {
	int gd = DETECT;
	int gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	
	time_t rawTime;
	struct tm * currentTime;
	char a[100];
	
	rawtime = time(NULL);
	currentTime = localtime (&rawTime);
	strftime(a, 100, "%I:%M:%S", current time);
	
	setcolor(WHITE);
	settextstyle(3, HORIZ_DIR, 10);
	outtextxy(200, 100, a);
	
	getch();
	closegraph();
	
}
