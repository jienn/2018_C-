#pragma once

typedef struct  {
	int col;
	int row;
	int cnt;
	int G, H,F;
}Point;

typedef struct
{
	int state; // 0이면 길, 1이면 벽
	int trace; // 0이면 갈 수 있는 장소, 1이면 갔던 장소
	int crossroads; // 갈림길
}MEMORY;

class Mouse {
public:
	int row, col;
	int  energy;
	double mana;
	int scan_count;
	int tele_count;
	Point **save;
	int m_row, m_col;

	Mouse(int map_row, int map_col);
	void save_init(int map_row, int map_col);
};   //mouse 클래스 선언

Mouse::Mouse(int map_row, int map_col) {

	this->row = map_row;    // 지도의 열
	this->col = map_col;    // 지도의 행
	this->m_col = 1;
	this->m_row = 1;
	this->energy = row * col * 2;			 // 쥐의 에너지는 행*열*2
	this->mana = 0;
};