#include "stdafx.h"
#include <iostream>
#include <Windows.h>

int main() {

	while (true) {

		// 获取系统时间
		SYSTEMTIME st;
		GetLocalTime(&st);

		// 格式化输出
		std::cout << st.wHour << ":" << st.wMinute << ":" << st.wSecond << std::endl;

		// 暂停1秒
		Sleep(1000);
	}

	return 0;
}