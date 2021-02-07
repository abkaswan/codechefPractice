
#include <iostream>

using namespace std;

int main()
{
int t,n,s,min;
cin>>t;
while(t)
{
    min=0;
    cin>>s;
    cin>>n;
    if(n%2!=0)
    {
        n=n-1;
    }
    else
    {
        if(s==1)
        {
            min=1;
        }
        else if(s<=n)
        {
            if(s%2!=0)
            {
                min+=1;
            }
            min+=1;
            
        //cout<<min<<endl;   
        }
        
        else
        {
            if(s%2!=0)
            {
                s=s-1;
                min+=1;
                //cout<<min<<endl;          
            }
            //s is even now in any case so-->
            while(s%n!=0)
            {
                
                min=min + (s/n);
                s=s%n;
                
                //cout<<s%n<<endl;
                //cout<<min<<endl;
                n=n-2;
            }
            min+=s/n;
            //cout<<min<<endl;
        }
    }
    cout<<min<<endl;
    
    t--;
}

    return 0;
}
