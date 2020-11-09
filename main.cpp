#include <iostream>

using namespace std;



   int slove(int x){

        int sum=0;
        while(x){
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
    int  main()
{
   int x;
   do{
    cout<<"nhap so:";
    cin>>x;
   } while (x<0&&x<=109);
   cout<<"tong cac chu so nhap vao:"<<slove(x) ;

    return 0;
}



