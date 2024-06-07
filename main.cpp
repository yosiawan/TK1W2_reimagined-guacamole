//
// Created by Yosia on 07/06/24.
//
#include <iostream>

int main()
{
    float distance, time;

    printf("Enter distance traveled: ");
    std::cin >> distance;

    printf("Enter time elapsed: ");
    std::cin >> time;

    const float speed = distance / time;

    printf("Your speed is %.f", speed);
    return 0;

}
