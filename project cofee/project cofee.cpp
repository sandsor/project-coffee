

#include <iostream>
#include <string>

int age;
int yes = true; 
int no = false;
bool answ;

int main()
{
    std::cout << "Hello what's your name?\n";
    std::string Fullname;
    std::getline(std::cin, Fullname);
    std::cout << "What's your age?\n";
    std::cin >> age;
    std::cout << "Do you like coffee?\n";
    std::cin >> answ;
    if (bool answ = true) {
        system("cls");
        std::cout << "Your name is " << Fullname << "\n";
        std::cout << "you are " << age << "years old\n";
        std::cout << "It seems you like coffee\n";
        system("pause");
    }
    if (bool answ = false) {
        system("cls");
        std::cout << "Your name is " << Fullname << "\n";
        std::cout << "you are " << age << " years old\n";
        std::cout << "It seems you don't like coffee\n";
        system("pause");
    }


}
