#include<iostream>
using namespace std;
class set
{
    int m,n;
  public:
    void input (void);
    void display(void);

};
void set::input (void )
{
    cout<<"input values of m and n"<<endl;
    cin>>m>>n;
}
void set::display ()
{
    if (m<=n)
        cout<<"smallest value ="<<m
    else
        cout<<"smallest value ="<<n;
}
int main()
{
    set A;
    A.input();
    A.display();
    return 0;
}
