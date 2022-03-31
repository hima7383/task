#include <bits/stdc++.h>
#define far(i,b,c) for(int i = b ; i <c;i++)
using namespace std;


int bin_serch(int arr[],int l,int h,int key)
{
    int m= (l+h)/2;
    while(l<=h)
    {
        if(arr[m]==key)
        {
            return m;
        }
        if(arr[m]>key)
        {
            m=h-1;
        }
        else
        {
            m=l+1;
        }




    }

}
void remove(std::vector<int> &v)
{
    auto end = v.end();
    for (auto it = v.begin(); it != end; ++it) {
        end = std::remove(it + 1, end, *it);
    }

    v.erase(end, v.end());
}


int main(){


int test;
cin>>test;
while(test--)
{
string x;
cin>>x;
vector <char> jj(26);
map <char,int> freq;
int flag=0;
for(int i = 0 ; i <x.size();i++)
{
    jj[i]=x[i];
}
for(int i = 0 ; i <x.size();i++)
{
    if(jj[i]==jj[i+1]){
        jj.erase(jj.begin()+i);
         jj.erase(jj.begin()+(i+1));
    }
}
for(auto x:jj)
{
    cout<<x;
}
for(int i = 0 ; i <jj.size();i++)
{
    freq[jj[i]]++;
}
for(int i = 0 ; i <jj.size();i++)
{
    cout<<freq[i]<<" ";
}

for(int i = 0 ; i <jj.size();i++)
{
    if (freq[jj[i]]%2==0){flag++;};
}

cout<<flag<<endl;






}




return 0;

}


