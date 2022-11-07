#pragma once
#include <iostream>
#include <string>
#include <map>


template <typename T>
T enterData()
{
    T value;
    std::cin >> value;

    return value;
}

template <typename Key, typename Value>

class Registry
{
public:
    void add()
    {
        std::cout << "Enter key: ";
        Key key = enterData<Key>();
        std::cout << "Enter value: ";
        Value value = enterData<Value>();

        system("cls");

        registry.insert(std::make_pair(key, value));
        std::cout << "Key: " << key << std::endl;
        std::cout << "Value: " << value << std::endl;
        std::cout << "Was added on registry" << std::endl;
        std::cout << "          " << std::endl;
    }

    void remove()
    {
        std::cout << "Enter key: ";
        Key key = enterData<Key>();

        system("cls");

        auto itf = registry.find(key);
        if (itf != registry.end())
        {
            registry.erase(key);
            std::cout << "Key: " << key << " was deleted " << std::endl;
            std::cout << "          " << std::endl;
        }
        else
        {
            std::cout << "Key: " << key << " doesn't find " << std::endl;
            std::cout << "          " << std::endl;
        }
    }

    void print()
    {
        system("cls");

        for (const auto& key : registry)
        {
            std::cout << "Key: " << key.first << '\t';
            std::cout << "Value: " << key.second << std::endl;
        }
    }

    void find()
    {
        std::cout << "Enter key: ";
        Key key = enterData<Key>();

        system("cls");

        auto itf = registry.equal_range(key);

        std::cout << "Key: " << key << std::endl;
        std::cout << "Value: ";
        
        while (itf.first != itf.second)
        {
            std::cout << itf.first->second << ' ';
            ++itf.first;
        }
        std::cout << "          " << std::endl;
    }

private:
    std::multimap <Key, Value> registry;
};