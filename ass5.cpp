#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class function\n";
    }
};
class Derived : public Base {
public:
    void show() {
        cout << "Derived class function\n";
    }
};
int main() {
    Base obj1;
    Derived obj2;
    obj1.display();
    obj2.display();
    obj2.show();
    return 0;
}

///q2

#include <iostream>
using namespace std;

class Base {
protected:
    int aim;
public:
    Base() {
        aim= 150;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "aim: " << aim << endl;
    }
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}

//q3


#include <iostream>
using namespace std;

class Base {
public:
    int z;
};

class PublicDerived : public Base { };
class ProtectedDerived : protected Base { };
class PrivateDerived : private Base { };

int main() {
    PublicDerived obj1;
    obj1.z = 50;
    cout << obj1.z << endl;
    return 0;
}

//q4

#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Inheritance Example\n"; }
};

class B : public A { };
class C : public A { };
class D : public B { };
class E { };

class F : public A, public E { };

int main() {
    B obj1;
    C obj2;
    D obj3;
    F obj4;
    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    return 0;
}

//q5

#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Constructor\n"; }
    ~Base() { cout << "Base Destructor\n"; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor\n"; }
    ~Derived() { cout << "Derived Destructor\n"; }
};

int main() {
    Derived obj;
    return 0;
}

//q6

#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Inheritance Example\n"; }
};

class B : public A { };
class C : public A { };
class D : public B { };
class E { };

class F : public A, public E { };

int main() {
    B obj1;
    C obj2;
    D obj3;
    F obj4;
    obj1.show();
    obj2.show();
    obj3.show();
    obj4.show();
    return 0;
}


//q7

#include <iostream>
using namespace std;

class Base {
protected:
    int aim;
public:
    Base() {
        aim= 150;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "aim: " << aim << endl;
    }
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}


//q9

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    string address;
public:
    Person(string n, string a) {
        name = n;
        address = a;
    }
};

class Staff : virtual public Person {
protected:
    int employee_id;
    string department;
public:
    Staff(string n, string a, int id, string d)
        : Person(n, a) {
        employee_id = id;
        department = d;
    }
};

class Student : virtual public Person {
protected:
    int student_id;
    string grade;
public:
    Student(string n, string a, int id, string g)
        : Person(n, a) {
        student_id = id;
        grade = g;
    }
};

class TeachingAssistant : public Staff, public Student {
public:
    TeachingAssistant(string n, string a, int eid, string d, int sid, string g)
        : Person(n, a),
          Staff(n, a, eid, d),
          Student(n, a, sid, g) {}

    void display() {
        cout << name << " " << address << " "
             << employee_id << " " << department << " "
             << student_id << " " << grade << endl;
    }
};

int main() {
    TeachingAssistant ta("Riya", "Mumbai", 555, "IT", 888, "B+");
    ta.display();
    return 0;
}
