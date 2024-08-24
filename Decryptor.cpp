#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;//Create string variables
	int b;//Placeholder
	cout<<"Welcome to use the decryptor that comes with the Simple Encryptor!"<<endl;
	cout<<"Just input the text that needs to be decrypt into the area below"<<endl;
	cout<<"If you want to close the program, simply close the window"<<endl;
	cout<<"Enter the text that needs to be decrypt, press enter to end:"<<endl;
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
	cout<<"The decrypted text is:"<<endl<<endl;
	for(int i=a.size()-1;i>-1;i--)
	{
		//Store and output in reverse order
		cout<<a[i];
	}
	cout<<endl<<endl<<"Decryption complete, close the window to end the program:)";//Use a few more carriage returns to make it more aesthetically pleasing
	cin>>b;//Use input to ensure that the program will not be closed. If anyone has a better way to teach me, my C++skills are too poor:(
	return 0;
}
