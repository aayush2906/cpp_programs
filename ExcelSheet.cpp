#include<iostream>
using namespace std;

 string title(int number)
{
    return number==0?"":title((number-1)/26)+(char)((number-1)%26+'A');
}

int main()
 {
     int t;
        cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        cout<<title(num)<<"\n";
    }
    return 0;


}
