class Base
{
   protected: 
       int a;
       int b;
   private:
       int c;
       int d;
   public:
       int e;
};
class A: public Base{
    
};

class B: private Base{
    
};

class C: protected Base{
    
};

int main(){

    A obj;
    return 0;
}