#include <iostream>

int main() {
    const int HUIDIG_JAAR = 2025;  
    int geboortejaar, leeftijd;

  
    std::cout << "Voer je geboortejaar in: ";
    std::cin >> geboortejaar;

    
    leeftijd = HUIDIG_JAAR - geboortejaar;
    
    std::cout << "Je bent " << leeftijd << " jaar oud." << std::endl;

    return 0;
}
