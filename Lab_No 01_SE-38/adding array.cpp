#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 20, 30, 40, 50};
    int n = 5;
    int position = 3;
    int value = 5;
      cout<<"\nThe total lenght of array befor adding is: "<<n<<endl;
    for(int i=0;i<5;i++){
    	cout<<"The array element at index "<<i<<" is: "<<arr[i]<<endl;
	}
 
   cout<<"************************************************************"<<endl;
   for(int i=n;i>=position;i--){
   	arr[i]=arr[i-1];
   }
   arr[position-1]=value;
   n=n+1;
    
    for(int i=0;i<6;i++){
    	cout<<"The array element at index "<<i<<" is: "<<arr[i]<<endl;
	}
   cout<<"\nThe total lenght of array after adding is: "<<n;
   
}
