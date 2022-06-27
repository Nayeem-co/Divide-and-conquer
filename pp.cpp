#include<iostream>
using namespace std;

int fun(int x,int y){
    fun(x*x,y-1);
    if(y == 0){
        return 1;
    } 
}

int main(int argc, char const *argv[])
{
    int x;
    int y;
    cin>>x;
    cin>>y;

    cout<<fun(x,y);
    return 0;
}
