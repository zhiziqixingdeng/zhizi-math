#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include "zhizi.h"
using namespace std;
int main(){
	int p;
	srand(time(NULL));
	out("����ʾ��");
	cout<<endl;
	p=pow(3,4);
	cout<<p<<"��3��4�η�"<<endl;
	int c=rand()%1000;
	bool t=isprime(c);
	if(t==true){
		cout<<c<<"������"<<endl;
	}
	else{
		cout<<c<<"��������"<<endl;
	}
	p=foradd(1,100);
	cout<<p<<"��1�ӵ�100��ֵ"<<endl;
	cout<<"5�������"<<endl;
	CLS(5);
	cout<<"һ����������������"<<endl;
	sleep(1);
	pCLS();
	p=circle(c);
	cout<<"Բ��ֱ��Ϊ"<<c<<"�����Ϊ"<<p<<endl;
	CLS(10);
	return 0;
}
