#include <iostream>

using namespace std;

int main()
{

 int n, s=0;
cout<<" nhap n=:";
cin>>n;
 for(int i=1;i<=n/2;i++)
    if(n%i==0)
        s=s+i;

if(s==n)
    cout<<"so<<n<< la so hoan thien:";
else{
cout<<"so<<n<< la so khong hoan thien:";
}



    return 0;
}
