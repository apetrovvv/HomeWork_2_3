#include <iostream>

using namespace std;

class Counter{
    private:
        int count;
    public:
        Counter(){
            count = 1;
        }
        Counter(int count){
            this->count = count;
        }
        void increment(){
            this->count++;
        }
        void decrement(){
            this->count--;
        }
        void view_counter(){
            cout << this->count << endl;
        }
};

int main(){
    Counter counter;
    cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    string answel;
    cin >> answel;
    if(answel == "да"){
        int count;
        cout << "Введите начальное значение счётчика: ";
        cin >> count;
        counter = Counter(count);
    }
    else {
        counter = Counter();
    }
    char command;
    while(true){
        cout << "Введите команду ('+', '-', '=' или 'x'): ";
        cin >> command;
        switch (command)
        {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            counter.view_counter();
            break;
        case 'x':
            return 0;
        default:
            cout << "Неверная команда!" << endl;
            break;
        }
    }
}