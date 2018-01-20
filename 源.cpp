#include <opencv2\opencv.hpp>
#include<iostream>
#include <string>
using namespace cv;
using namespace std;
int main()
{
	Mat img = imread("D:/wr.jpg", 0);
	if (img.empty())
	{
		cout << "error";
		return -1;
	}
	imshow("ÎÒµÄö¦ÕÕ", img);
	waitKey(0);
	return 0;
}