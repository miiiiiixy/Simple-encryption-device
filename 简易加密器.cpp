#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;//����һ��string���ַ��������͵ı����Ա������������ 
	int b;//һ������õ�ռλ�� 
	cout<<"��ӭʹ�ü��׼�������"<<endl;
	cout<<"ֻ��Ҫ����Ҫ���ܵ��������뵽����Ŀհ����������"<<endl;
	cout<<"�����Ҫ�رճ���ֱ�ӹرմ��ڼ���"<<endl;
	cout<<"���ڿ�ʼ����ɣ��س���������"<<endl;
	//ֻ�Ǽ�����ͨ�Ĳ�������ͨ�ļ���������� 
	getline(cin,a);//�����ַ�������Ϊ�����漰�ո�����û��ʹ��cin������getline 
	for(int i=0;i<a.size();i++)//ɨ��ÿһ���ַ���ȷ����������ʲô 
	{
		//��Сд��ת 
		if(a[i]>='a'&&a[i]<='z') a[i]-=32;
		else if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		//�����Ų����� 
		
		
		//�����е���ĸ����ĸ���˳���������ƶ�3�� 
		if(a[i]>='a'&&a[i]<='c'||a[i]>='A'&&a[i]<='C') a[i]+=23;//Determine if it is in the first three letters, if so, special treatment
		else if(a[i]>='d'&&a[i]<='z'||a[i]>='D'&&a[i]<='Z') a[i]-=3;//Otherwise, handle it normally
		//�����Ų����� 
	}
	cout<<"���ܺ���ı��ǣ�"<<endl;
	for(int i=a.size()-1;i>-1;i--)
	{
		//��ת��������ܺ���ı� 
		cout<<a[i];
	}
	cin>>b;
	return 0;
}
