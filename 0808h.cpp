#include "stdafx.h"
#include <iostream>
#include <Windows.h>

int main() {

	while (true) {

		// ��ȡϵͳʱ��
		SYSTEMTIME st;
		GetLocalTime(&st);

		// ��ʽ�����
		std::cout << st.wHour << ":" << st.wMinute << ":" << st.wSecond << std::endl;

		// ��ͣ1��
		Sleep(1000);
	}

	return 0;
}