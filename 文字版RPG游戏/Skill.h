/*��������Ϣ��
ѧ�ţ�2017030401047
��������ɭ��
*/

#pragma once;
#include <string>
using namespace std;
class Skill
{
private:
	string s;//��������
	int A, H;//�����˺�

public:
	void set(string x, int y, int z);//���ü�����Ϣ
	void printSkillInfo();//�������

	int geta();//�鿴�����˺�
	int geth();//�鿴������������
	string getSkillName();//�鿴��������
};
