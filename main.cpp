#include <iostream>
int main()
{
    
        float width, height, area, length;
        std::cout << "Enter the data to calculate the parallelepiped:\a";
        std::cout << "Width ->\a ";
        std:: cin >> width;
        std::cout << "Height ->\a ";
        std::cin >> height;
        std::cout << "Long ->\a ";
        std::cin >> length;
        area = width * height * length;
        std::cout << "volume -> " << area;
        std::cout << std::endl;
        return 0;
    

	return 0;
}