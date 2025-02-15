#include<iostream>
using namespace std;

class sum
{
    int a;
    public:
    void getdata(int a,int b){
        int sumetion=a+b;
        cout<<sumetion;
    }



};
int main(){
    sum s1;
    s1.getdata(10,20);
    
}