#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;//Create string variables
	getline(cin,a);//input
	for(int i=0;i<a.size();i++)//Scan each letter to determine what to do next
	{
		//Reverse capitalization
		if(a[i]>='a'&&a[i]<='z') a[i]-=32;
		else if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		//Punctuation marks are not processed
		//Move all letters three positions to the right in the alphabet 
		if(a[i]>='x'&&a[i]<='z'||a[i]>='X'&&a[i]<='Z') a[i]-=23;//Determine if it is in the last three letters, if so, special treatment
		else if(a[i]>='a'&&a[i]<='w'||a[i]>='A'&&a[i]<='W') a[i]+=3;//Otherwise, handle it normally
		//Punctuation marks are not processed
	}
	for(int i=a.size()-1;i>-1;i--)
	{
		//Store and output in reverse order
		cout<<a[i];
	}
	return 0;
}
