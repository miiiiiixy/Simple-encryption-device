#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;//Create string variables
	int b;//Placeholder
	cout<<"Welcome to use the simple encryption device!"<<endl;
	cout<<"Just input the text that needs to be encrypted into the area below"<<endl;
	cout<<"If you want to close the program, simply close the window"<<endl;
	cout<<"Enter the text that needs to be encrypted, press enter to end:"<<endl;
	//Just a few ordinary output sentences
	getline(cin,a);//input
	for(int i=0;i<a.size();i++)//Scan each letter to determine what to do next
	{
		//Reverse capitalization
		if(a[i]>='a'&&a[i]<='z') a[i]-=32;
		else if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		//Punctuation marks are not processed
		
		
		//Move all letters three positions to the left in the alphabet 
		if(a[i]>='a'&&a[i]<='c'||a[i]>='A'&&a[i]<='C') a[i]+=23;//Determine if it is in the first three letters, if so, special treatment
		else if(a[i]>='d'&&a[i]<='z'||a[i]>='D'&&a[i]<='Z') a[i]-=3;//Otherwise, handle it normally
		//Punctuation marks are not processed
	}
	cout<<"The encrypted text is:"<<endl;
	for(int i=a.size()-1;i>-1;i--)
	{
		//Store and output in reverse order
		cout<<a[i];
	}
	cin>>b;
	return 0;
}
