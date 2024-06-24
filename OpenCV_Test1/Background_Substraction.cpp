//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//int main()
//{
//	Mat img_frame;
//	VideoCapture cap(0);
//	if (!cap.isOpened()) {
//		cout << "카메라를 x" << endl;
//		return -1;
//	}
//	Ptr<BackgroundSubtractorMOG2> foregroundBackground = createBackgroundSubtractorMOG2(500, 350, false);
//
//	while (1)
//	{
//		bool ret = cap.read(img_frame);
//		if (!ret) {
//			cout << "캡쳐 실패" << endl;
//			break;
//		}
//		GaussianBlur(img_frame, img_frame, Size(5, 5), 0);
//		Mat img_mask;
//		foregroundBackground->apply(img_frame, img_mask, 0);
//		Mat kernel = getStructuringElement(MORPH_ELLIPSE, Size(5, 5));
//		morphologyEx(img_mask, img_mask, MORPH_CLOSE, kernel);
//		imshow("mask", img_mask);
//		imshow("Color", img_frame);
//		int key = waitKey(30);
//		if (key == 27)
//			break;
//	}
//	cap.release();
//	return 0;
//}