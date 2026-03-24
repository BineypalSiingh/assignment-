#include <iostream>
using namespace std;

class Student
{

public:
    void Marks(int m)
    {
        setMarks(m);
    }

    void disp()
    {
        cout << marks << endl;
    }

private:
    int marks;
    void setMarks(int marks)
    {
        this->marks = marks;
    }
};

int main()
{

    Student s1;
    s1.Marks(10);
    s1.disp();

    Student *ptr = &s1;

    (*ptr).disp();
    ptr->disp();
}


Q2
class c2;
class c1
{
private:
    int x;

public:
    friend void swap(c1 *a, c2 *b);
    c1(int x)
    {
        this->x = x;
    }
    void disp()
    {
        cout << x << endl;
    }
};
class c2
{
private:
    int y;

ublic:
    friend void swap(c1 *a, c2 *b);
    c2(int y)
    {
        this->y = y;
    }
    void disp()
    {
        cout << y << endl;
    }
};
void swap(c1 *a, c2 *b)
{
    int temp = a->x;
    a->x = b->y;
    b->y = temp;
}
int main()
{
    c1 obj1(10);
    c2 obj2(20);
    swap(&obj1, &obj2);
    obj1.disp(); // 20
    obj2.disp(); // 10
}

Q3
class secondClass;
class firstClass{
    int i;
public:
    firstClass(int x) : i(x) {}
    void show(){
        cout << i << endl;
    }
    friend int sumValues(firstClass a, secondClass b);
};

class secondClass{
    int j;
public:
    secondClass(int x) : j(x) {} 
    void show(){
        cout << j << endl;
    }   
    friend int sumValues(firstClass a, secondClass b);
};

inline int sumValues(firstClass a, secondClass b){
    return a.i + b.j;
}

int main(){
    firstClass a(5);
    secondClass b(10);
    cout << "The sum of data values of both objects is : " << sumValues(a, b) << endl;
    return 0;
}

Q4

class myClass{
private:
    int data;
public:
    myClass(int x) : data(x){}
    void show(){
        cout << "Data of this myClass object is : " << data << endl;
    }
    friend class friendClass;
};

class friendClass{
public:
    static void showFriendData(myClass a){
        cout << "Data of the object belonging to myClass as accessed by friend class : " << a.data << endl;
    }
};

int main(){
    myClass obj(15);
    obj.show();
    friendClass::showFriendData(obj);
    return 0;}


Q5

class Rectangle {
    int l;
    int b;
    public:
   Rectangle (int l , int b) {
    this->l = l;
    this->b  = b;
   }
   int dispArea () {
      return l*b;
   }
};

int main () {
Rectangle arr [3] = {{10,20},{20,30},{30,40}};
for (int i = 0 ; i<3 ; i++) {
    cout<<"Area of rectangle "<<i+1 <<" is : "<<arr[i].dispArea()<<" unit sq."<<endl;
}  
}

Q6
inline int cube (int x) {
    return x*x*x;
}

int main () {
    int x;
    cout<<"Enter a number : "<<endl;
    cin>>x;
    cout<<cube(x);
}
Q7
class myClass{
private:
    int data;
public:
    myClass(int x):data(x){}
    static myClass byValue(myClass obj);
    static myClass byReference(myClass *obj);
    void show();
};
void myClass::show(){
    cout << "Data: " << data << endl;
}
myClass myClass::byValue(myClass obj){
    myClass a(0);
    a.data = obj.data;
    obj.data = 100;
    return a;
}
myClass myClass::byReference(myClass *obj){
    myClass a(0);
    a.data = obj->data;
    obj->data = 100;
    return a;
}
int main(){
    myClass A(5), B(11);
    cout << "An object is created and returned with the same data as the passed object however the function fails to modify the original data." << endl;
    cout << "\nValue of the returned object : ";
    myClass::byValue(A).show();
    cout << "\nValue of the passed object : ";
    A.show();
    cout << "An object is created and returned with the same data as the passed object however the function also modifies the original data." << endl;
    cout << "\nValue of the returned object : ";
    myClass::byReference(&B).show();
    cout << "\nValue of the passed object : ";
    B.show();
    return 0;
}
