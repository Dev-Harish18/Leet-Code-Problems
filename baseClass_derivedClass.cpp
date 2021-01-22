#include<iostream>
using namespace std;

class Car
{
    public:
        virtual void start(){
            cout<<"Car has started";
        };
};
class BMW:public Car{
    public:
        void start(){
            cout<<"BMW has started";
        }
};

int main(){
    Car *p=new BMW();
    p->start();
}