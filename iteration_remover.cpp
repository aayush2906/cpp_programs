#include<iostream>
using namespace std;

int removeIteration(int *a,int n);

main()
{
	int a[20];
	int n;
 	cout<<"Size of array";
 	cin>>n;
 	for(int i=0;i<n;i++)
 		cin>>a[i];
 	removeIteration(a,n);
 	
 	return(0);
}

						int removeIteration(int *a, int n)
						{
							int count=0;
							int b[20];
							cout<<"Your no.is::";
							for(int i=0;i<n;i++)
 								cout<<a[i]<<"\t";
 								
 							for(int i=0;i<n;i++)
 								{
								 for(int j=i+1;j<n;j++)
								 {
								 	if(a[i]==a[j])
								 	{
								 		b[i]=a[j];
								 		for(int k=j;k<n-1;k++)
										a[k]=a[k+1];
								 		j--;
								 		n--;
								 		count++;
									 }
								 }
							}
							cout<<"\n\nfinal product::";
							for(int i=0;i<n;i++)
 								cout<<a[i]<<"\t";
 							cout<<"\n\nNo. of repeatitions were ::"<<count;
							
							cout<<"\n\nRepeating numbers were::";
							for(int i=0;i<=count;i++)
								{
									for(int j=i;j<=count;j++)
										{if(a[i]==b[j])
										cout<<b[i]<<"\t";
									}
								}
							 
						}
