#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <string>
using namespace std;
#ifndef CIRCLE_H
#define CIRCLE_H
void out(string x){
	for(int i=0;i<x.length();i++){
		cout<<x[i];
		sleep(0.1);
	}
}
int pow(int a,int b){
	int ans=1;
	for(int i=1;i<=b;i++){
		ans*=a;
	}
	return ans;
}
bool isprime(int x){
	if(x<=1){
		return false;
	}
	else{
		for(int i=2;i*i<=x;i++){
			if(x%i==0){
				return false;
			}
		}
	}
	return true;
}
int foradd(int a,int b){
	int ans=0;
	for(int i=a;i<=b;i++){
		ans+=i;
	}
	return ans;
}
void CLS(int a){
	sleep(a);
	system("cls");
	return;
}
void pCLS(){
	system("pause");
	system("cls");
}
double circle(int r){
	double ans;
	ans=3.14*r*r;
	return ans;
}
#endif
