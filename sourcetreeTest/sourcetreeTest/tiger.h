#pragma once
//���� class�� void getName()�Լ�, void getWeight()�Լ��� ������ �ּ���
#include<string>
#include<iostream>
using namespace std;
class tiger {
private:
	string name;
	int weight;
public:
	tiger(const string& name_in = "tiger", const int& weight_in = 50)
		:name(name_in), weight(weight_in)
	{}
	void getName() {
		cout << name << endl;
	}
	void getWeight() {
		cout << weight << endl;
	}
};