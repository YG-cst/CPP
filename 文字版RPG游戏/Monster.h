/*��������Ϣ��
ѧ�ţ�2017030401047
��������ɭ��
*/

#pragma once;
#include <iostream>
using namespace std;

class Monster
{
private:
	int HP, ATK, DEF;//Ѫ������������������
	string NAME;//Ұ��
	string TALK;//̨��
	int SCORE;//��ɱҰ�����÷���

public:
	void setmonster(int hp, int atk, int def, string name, string talk, int score);//����Ұ����Ϣ
	void Print();//���Ұ����Ϣ
	void subHP(int x);//Ѫ������

	int getHP();//�鿴Ѫ��
	int getATK();//�鿴������
	int getDEF();//�鿴������
	int getScore();//�鿴����
};
