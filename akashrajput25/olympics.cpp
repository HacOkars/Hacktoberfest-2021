#include <iostream>
using namespace std;

int main() {
	int count;
	cin>>count;;
	int B1[count],S1[count],G1[count],B2[count],S2[count],G2[count];
	
	for(int i=0;i<count;i++)
	{
	    cin>>G1[i]>>S1[i]>>B1[i]>>G2[i]>>S2[i]>>B2[i];
	    cout<<endl;
	}
	int c1sum[count],c2sum[count],finsum[count];
	for(int i=0;i<count;i++)
	{
	    c1sum[i]=G1[i]+S1[i]+B1[i];
	    c2sum[i]=G2[i]+S2[i]+B2[i];
	}
	for(int i=0;i<count;i++)
	{
	    if(c1sum[i]>c2sum[i])
	    {
    	    finsum[i]=1;
	    } else {
	        finsum[i]=2;
	    }
	    cout<<finsum[i]<<endl;
	}
}

