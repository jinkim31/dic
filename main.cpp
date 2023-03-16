#include <iostream>
#include <Eigen/Eigen>

int main()
{
    Eigen::Matrix2f m;
    m <<1, 2,1, 2;
    std::cout<<m;
}
