#include <iostream>
#include <string>


using namespace std;

void compress(char *a)
{
    int c,i,j,k=0;
    for(i=0;a[i]!='\0';i++)
    {
        c=1;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]!=a[j])
                break;
            else
                c++;
        }
        a[k]=a[i];
        k++;
        if(c>1)
        {
            a[k] = (char)c + '0';
            k++;
        }
        i=j-1;
    }
    a[k++] ='\0';
}

int main()
{
    char s[10];
    cin>>s;
    cout<<"\nString is :"<<s<<endl;
    compress(s);
    cout<<"\nString is :"<<s<<endl;
    return 0;
}
