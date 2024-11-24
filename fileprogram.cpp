#include<iostream>
    #include<fstream>
    #include<string.h>
        using namespace std;
    int main(){
            int i;
        char txt[]="welcome";
        int n=strlen(txt);

         ofstream out;
        out.open("safal.txt");
        for(i=1;i<=n;i++)
        {
            cout.write(txt,i);
            cout<<endl;
            out.close();
        }

    }
