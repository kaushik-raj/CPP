#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    static int count;
    public:
      void setData(){
        cout<<"Enter id "<<endl;
        cin>>id;
        count++;
    };
    void getdata(){
        cout<<"the id is "<<id<<"emp.no "<<count<<endl;

    };
};
int Employee::count;

int main () {
    Employee harry , kaushik;
    harry.setData();
    harry.getdata();
    kaushik.setData();
    kaushik.getdata();
    return 0;
}