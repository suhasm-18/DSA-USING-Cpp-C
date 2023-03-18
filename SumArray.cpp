#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int A[5]={1,2,3,4,5};
    int sum=0 , n=5;
    for(int i=0; i<5 ;i++){
        sum = sum + A[i];
    };
    cout<<"sum is"<<sum<<endl;
    return 0;
}
