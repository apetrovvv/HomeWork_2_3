#include <iostream>

using namespace std;

class Calculator{
    private:
        double num1;
        double num2;
    public:
        double add(){
            double result = this->num1 + this->num2;
            return result;
        }
        double multiply(){
            double result = this->num1 * this->num2;
            return result;
        }
        double subtract_1_2(){
            double result = this->num1 - this->num2;
            return result;
        }
        double subtract_2_1(){
            double result = this->num2 - this->num1;
            return result;
        }
        double devide_1_2(){
            double result = this->num1 / this->num2;
            return result;
        }
        double devide_2_1(){
            double result = this->num2 / this->num1;
            return result;
        }
        bool set_num1(double num1){
            if(num1!=0){
                this->num1 = num1;
                return true;
            }
            else return false;
        }
        bool set_num2(double num2){
            if(num2!=0){
                this->num2 = num2;
                return true;
            }
            else return false;
        }
        void print_result(){
            cout << "num1 + num2 = " << add() << endl;
            cout << "num1 - num2 = " << multiply() << endl;
            cout << "num2 - num1 = " << subtract_1_2() << endl;
            cout << "num1 * num2 = " << subtract_2_1() << endl;
            cout << "num1 / num2 = " << devide_1_2() << endl;
            cout << "num2 / num1 = " << devide_2_1() << endl;
        }
};

int main(){
    Calculator calc1;
    double num1, num2;
    while (true)
    {
        while (true)
        {
            cout << "Введите num1: ";
            cin >> num1;
            if (calc1.set_num1(num1)) break;
            else {
                cout << "Неверный ввод!"<< endl;
            }
        }
        while (true)
        {
            cout << "Введите num2: ";
            cin >> num2;
            if (calc1.set_num2(num2)) break;
            else {
                cout << "Неверный ввод!"<< endl;
            }
        }
        calc1.print_result();
    }
}