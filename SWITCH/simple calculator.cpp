/*

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,res;
    cout<<"enter the 2 number";
    cin>>n1>>n2;

    int ch;
    cout<<"1 -- sum"<<endl;
    cout<<"2 -- sub"<<endl;
    cout<<"3 -- mul"<<endl;
    cout<<"4 -- div"<<endl;

    cout<<"enter the opeartion"<<endl;
    cin>>ch;

    switch(ch)
    {
        case 1 :cout<<"u are selected sum operation"<<endl;
        res=n1+n2;
        break;

        case 2 :cout<<"u are selected sub operation"<<endl;
        res=n1-n2;
        break;


        case 3 :cout<<"u are selected mul operation"<<endl;
        res=n1*n2;
        break;

        case 4 :cout<<"u are selected div operation"<<endl;
        res=n1/n2;
        break;
    }
    cout<<res<<endl;

}

*/
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;

    char ch;
    cout<<"enter the opearation"<<endl;
    cin>>ch;
    switch (ch)
    {
        case '+' :cout<<n1+n2<<endl;
                  break;

        case '-' :cout<<n1-n2<<endl;
                  break;

        case '*' :cout<<n1*n2<<endl;
                  break;


        case '/' :cout<<n1/n2<<endl;
                  break;
    }






}
