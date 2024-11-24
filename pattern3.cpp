#include<iostream>
    #include<string.h>
        using namespace std;
    int main(){
            int i;
        char txt[]="welcome";
        int n=strlen(txt);

         
        for(i=n;i>=1;i--)
        {
            cout.write(txt,i);
            cout<<endl;
        }

    }
