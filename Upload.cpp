#include "stdafx.h"
#include "Upload.h"
#include <string>

Upload::Upload(string& fname, string& uname): filename(fname), username(uname)
{
}

void Upload::show()
{
	cout << "Upload:" << filename << "\tUploader:" << username << endl;
}
