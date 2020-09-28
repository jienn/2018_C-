#pragma once

typedef struct  {
	int col;
	int row;
	int cnt;
	int G, H,F;
}Point;

typedef struct
{
	int state; // 0�̸� ��, 1�̸� ��
	int trace; // 0�̸� �� �� �ִ� ���, 1�̸� ���� ���
	int crossroads; // ������
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
};   //mouse Ŭ���� ����

Mouse::Mouse(int map_row, int map_col) {

	this->row = map_row;    // ������ ��
	this->col = map_col;    // ������ ��
	this->m_col = 1;
	this->m_row = 1;
	this->energy = row * col * 2;			 // ���� �������� ��*��*2
	this->mana = 0;
};