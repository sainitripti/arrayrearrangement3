#include<iostream>
using namespace std;

void swap(int *a,int *b);
void wavesort(int ar[],int n);
void print(int ar[],int n);

int main()
{
 int ar[]={1,2,3,4,5,6,7};
 int n=sizeof(ar)/sizeof(ar[0]);
 print(ar,n);
 wavesort(ar,n);
 print(ar,n);
 return 0;
}

void swap(int *a,int *b)
{
 int temp=*a;
 *a=*b;
 *b=temp;
}

void wavesort(int ar[],int n)
{
 for(int i=0;i<n;i+=2)
 {
  if(i>0&&ar[i]<ar[i-1])
   swap(&ar[i],&ar[i-1]);

  if(i<n-1&&ar[i]<ar[i+1])
   swap(&ar[i],&ar[i+1]);
 }
}

void print(int ar[],int n)
{
 cout<<"\n";
 for(int i=0;i<n;i++)
   cout<<ar[i]<<"  ";
 cout<<"\n";
}
