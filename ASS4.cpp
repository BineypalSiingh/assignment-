#include <iostream>
using namespace std;
class Rectangle
{
private:
    float l;
    float b;
public:
    Rectangle()
    {
        l = b = 0;
    }
    Rectangle(float l, float b)
    {
        this->l = l;
        this->b = b;
    }
    Rectangle(float a)
    {
        l = b = a;
    }
    float area()
    {
        return l * b;
    }
};
int main()
{

    Rectangle r1;
    Rectangle r2(11.2);
    Rectangle r3(12, 13.2);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
}

q2
class Rectangle
{
private:
    float l;
    float b;
public:
    Rectangle()
    {
        this->l = l;
        this->b = b;
        cout << "Constructor called\n";
    }
    Rectangle(float a)
    {
        l = b = a;
        cout << "Square constructor called\n";
    }
     Rectangle(float l,float b)
    {
      this->l = l;
      this->b = b;
        
    }
    float area()
    {
        return l * b;
    }
    ~Rectangle()
    {
        cout << "Destructor called\n";
    }
};
int main()
{
    Rectangle arr[3] = {
        Rectangle(),       
        Rectangle(5, 4),    
        Rectangle(3)        
 };
    for (int i = 0; i < 3; i++)
    {
        cout << "Area of rectangle " << i + 1 << " = " << arr[i].area() << endl;
    }
    return 0;
}

q3
class test{
private:
    int a;
    int b;
public:
    ~test(){
        cout << "Destroyed!" << endl;
    }
};

int main(){
    test c;
    return 0;
}
q4  
class Rectangle
{
private:
    float l;
    float b;
public:
    Rectangle()
    {
        this->l = l;
        this->b = b;
        cout << "Constructor called\n";
    }
    Rectangle(float a)
    {
        l = b = a;
        cout << "Square constructor called\n";
    }
    Rectangle(float l, float b)
    {
        this->l = l;
        this->b = b;
    }
    float area()
    {
        return l * b;
    }
    ~Rectangle()
    {
        cout << "Destructor called\n";
    }
};
int main()
{
    int *n = new int(10);
    float *x = new float(11.3);
    int *arr = new int[10];
    float *arr2 = new float[10];
    Rectangle *r1 = new Rectangle();
    Rectangle *r2 = new Rectangle[10];
    delete n;
    delete x;
    delete[] arr;
    delete[] arr;
    delete r1;
    delete[] r2;
}