#include "stdafx.h"
#include "MemData.h"


MemData::MemData()
{
}


MemData::~MemData()
{
}

int MemData::read(Student stu[])
{
	stu[0].setName("����");
	stu[0].setSex('F');
	stu[0].setAge(49);

	stu[1].setName("��ɭ");
	stu[1].setSex('M');
	stu[1].setAge(15);

	stu[2].setName("���");
	stu[2].setSex('M');
	stu[2].setAge(22);

	stu[3].setName("����");
	stu[3].setSex('F');
	stu[3].setAge(24);

	stu[4].setName("�ň�");
	stu[4].setSex('F');
	stu[4].setAge(28);

	return 5;
}
