#include <thread>
#include <iostream>
using namespace std;

bool is_exit = false;          // 判断线程是否退出

void ThreadMain() {
	cout << "子线程启动" << endl;
	cout << "子线程 id: " << this_thread::get_id() << endl;
	for (int i = 0; i < 10; ++i)
	{
		if (!is_exit) break;
		cout << "子线程中" << i << endl;
		this_thread::sleep_for(chrono::seconds(1));
	}
	cout << "子线程结束" << endl;
}

int main() {

// 	cout << "主线程启动" << endl; 
// 	cout << "主线程 id: " << this_thread::get_id() << endl;
// 	// 线程创建启动
// 	thread th(ThreadMain);
// 	cout << "开始等待子线程" << endl;
// 	// 阻塞等待子线程退出
// 	th.join();
// 	cout << "结束等待子线程" << endl;
// 	cout << "主线程结束" << endl;



// 	{
// 		thread th(ThreadMain);   // 报错，thread对象被销毁，子线程还在运行
// 	}

// 	{
// 		thread th(ThreadMain);
// 		th.join();              // 将当前线程阻塞，等待子线程运行完毕，但当前线程啥也干不了
// 	}

// 	{
// 		thread th(ThreadMain);
// 		th.detach();             // 子线程与主线程分离   守护线程
// 		// 坑：主线程退出后，子线程不一定退出，子线程只访问其内部变量
// 	}

	{
		thread th(ThreadMain);
		this_thread::sleep_for(chrono::seconds(1));
		is_exit = true;        // 通知子线程退出
		th.join();
	}
	return 0;
}