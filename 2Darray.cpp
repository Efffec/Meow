// * Input and print
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][4];
//     //array input-->row-wise
//     for(int i=0 ; i<3 ; i++){
//         for(int j=0; j<4 ; j++){
//             cin>>arr[i][j];
//         }
//     }
//     //array input-->coloumn wise
//     for(int i=0; i<4 ; i++){
//         for(int j=0; j<3 ; j++){
//             cin>>arr[j][i];
//         }
//     }

//     //printing the array
//     for(int i=0 ; i<3 ; i++){
//         for(int j=0 ; j<4 ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// **Linear Search in Multi-Dimenshional Array */
// #include<iostream>
// using namespace std;
// 
// bool isPresent(int arr[][4] , int target , int row , int col){
    // for(int row=0; row<3 ; row++){
        // for(int col=0; col<4 ; col++){
            // if(arr[row][col]==target){
                // return 1;
            // }
        // }
    // }
    // return 0;
// }
// int main(){
    // int arr[3][4];
    // cout<<"Enter the Elements for you 2-D Array"<<endl;
    // for(int row = 0 ; row<3 ; row++){
        // for(int col = 0; col<4 ; col++){
            // cin>>arr[row][col];
        // }
    // }
    // for(int row = 0 ; row<3 ; row++){
        // for(int col = 0; col<4 ; col++){
            // cout<<arr[row][col];
        // }
        // cout<<endl;
    // }
// 
    // cout<<"Enter the element you want to search"<<endl;
    // int target;
    // cin>>target;
// 
    // if(isPresent(arr,target,3,4)){
        // cout<<"Element is present in the 2-D Array "<<endl;
    // }
    // else{
        // cout<<"Element is NOT present in the 2-D Array"<<endl;
    // }
    // return 0;
// }
// 


//**Row-wise sum  */
// #include<iostream>
// using namespace std;

// int RowWiseSum(int arr[][4] , int m , int n){
    // cout<<"Printing sum-> "<<endl;
    // for(int i=0; i<3 ; i++){
        // int sum=0;  
        // for(int j=0 ; j<4;j++){
            // sum+=arr[i][j];
        // }
        // cout<<sum<<" ";
    // }
    // cout<<endl;

// }
// int main(){
    // int arr[3][4];

    // cout<<"Enter the elements for the array "<<endl;
    // for(int i=0; i<3;i++){
        // for(int j=0; j<4 ; j++){
            // cin>>arr[i][j];
        // }
    // }
    // for(int i=0; i<3;i++){
    // for(int j=0; j<4 ; j++){
        // cout<<arr[i][j];
        // }
    // }
    // cout<<endl;
    // 
    // cout<<RowWiseSum(arr,3,4)<<endl;
    // return 0;
// }

