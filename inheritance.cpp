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
    private:
        int val;

};

class B: public A, public Base{
    
};

class C: protected B{
    
};

int main(){

    A obj;
    return 0;
}