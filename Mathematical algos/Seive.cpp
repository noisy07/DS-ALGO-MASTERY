#include <iostream>
using namespace std;
int main()
{
    printf("Enter the upper limit of Number\t");
    int n;
    cin>>n;
    int i=0;
    int a[n+1];
    for(i=0;i<=n;i++){
        a[i]=1;
    }
    a[0]=1;
    a[1]=1;
    for(int j=2;j<=n;j++){
        if(a[j]==1){
        i = 2*j;
        while(i<=n){
            a[i]+=1;
            i+=j;
        }
    }
    }
    int x;
    while(true){
        cout<<"Enter number to check primality or 0 to exit\t";
        cin>>x;
        if(x==0) break;
        else if(a[x]==1){cout<<"Prime"<<endl;}
        else cout<<"Composite"<<endl;
    }
}
