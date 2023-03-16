#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat mat = cv::Mat(1000, 1000, CV_8UC1);

    std::cout<<mat.size<<std::endl;
    cv::imshow("a", mat);
    cv::waitKey();
}
