 #include<iostream>
 using namespace std;
 class B{
    public:
       B(){
          cout<<"B()\n";
       }
       virtual ~B(){ 
          cout<<"~B()\n";
       }
 };
 class D: public B{
    public:
       D(){
          cout<<"D()\n";
       }
       ~D(){
          cout<<"~D()\n";
       }
 };
 int main(){
    B *b = new D();
    delete b;
    return 0;
 }