#include<iostream>
using namespace std;
int Linear_search(int arr[],int n,int svalue)
{
for(int i=0;i<n;i++)
{
if(svalue==arr[i])
{
    return i;
}}
return -1;
}
int main()
{
int size,search_value;
cout<<"Enter the size of Array: ";
cin>>size;
int arr[size];
cout<<"Enter "<<size<<" numbers: ";
for(int i=0;i<size;i++)
cin>>arr[i];
cout<<"Enter the value which you want to be search: ";
cin>>search_value;
 int result=Linear_search(arr,size,search_value);
 if(result>=0)
 {
cout<<"The value "<<arr[result]<<" was found...";
}
else
{
cout<<"The value "<<search_value<<" was not found...";
}
}
