#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat image;
	image = imread("./lenna.jpg");

	Mat bgr[3];
	split(image, bgr);

	imshow("src", image);
	imshow("blue", bgr[0]);
	imshow("red", bgr[1]);
	imshow("green", bgr[2]);
	waitKey(0);
	return 0;

}
// RGB 컬러 모델은 3원색 파랑색, 녹색, 빨강색을 혼합하여 가산하는 가산 컬러 모델이다.
// HSV 컬러 모델은 Hue 색조, Saturation 채도, Value 명도를 사용한다. 인간의 눈이 컬러를 인식하는 방법과비슷
// YIG 는 컬러 텔레비전 방송에 쓰이는 컬러 모델이다. 