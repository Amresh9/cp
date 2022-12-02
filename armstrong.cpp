#include <bits/stdc++.h>
using namespace std;
 int count(int n){
 int count = 0;
 while(n>0){
 	n=n/10;
 	++count;
 }
 return count;
 }
int main(int argc, char const *argv[])
{
	int t;cin>>t;
	while(t--){

		int start,end;cin>>start>>end;
		for (int i = start; i <=end; ++i)
		{
		    int digit = count(i);
		    int arm = 0;
		    int test = i;
		    while(test>0){
		    	int last = test%10;
		    	arm += pow(last,digit);
		    	test = test/10;

		    }

if (arm == i)
{
	cout<<i<<endl;
}
}
}
	return 0;
}
