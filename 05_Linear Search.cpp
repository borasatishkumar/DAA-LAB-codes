#include <iostream>
using namespace std;
void linear_search(int array[],int n, int key){

    int i=0,count =0;
    for(i=0;i<=n;i++){
        if(array[i]==key)
        {
            cout <<"element is found at position : "<<i+1<<endl;
            count = count+1;
        }
       
    }
     if(count==0){
            cout <<"element is not found in this array "<<endl;
        }
    }
int main(){
    int i, n, key;
      n = 6;
     int array[10]={12,23,54,76,34,33,};
     key = 54;
     linear_search(array,n,key);
     return 0;
}