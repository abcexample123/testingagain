#include <iostream>
std::string toppizza();
std::string toppizza(std::string string1);
std::string toppizza(std::string string1, std::string string2);

int main(){
    toppizza("cay","chua");
    return 0;
}

std::string toppizza(){
    std::cout << "Day la pizza cua ban!";
}
std::string toppizza(std::string string1){
    std::cout << "Day la pizza " << string1 <<" cua ban!";
}
std::string toppizza(std::string string1, std::string string2){
    std::cout << "Day la pizza " << string1 << " va " << string2 <<" cua ban!";
}