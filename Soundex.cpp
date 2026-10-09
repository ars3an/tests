#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string str;
    std::cin >> str;
    if (str.size() > 20){
        str.resize(20);
    }
    std::vector<char> letters = {'a', 'e', 'h', 'i', 'o', 'u', 'w', 'y'};
    std::vector<char> letters1 = {'b', 'f', 'p', 'v'};
    std::vector<char> letters2 = {'c', 'g', 'j', 'k', 'q', 's', 'x', 'z'};
    std::vector<char> letters3 = {'d', 't'};
    std::vector<char> letters4 = {'l'};
    std::vector<char> letters5 = {'m', 'n'};
    std::vector<char> letters6 = {'r'};
    for (size_t i = 1; i < str.size(); ++i){
        for (size_t j = 0; j < letters.size(); ++j){
            if (str.at(i) == letters.at(j)){
                str.erase(i, 1);
                --i; // Adjust index after erasing
                break; // Exit the inner loop since the character has been erased
            }
        }
    }
    for (size_t i = 1; i < str.size(); ++i){
        for (size_t j = 0; j < letters1.size(); ++j){
            if (str.at(i) == letters1.at(j)){
                str.at(i) = '1';
                break; // Exit the inner loop since the character has been replaced
            }
        }
    }
    for (size_t i = 1; i < str.size(); ++i){
        for (size_t j = 0; j < letters2.size(); ++j){
            if (str.at(i) == letters2.at(j)){
                str.at(i) = '2';
                break; // Exit the inner loop since the character has been replaced
            }
        }
    }
    for (size_t i = 1; i < str.size(); ++i){
        for (size_t j = 0; j < letters3.size(); ++j){
            if (str.at(i) == letters3.at(j)){
                str.at(i) = '3';
                break; // Exit the inner loop since the character has been replaced
            }
        }
    }
    for (size_t i = 1; i < str.size(); ++i){
        for (size_t j = 0; j < letters4.size(); ++j){
            if (str.at(i) == letters4.at(j)){
                str.at(i) = '4';
                break; // Exit the inner loop since the character has been replaced
            }
        }
    }
    for (size_t i = 1; i < str.size(); ++i){
        for (size_t j = 0; j < letters5.size(); ++j){
            if (str.at(i) == letters5.at(j)){
                str.at(i) = '5';
                break; // Exit the inner loop since the character has been replaced
            }
        }
    }
    for (size_t i = 1; i < str.size(); ++i){
        for (size_t j = 0; j < letters6.size(); ++j){
            if (str.at(i) == letters6.at(j)){
                str.at(i) = '6';
                break; // Exit the inner loop since the character has been replaced
            }
        }
    }
    for (size_t i = 1; i < str.size(); ++i){
        if (str.at(i) == str.at(i - 1)){
            str.erase(i, 1);
            --i; // Adjust index after erasing
        }
    }
    if (str.size() > 4){
        str.resize(4);
    }else while (str.size() < 4){
            str.push_back('0');
        }
    std::cout << str << std::endl;
    return 0;
}