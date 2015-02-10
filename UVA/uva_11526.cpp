/*
UVA 11526
Author: Akkas Uddin Haque

*/
#include <cstdio>
#include <cmath>
using namespace std;


int main()
{
	int t,n;

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n<=0)
			printf("%lld\n",0);
		else
		{

			int len  = int(sqrt(n)), i;
			int prev_term = n;
			int curr_term;
			long long int sum = 0; 
			for( i = 1; i<=len ; i++)
			{
				//sum+=n/i;
				curr_term = n/i;
				sum += curr_term + (prev_term - curr_term) * (i - 1);
				prev_term = curr_term;
			}

			//sum = 2*sum-len*len;
			if(n/len > len)
			{
				sum += (prev_term - n/i) * (i - 1);
			}
			printf("%lld\n",sum);
		
		}
	}
}
