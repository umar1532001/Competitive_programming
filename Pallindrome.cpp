#include <iostream>
#include <array>
#include<cmath>
#include<vector>

using namespace std;

void solve(int n)
{
    int org=n;
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    rev==org?cout<<"Yes Pallindrome":cout<<"No";
    
}



int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n;
    cin>>n;
    solve(n);
    

}
