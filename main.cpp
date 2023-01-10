#include <iostream>
int main()
{

    float scale, distance1, distance2;
    std::cout << "Calculation of the distance between settlements.:\a";
    std::cout << "scale ->\a ";
    std::cin >> scale;
    std::cout << "distance between points  ->\a ";
    std::cin >> distance1;
    distance2 = scale * distance1;
    std::cout << "distance between settlements -> " << distance2;
    std::cout << std::endl;



    return 0;
}