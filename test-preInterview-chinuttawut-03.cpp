#include <string>
#include <iostream>

std::string reverseString(const std::string& inputString) {
    std::string reversedString;
    int length = inputString.length();

    // สร้างสตริงที่กลับด้าน
    for (int i = length - 1; i >= 0; i--) {
        reversedString += inputString[i];
    }

    return reversedString;
}
int main() {
   std::cout <<  "'This is an example!' ==> " ; 
    std::string input = "'This is an example!'";
    
    std::string reversed = reverseString(input);
    
    
    
    std::cout << reversed << std::endl;  
    
     std::cout <<  "'double spaces'       ==> " ;
    input = "'double spaces'";
    reversed = reverseString(input);
    std::cout << reversed << std::endl; 
    return 0;
}
