/*��������Ϣ��
ѧ�ţ�2017030401047
��������ɭ��
*/

#pragma once;
#include "Role.h"
#include "Monster.h"
#include "Skill.h"
#include <iostream>
using namespace std;

//��������
void Skill::set(string x, int y, int z)
{
	s = x;
	A = y;
	H = z;
}

//�鿴��������
string Skill::getSkillName()
{
	return s;
}


//�鿴�����˺�
int Skill::geta()
{
	return A;
}

//�鿴������������
int Skill::geth()
{
	return H;
}

//�������
void Skill::printSkillInfo()
{
	cout << "�������ƣ�  " << s << endl;
	cout << "��������    " << A << endl;
	cout << "����������  " << H << endl;
}