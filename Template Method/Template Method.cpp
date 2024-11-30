
#include <iostream>

class AbstractClass {
public:
   
    void templateMethod() const {
        stepOne();
        stepTwo();
        stepThree();
    }

    virtual ~AbstractClass() {}

protected:
  
    virtual void stepOne() const = 0;


    virtual void stepTwo() const = 0;


    virtual void stepThree() const {
        std::cout << "������ ��������� stepThree" << std::endl;
    }
};

class ConcreteClass : public AbstractClass {
protected:
    void stepOne() const override {
        std::cout << "��������� ��������� stepOne" << std::endl;
    }

    void stepTwo() const override {
        std::cout << "��������� ��������� stepTwo" << std::endl;
    }

    void stepThree() const override {
        std::cout << "��������� ��������� stepThree" << std::endl;
    }
};

int main() {
    ConcreteClass concreteClass;
    concreteClass.templateMethod();

    return 0;
}
