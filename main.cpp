#include <thread>
#include <iostream>
using namespace std;

bool is_exit = false;          // �ж��߳��Ƿ��˳�

void ThreadMain() {
	cout << "���߳�����" << endl;
	cout << "���߳� id: " << this_thread::get_id() << endl;
	for (int i = 0; i < 10; ++i)
	{
		if (!is_exit) break;
		cout << "���߳���" << i << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
	cout << "���߳̽���" << endl;
}

int main() {

// 	cout << "���߳�����" << endl; 
// 	cout << "���߳� id: " << this_thread::get_id() << endl;
// 	// �̴߳�������
// 	thread th(ThreadMain);
// 	cout << "��ʼ�ȴ����߳�" << endl;
// 	// �����ȴ����߳��˳�
// 	th.join();
// 	cout << "�����ȴ����߳�" << endl;
// 	cout << "���߳̽���" << endl;



// 	{
// 		thread th(ThreadMain);   // ����thread�������٣����̻߳�������
// 	}

// 	{
// 		thread th(ThreadMain);
// 		th.join();              // ����ǰ�߳��������ȴ����߳�������ϣ�����ǰ�߳�ɶҲ�ɲ���
// 	}

// 	{
// 		thread th(ThreadMain);
// 		th.detach();             // ���߳������̷߳���   �ػ��߳�
// 		// �ӣ����߳��˳������̲߳�һ���˳������߳�ֻ�������ڲ�����
// 	}

	{
		thread th(ThreadMain);
		this_thread::sleep_for(chrono::seconds(1));
		is_exit = true;        // ֪ͨ���߳��˳�
		th.join();
	}
	return 0;
}