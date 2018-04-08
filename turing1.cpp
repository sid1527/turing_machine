#include<iostream>
#include<cstring>
using namespace std;

char str[25];
int n;

class turing
{
	public:
	void push(char x,char y,int i)
	{
		str[i]=y;
	}
};

int main()
{
	int i=0,j=0;
	gets(str);
	turing st;
	n=strlen(str);
	while (str[i]=='b') 
	{
		st.push('b','b',i);
		i++;
	}
	while (str[i]=='1'||str[i]=='0')
	{
		if(str[i]=='1')
		st.push('1','X',i);
		if(str[i]=='0')
		st.push('0','Y',i);
		i++;
	}
	i--;/*
	while (str[i]=='X'||str[i]=='Y')
	{
		if(str[i]=='X')
		st.push('X','X',i);
		if(str[i]=='Y')
		st.push('Y','Y',i);
		i--;
	}
	i++;*/
	while(str[i]!='b')
	{
		if(str[i]=='X')
		{
			st.push('X','1',i++);
			while (str[i]=='1'||str[i]=='0')
			{
				if(str[i]=='1')
				st.push('1','1',i);
				if(str[i]=='0')
				st.push('0','0',i);
				i++;
			}
			if(str[i]=='b')
			{
				st.push('b','1',i--);
			}
		}
		if(str[i]=='Y')
		{
			st.push('Y','0',i++);
			while (str[i]=='1'||str[i]=='0')
			{
				if(str[i]=='1')
				st.push('1','1',i);
				if(str[i]=='0')
				st.push('0','0',i);
				i++;
			}
			if(str[i]=='b')
			{
				st.push('b','0',i--);
			}
		}
		while (str[i]=='1'||str[i]=='0')
			{
				if(str[i]=='1')
				st.push('1','1',i);
				if(str[i]=='0')
				st.push('0','0',i);
				i--;
			}
	}
	puts(str);
	return 0;
}
