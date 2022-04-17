#include<iostream>
using namespace std;
int main()
{
	string msg;
	string poly;
	string x="";
	cout<<"Enter the message=";
	getline(cin,msg);
	cout<<"enter the polynomial";
	getline(cin,poly);
	int n=poly.length();
	int m=msg.length();
	x=x+msg;
	for(int i=1;i<=n-1;i++)
		x=x+'0';
	for(int i=0;i<=x.length()-n;){
		for(int j=0;j<n;j++)
			x[i+j]=x[i+j]== poly[j]? '0':'1';
		for( ; i<x.length() && x[i]!='1'; i++);
	}
	cout<<msg+x.substr(x.length()-n+1);
	
	return 0;
	
}
