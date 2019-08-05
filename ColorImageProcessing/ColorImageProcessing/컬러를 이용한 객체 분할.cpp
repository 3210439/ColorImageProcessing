#include<opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat img = imread("./lenna.jpg");
	if (img.empty()) { return -1; }

	Mat imgHSV;
	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	Mat imgThresholded;
	inRange(imgHSV, Scalar(10, 0, 0),
		Scalar(255, 255, 255), imgThresholded); // lowerb, upperb ��Į�� �� ���̿� ������ 255 �ƴϸ� 0

	imshow("Thresholded Image", imgThresholded);
	imshow("Original", img);
	waitKey(0);
	return 0;
}
