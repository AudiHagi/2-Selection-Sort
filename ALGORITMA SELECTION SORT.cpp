#include <iostream>
using namespace std;

int main ()
{
	int temp,n,smallestIndex,minIndex,index;
	
	cout<<"Number of Data : ";cin>>n;
	cout <<"======================"<<endl;
	cout<<endl;
	
	int bil[n];
	
	for (int a=0;a<n;a++)
	{
		cout << "Data ["<<a<<"]= ";cin >> bil[a];
	}
	
	cout <<"\n\n";
	cout <<"Data Before Ordered"<<endl;
	cout <<"======================"<<endl;
	for(int a=0;a<n;a++)
	{
		cout <<bil[a]<<" ";
	}
	cout <<endl;
	
	for(index=0;index<n-1;index++)
	{
		smallestIndex=index;
		for (minIndex=index+1;minIndex<n;minIndex++)
		{
			//if(bil[minIndex]<bil[smallestIndex]) //ASCENDING
			if(bil[minIndex]>bil[smallestIndex])   //DESCENDING
			{
				smallestIndex=minIndex;
			}
		}
		temp=bil[index];
		bil[index]=bil[smallestIndex];
		bil[smallestIndex]=temp;
	}
	
	cout<<endl;
	cout <<"Data After Ordered"<<endl;
	cout <<"======================"<<endl;
	for (int a=0;a<n;a++)
	{
		cout<<bil[a]<<" ";
	}
cout<< endl;

return(0);
}
