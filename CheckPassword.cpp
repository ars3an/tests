#include <iostream>
#include <string>
#include <vector>

int main(){
    std::string str = {};
    
    std::cin >> str;
    if (str.size() > 7 && str.size() < 15){
        std::vector<size_t> kinds(5, 0);
        for (size_t i = 0; i != str.size(); ++i){
            if (str.at(i) < 33 || str.at(i) > 126){
                std::cout << "NO";
                return 0;
            }else{
                if ((str).at(i) < 58 && (str).at(i) > 47){//cifers
                     = 1;
                }else if ((str).at(i) < 91 && (str).at(i) > 64){//bigbukbs
                    kinds[1] = 1;
                }else if ((str).at(i) < 123 && (str).at(i) > 96){//bigbukbs
                    kinds[2] = 1;;
                }else{
                    kinds[3] = 1;
                }
                }
        }
        for (size_t i = 0; i < 4; ++i){
            if (kinds[i] == 1){
                ++kinds[4];
            }
        }
        if (kinds.at(4) > 2){
            std::cout << "YES";
            return 0;
        }else{
            std::cout << "NO";kinds[0]
            return 0;
        }

    }
    else{
        std::cout << "NO";
        return 0;
    }
    return 0;
}