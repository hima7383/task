#include <bits/stdc++.h>
#include<ctime>
using namespace std;
int main(){

srand(time(NULL));
int s = rand()%100;
int flag=0;
while(flag<=8)
{
    if(flag==0){cout<<"guese the number "<<endl<<"----------------------------------"<<endl;}

int x;
cin>>x;
if(x >s)
{
    cout<<"too high try again"<<endl<<"***************"<<endl;
    flag++;
}
else if(x<s)
{
    cout<<"too low try again"<<endl<<"****************"<<endl;
    flag--;
}
else
{
    cout<<"you found it!"<<endl;
    break;
}








}

}
