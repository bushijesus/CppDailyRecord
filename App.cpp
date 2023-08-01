#include "stdafx.h"
#include "App.h"
#include "Task.h"
#include "GetList.h"
#include "Download.h"
#include "Upload.h"
#include <string>
#include <iostream>
using namespace std;

App::App(){}
App::~App(){}

void App::run()
{
	while (true)
	{
		cout << "请输入操作选项： 1、添加任务 2、显示所有任务 3、 退出系统" << endl;
		int n = 0;
		cin >> n;
		if (n == 1)
		{
			Task* t = nullptr;
			cout << " 1、添加任务" << endl;
			cout << "请输入操作：1、添加获取文件列表任务 2、添加上传文件任务 3、添加下载文件任务" << endl;
			int choice = 0;
			cin >> choice;
			if (choice == 1)
			{
				// 添加获取文件列表任务
				cout << "请输入文件名：" << endl;
				string add_filename;
				cin >> add_filename;
				t = new GetList(add_filename);
			}
			else if (choice == 2)
			{
				// 添加上传文件任务
				cout << "请输入文件名、用户名：" << endl;
				string upload_filename;
				string upload_username;
				cin >> upload_filename;
				cin >> upload_username;
				t = new Upload(upload_filename, upload_username);
			}
			else if (choice == 3)
			{
				// 添加下载文件任务
				cout << "请输入文件路径、下载次数" << endl;
				string path;
				int times;
				cin >> path;
				cin >> times;
				t = new Download(path, times);
			}
			else
			{
				cout << "无效输入" << endl;
				continue;
			}
			addTask(t);
			cout << "添加任务成功" << endl;
		}
		else if (n == 2)
		{
			cout << "2、显示所有任务" << endl;
			showTask();
		}
		else if (n == 3)
		{
			cout << "退出系统" << endl;
			break;
		}
		else
		{
			cout << "无效输入" << endl;
		}
	}
}

void App::addTask(Task* task)
{
	tasks.push_back(task);
}

void App::showTask() const
{
	for (Task* task : tasks)
	{
		task->show();
	}
	cout << endl;
}
