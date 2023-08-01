#include "stdafx.h"
#include "GetList.h"
#include <string>

GetList::GetList(string& name): filename(name)
{
}

void GetList::show()
{
	cout << "GetList:" << filename << endl;
}
