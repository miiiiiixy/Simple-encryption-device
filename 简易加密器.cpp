#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;//创建一个string（字符串）类型的变量以便接下来的输入 
	int b;//一个最后用的占位符 
	cout<<"欢迎使用简易加密器！"<<endl;
	cout<<"只需要将需要加密的内容输入到下面的空白区域就行啦"<<endl;
	cout<<"如果需要关闭程序，直接关闭窗口即可"<<endl;
	cout<<"现在开始输入吧！回车键结束："<<endl;
	//只是几句普通的不能再普通的几句输出罢了 
	getline(cin,a);//输入字符串，因为可能涉及空格，所以没有使用cin，而是getline 
	for(int i=0;i<a.size();i++)//扫描每一个字符来确定接下来干什么 
	{
		//大小写反转 
		if(a[i]>='a'&&a[i]<='z') a[i]-=32;
		else if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		//标点符号不处理 
		
		
		//将所有的字母在字母表的顺序上向左移动3格 
		if(a[i]>='a'&&a[i]<='c'||a[i]>='A'&&a[i]<='C') a[i]+=23;//Determine if it is in the first three letters, if so, special treatment
		else if(a[i]>='d'&&a[i]<='z'||a[i]>='D'&&a[i]<='Z') a[i]-=3;//Otherwise, handle it normally
		//标点符号不处理 
	}
	cout<<"加密后的文本是："<<endl;
	for(int i=a.size()-1;i>-1;i--)
	{
		//反转并输出加密后的文本 
		cout<<a[i];
	}
	cin>>b;
	return 0;
}
