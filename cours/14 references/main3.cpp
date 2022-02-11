#include <iostream>
#include <string>

class Student {
    public:
        Student(std::string const & login)
        :_login(login) {
            return;
        }

        std::string & getLoginRef(void) {
            return this->_login;
        }

        std::string const & getLoginRefConst(void) const {
            return this->_login;
        }

        std::string *getLoginPtr(void) {
            return &(this->_login);
        }

        std::string const * getLoginPtrConst(void) const {
            return &(this->_login);
        }


    private:
        std::string _login;
};

int main() {

    Student         bob = Student("bfubar");
    Student const   jim = Student("jfubar");

    std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
    std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

    bob.getLoginRef() = "bobfubar";
    std::cout << bob.getLoginRefConst() << std::endl;

    *(bob.getLoginPtr()) = "bobbyfubar";
    std::cout << bob.getLoginRefConst() << std::endl;
    return 0;
}