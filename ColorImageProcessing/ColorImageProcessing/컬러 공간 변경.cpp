#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

int main()
{
	Mat image, hsv, dst;
	image = imread("./lenna.jpg");
	cvtColor(image, hsv, COLOR_BGR2HSV);

	Mat array[3];
	split(hsv, array);
	imshow("src", image);
	imshow("Hue", array[0]);
	imshow("Saturation", array[1]);
	imshow("Value", array[2]);
	waitKey();
	return 0;
}
