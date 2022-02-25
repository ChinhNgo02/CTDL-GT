#include<bits/stdc++.h>
using namespace std;
int thuannghich(string a)
{
	int m=a.length();
	for(int i=0;i<m/2;i++)
	{
		if(a[i]!=a[m-i-1]) return 0;
	}
	if(m<2) return 0;
	return 1;
}
bool cmp(string a,string b)
{
	if(a.length()>b.length()) return true;
 
	if(a.length()==b.length())
	{
		if(a>b) return true;
	}
	return false;
}
 int main()
{
	string a;
	string key[1000];
	int count=0;
    while(cin>>a)
    {
    	if(thuannghich(a))
    	{
    		key[count]=a;
    		count++;
		}
	}	
	sort(key,key+count,cmp);
 
	for(int i=0;i<count;i++)
    { 
        int dev=0;
 
    	for(int j=i;j<count;j++)              
    	{
    		if(key[i]==key[j]){ dev++;}
		}
 
		int trung =0;
 
		for( int j=0;j<i;j++ )                
		{
			if(key[i]==key[j]){ trung++; break; }	
		}
 
	    if(trung==0) { cout<<key[i]<<" "<<dev<<endl; }
	}
}