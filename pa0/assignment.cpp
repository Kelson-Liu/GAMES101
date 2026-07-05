#include <cmath>
#include <Eigen/Core>
#include <Eigen/Dense>
#include <iostream>

int main()
{
    Eigen::Vector2f a(2.0f, 1.0f);
    Eigen::Vector2f b(1.0f, 2.0f);
    Eigen::Matrix2f revolve;

    float rad = 45.0f * acos(-1) / 180.0f;
    revolve << cos(rad), -sin(rad),
        sin(rad), cos(rad);
    a = revolve * a;
    a += b;
    std::cout << "The result is:";
    std::cout << a;
    std::cout << "end";
}
