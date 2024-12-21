#include <iostream>
using namespace std;

int main(){
    int n=10;
    int i=1;
    int sum =0;

    while(i<=n)
    {   
        if(i % 2!=0){
            sum +=i;
            cout<<sum<<endl;
    }

    i++;
        }
       
        
         

    cout<<"the sum of odd numbers is : \n"<<sum<<endl;
    return 0;
}