#include<iostream>
using namespace std;
int main()
{                           /*n =1 = I hate it
                              n =2 =I hate that I love it
                              n =3 = I hate that I love that I hate it
                            */
     int num;                 
    cin>>num;  
   
    if(num==1)   
        cout<<"I hate it";
    else if(num>1)
        cout<<"I hate that";
    for(int i=2; i<num; i++)
    {

        if(i%2==1 && i!=num)
            cout<<" I hate that";

        else if(i%2==0 && i!=num)
            cout<<" I love that";
    }
    if(num%2==0 && num>1)
        cout<<" I love it";
    else if(num>1)
        cout<<" I hate it";
    cout<<endl;
    return 0;
}
