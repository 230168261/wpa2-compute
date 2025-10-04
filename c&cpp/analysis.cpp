#include<iostream>
using namespace std;
char location;
char data;
const char* p_location;
void analysis() {
	cout << "请输入握手包文件所在位置:";
	cin>>location ;
	fopen(p_location, "rb");
}