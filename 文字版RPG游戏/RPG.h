/*��������Ϣ��
ѧ�ţ�2017030401073
���������Ӻ�
*/

#pragma once
#include "Role.h"
#include "Monster.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <iomanip>
#include <windows.h>
using namespace std;

class RPG
{
private:
	Role R;
	Monster M[10];

public:
	void Set(int hp, int rs, int atk, int def, string sex, string name, string profession);
	void Gaming(string x);//��ʼ��Ϸ
	void printSkill();//�鿴�����б�
	void changeInfo(int x);//�޸ļ�����Ϣ
	void printSkillInfo(int x);//���������Ϣ
	void Rank(string x, int y);//��Ϸ������
	void Rank();//���˵�����
	void tip();//С��ʿ
};