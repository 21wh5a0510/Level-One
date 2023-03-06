#include <iostream>  
using namespace std;  
void Revarr()  
{
    int num,i,j,temp;  
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++)  
    {
        cin>>arr[i];  
    }
    for(int i=num-1;i>=0;i--)
    {
    	cout<<arr[i]<<" ";
	}
}
int main()  
{
    Revarr();
    return 0;  
}

/*
#include <iostream>  
using namespace std;  
void Revarr(int a[],int size)  
{
    int i,j,temp;
    j=size-1;  
    for(i=0;i<j;i++,j--)
    {
        temp=a[i];  
        a[i]=a[j];  
        a[j]=temp;  
    }
}
int main()  
{
    int num,i,j,temp;  
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++)  
    {
        cin>>arr[i];  
    }
    Revarr(arr,num);
    for(i=0;i<num;i++)  
    {
        cout<<arr[i]<<" ";  
    }
    return 0;  
}


#include<iostream>
using namespace std;

int* demo(int a[],int size)
{
    int* tmp,a1=0;
	for(int i = size-1; i>=0; i--)
	{
		tmp[a1]=a[i]; 
		a1++;
	}
	return tmp;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	int* b; 
	b = demo(arr,n);
	cout<<"Array is: ";
	for(int i=0 ; i<n; i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
*/
