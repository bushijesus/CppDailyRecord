#pragma once
class Dog
{
public:
	Dog();
	Dog(int no, char name[], int age);
	void setDog(int no, char name[], int age);
	void getDog() const;
	static void getDogInfo(const Dog& dog);
	~Dog();
private:
	int m_no;
	char m_name[32];
	int m_age;
};

