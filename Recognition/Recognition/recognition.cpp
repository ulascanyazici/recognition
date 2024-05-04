#include <opencv2/opencv.hpp>

int main() {
    cv::Mat image = cv::imread("path_to_your_image.jpg", cv::IMREAD_COLOR);

    if (image.empty()) {
        std::cout << "Could not open or find the image." << std::endl;
        return -1;
    }

    cv::imshow("Image", image);
    cv::waitKey(0);

    return 0;
}
