// new.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"
#include "conio.h"
using namespace std;
int funk(int N)
{
	int tmp,l,k,g,n=0;
	bool f=1;
	int *a;
	if(N==0)
	{cout<<"FALL:"; return 0;}
	a=new int;
    for(int i=1; ; i++)
	{
		tmp=N*i;
		for (l=0,g=tmp; g!=0; g=g/10, l++);
		for (int j=1; j<=l; j++)
		{
			k=tmp%10;
			for(int g=0; g<n; g++)
				if(a[g]==k)
				{f=0; break;}
			if (f==1)
			{a=(int*)realloc(a,(n+1)*sizeof(int)); a[n]=k; n++;}
			f=1;
			tmp=tmp/10;
		}
		if (n==10)
			return N*i;
	}
}
			



int _tmain(int argc, _TCHAR* argv[])
{
	cout<<funk(0)<<endl;
	cout<<funk(1)<<endl;
	cout<<funk(1692)<<endl;
	cout<<funk(23)<<endl;
	cout<<funk(192)<<endl;
	_getch();
}

