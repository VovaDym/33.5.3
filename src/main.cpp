#include <iostream>
#include <string>
#include <map>
#include "registry.h"



int main()
{
    Registry<int, std::string> myRegistry;
    std::string commands[5]{ "add", "remove", "print", "find", "exit" };

    bool exit = false;
    while (!exit)
    {
        
        
        std::string command;
        bool flag = false;
        while (!flag)
        {
            std::cout << std::endl;
            std::cout << "1. add;" << std::endl;
            std::cout << "2. remove;" << std::endl;
            std::cout << "3. print;" << std::endl;
            std::cout << "4. find;" << std::endl;
            std::cout << "5. exit." << std::endl << std::endl;
            std::cout << "Enter command: " << std::endl;
            std::cin >> command;
            for (int i = 0; i < 5; ++i)
            {
                if (command == commands[i])
                {
                    break;
                }
                else
                {
                    flag = true;
                    system("cls");
                    break;
                }
            }
            if (command == "add")
            {
                myRegistry.add();     
            }
            else if (command == "remove")
            {
                myRegistry.remove();   
            }
            else if (command == "print")
            {
                myRegistry.print();
            }
            else if (command == "find")
            {
                myRegistry.find();
            }
            else if (command == "exit")
            {
                exit = true;
            }
        }     
    }
}