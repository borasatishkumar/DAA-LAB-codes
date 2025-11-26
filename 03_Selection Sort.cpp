
#include<iostream>
using namespace std;
void sorting(int arry[],int size){
    int temp ;
    for (int i=0 ;i<size-1;i++){ //minmum value is stored in min variable i mean index stating value ;
       int min=i;
       for (int j=i+1;j<size;j++){ // the next value is compare with minimum value  untill loop exit ;
        if(arry[min] > arry[j]){
            temp=arry[min];      //
            arry[min]=arry[j];   //  these three lines are swapping ;
            arry[j]=temp;        //
        }
       }
    }
}
int main () {
    int n;
    n=5;
    int arry[10]={4,1,5,3,7,9};
    cout << "before sorting : ";
    for(int i=0; i<=n;i++){
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    sorting(arry,n);
     cout << "after sorting : ";
    for(int i=0; i<=n;i++){
        cout<<arry[i]<<" ";
    }
    cout<<endl;
}



//second method code


// #include<iostream>
// using namespace std;
// int main(){
//         cout<<"Enter size of array";
//     int size;
//     cin>>size;

//     int array [size];
//     for(int ind=0;ind<size;ind++)
//     {
//         cout<<"Enter array element at index "<<ind;
//         cin>>array[ind];
//     }note

//     // selection sort logic
//     for(int i = 0 ;i <size-1;i++){
//         int min = i;
//         for(int j = i+1;j<size;j++){
//             if(array[min]>array[j]){
//                 min = j;
//             }
//         }
//         if(i!=min){
//             int temp = array[min];
//             array[min] = array[i];
//             array[i] = temp;
//         }
//     }
//     return 0;
// }
