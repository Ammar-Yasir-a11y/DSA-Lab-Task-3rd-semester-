#include <iostream>
using namespace std;

int main() {
    int arr[5]={10,20,30,40,50};
    int n=5;
    int pos=3;
    int value=30;
    cout<<"The total length of array: "<<n<<endl;
    
    for(int i=0;i<5;i++){
    	cout<<"The index number of array "<<i<<" is : "<<arr[i]<<endl;
	}
    cout<<"======================================="<<endl;
     for(int i=pos;i<n;i++){
     	arr[i]=arr[i+1];
	 }
	 n=n-1;
	  cout<<"The total length of array after deleting : "<<n<<endl;
	  for(int i=0;i<5;i++){
      cout<<"The index number of array "<<i<<" is : "<<arr[i]<<endl;
	}
}
