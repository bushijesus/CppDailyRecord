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
		cout << "���������ѡ� 1��������� 2����ʾ�������� 3�� �˳�ϵͳ" << endl;
		int n = 0;
		cin >> n;
		if (n == 1)
		{
			Task* t = nullptr;
			cout << " 1���������" << endl;
			cout << "�����������1����ӻ�ȡ�ļ��б����� 2������ϴ��ļ����� 3����������ļ�����" << endl;
			int choice = 0;
			cin >> choice;
			if (choice == 1)
			{
				// ��ӻ�ȡ�ļ��б�����
				cout << "�������ļ�����" << endl;
				string add_filename;
				cin >> add_filename;
				t = new GetList(add_filename);
			}
			else if (choice == 2)
			{
				// ����ϴ��ļ�����
				cout << "�������ļ������û�����" << endl;
				string upload_filename;
				string upload_username;
				cin >> upload_filename;
				cin >> upload_username;
				t = new Upload(upload_filename, upload_username);
			}
			else if (choice == 3)
			{
				// ��������ļ�����
				cout << "�������ļ�·�������ش���" << endl;
				string path;
				int times;
				cin >> path;
				cin >> times;
				t = new Download(path, times);
			}
			else
			{
				cout << "��Ч����" << endl;
				continue;
			}
			addTask(t);
			cout << "�������ɹ�" << endl;
		}
		else if (n == 2)
		{
			cout << "2����ʾ��������" << endl;
			showTask();
		}
		else if (n == 3)
		{
			cout << "�˳�ϵͳ" << endl;
			break;
		}
		else
		{
			cout << "��Ч����" << endl;
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
