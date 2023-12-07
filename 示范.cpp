#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <ctime>
#include "zhizi.h"
using namespace std;
int main(){
	int p;
	srand(time(NULL));
	out("这是示范");
	cout<<endl;
	p=pow(3,4);
	cout<<p<<"是3的4次方"<<endl;
	int c=rand()%1000;
	bool t=isprime(c);
	if(t==true){
		cout<<c<<"是质数"<<endl;
	}
	else{
		cout<<c<<"不是质数"<<endl;
	}
	p=foradd(1,100);
	cout<<p<<"是1加到100的值"<<endl;
	cout<<"5秒后清屏"<<endl;
	CLS(5);
	cout<<"一秒后按任意键继续清屏"<<endl;
	sleep(1);
	pCLS();
	p=circle(c);
	cout<<"圆的直径为"<<c<<"，面积为"<<p<<endl;
	CLS(10);
	return 0;
}
