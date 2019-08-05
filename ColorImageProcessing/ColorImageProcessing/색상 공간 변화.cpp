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
// RGB �÷� ���� 3���� �Ķ���, ���, �������� ȥ���Ͽ� �����ϴ� ���� �÷� ���̴�.
// HSV �÷� ���� Hue ����, Saturation ä��, Value ���� ����Ѵ�. �ΰ��� ���� �÷��� �ν��ϴ� ��������
// YIG �� �÷� �ڷ����� ��ۿ� ���̴� �÷� ���̴�. 