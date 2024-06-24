//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//void func1()
//{
//	Mat a(3, 4, CV_8UC3, Scalar(0, 0, 255));
//	cout << "a" << endl;
//	cout << a << endl;
//}
//
//void func2()
//{
//	Mat M(600, 660, CV_8UC3, Scalar(0, 255, 0));
//	imshow("img", M);
//	waitKey(0);
//}
//
//void func3()
//{
//	Mat M = Mat::eye(2, 2, CV_64F);
//	cout << "M" << endl << M << endl;
//}
//
//void func4()
//{
//	Mat R(400, 600, CV_8UC3);
//	randu(R, Scalar::all(0), Scalar::all(255));
//	imshow("R", R);
//	waitKey(0);
//}
//
//void func5()
//{
//	Mat img_color;
//	img_color = imread("cat on laptop.jpg", IMREAD_COLOR);
//	if (img_color.empty()) {
//		cout << "이미지 불가능" << endl;
//		return;
//	}
//	namedWindow("Color");
//	imshow("Color", img_color);
//
//	waitKey(0);
//
//	Mat img_gray;
//	cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
//	imshow("img_gray", img_gray);
//	
//
//	imwrite("grayimage.jpg", img_gray);
//	waitKey(0);
//	destroyAllWindows();
//}
//
//
//void func6() {
//	VideoCapture cap("happiness.mp4");
//	if (!cap.isOpened()) {
//		cout << "파일을 열 수 없습니다." << endl;
//		return;
//	}
//}
//
//void func7() {
//
//}
//
//int main()
//{
//	//func1();
//	//func2();
//	//func3();
//	//func4();
//	//func5();
//	//func6();
//	func7();
//}