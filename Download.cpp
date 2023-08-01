#include "stdafx.h"
#include "Download.h"
#include <string>
#include <iostream>
using namespace std;

Download::Download(string& fname, int t): filename(fname), times(t)
{
}

void Download::show()
{
	cout << "Download " << filename << " for " << times << "times" << endl;
}
