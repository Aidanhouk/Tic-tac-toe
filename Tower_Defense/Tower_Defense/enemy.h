#pragma once

#include <SFML/Graphics.hpp>

#include "roadCell.h"
#include "consts.h"

// ����� ����������
class Enemy
{
private:
	// ��� �� ����
	bool m_isAlive{ 0 };
	// ���� �� ����
	bool m_isKilled{ 0 };
	// ��� �����
	int m_type;
	// ��������
	int m_hp;
	// ������� � ���� ������ �����
	int m_coins;
	// � ����� ������� ������ ���������
	int m_direction;
	// ��������� ������ �� ������ ������, ����� ��� ��������� � ����� ������
	int m_distance{ 0 };
	// �� ����� ������ ���������
	RoadCell *m_position{ nullptr };
public:
	// � ����������� ����� �������� ��� �������
	Enemy(int type);
	~Enemy() {}

	// ���������� m_distance � ������ ������
	void changePosition();
	// ��������� �����
	void drawEnemy(sf::RenderWindow &window);
	// ���� ���������
	void enemyMoves() { m_distance += 2; }
	// ���� �������� ����
	void getDamage(int dmg) { m_hp -= dmg; }
	// �������� ��������� ��������
	void drawShot(sf::RenderWindow &window);

	// ���������� ������� �����
	RoadCell *getPositionEnemy() { return m_position; }
	// ������������� ������� �����
	void setPosition(RoadCell * position) { m_position = position; }
	// ���������� ����������� ��������
	int getDirection() const { return m_direction; }
	// ������������� ����������� ��������
	void setDirection(RoadCell * currentPosition);
	// �������� m_distance
	int getDistance() const { return m_distance; }
	// �������� hp
	int getHealth() const { return m_hp; }
	// �������� ���-�� ����� � �����
	int getCoins() const { return m_coins; }
	// �������� m_isAlive
	bool isAlive() const { return m_isAlive; }
	// ������������� m_isAlive
	void setIsAlive(bool isAlive) { m_isAlive = isAlive; }
	// �������� m_isKilled
	bool getIsKilled() const { return m_isKilled; }
	// ������������� m_isKilled
	void setIsKilled(bool isKilled) { m_isKilled = isKilled; }
};