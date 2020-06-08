#ifndef SET_GRAPH_H
#define SET_GRAPH_H

#include <graphics.h>
#include <iostream>
#include <conio.h>

void show_image(){
	const int x_o = 20, y_o = 20;
	const int WIDTH = 30;           //���Ӽ��
	const int SIZES = 15;
	initgraph(640,480);
//	loadimage(&Windows, "D:\\wuziqi_chonggou\\wuziqi_choanggou\\wuziqi_choanggou\\Set_graph.png", 640, 480);
//	putimage(0, 0, &Windows);
	int background = RGB(GetRValue(600), GetGValue(100), GetBValue(100));
	setbkcolor(background);
	cleardevice();
	setlinecolor(BLACK);
	for (int i = 0; i < SIZES; i++) {
		line(x_o, y_o + i * WIDTH, x_o + WIDTH * (SIZES - 1), y_o + i * WIDTH);
		line(x_o + i * WIDTH, y_o, x_o + i * WIDTH, y_o + WIDTH * (SIZES - 1));
	}

}

#endif