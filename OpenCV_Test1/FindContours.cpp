//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
/////* FindContours() �Լ��� �̿��� ������ �����ϱ� �ڵ� */
//////drawContours() �Լ��� ����ؼ� ������ �̹����� �׸� �� ����
////int main()
////{
////	VideoCapture cap(0);
////	if (!cap.isOpened()) {
////		cout << "ī�޶� �� �� �����ϴ�." << endl;
////		return -1;
////	}
////	while (1)
////	{
////		Mat img_color;
////		bool ret = cap.read(img_color);
////		if (!ret) {
////			cout << "ĸó ����" << endl;
////			break;
////		}
////		//�÷��� �̹��� ��������
////		//img_color = imread("test.jpg", IMREAD_COLOR);
////		//�׷��� �����Ϸ� ��ȯ �� ����ȭ�Ͽ� ���̳ʸ� �̹����� ��ȯ
////		Mat img_gray;
////		cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
////		Mat img_binary;
////		threshold(img_gray, img_binary, 150, 255, THRESH_BINARY_INV); // �����Ӱ谪 150, �����Ӱ谪 255 ����ȭ �۾�
////		//����ȭ ����� �����ϱ� ���� �������� �ݱ� ����(��â�� �ϰ��� ħ��)
////		Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
////		morphologyEx(img_binary, img_binary, MORPH_CLOSE, kernel);
////		//x,y ��ǥ ������ ��Ʈ�� �� ��ҷ� ������ ǥ���ϴ� ������ ���� ����
////		vector<vector<Point>> contours;
////		//����� ����, �������� �Ϻ� ������ ������ ��� ���� ��ǥ�� �� ��ǥ�� ����
////		findContours(img_binary, contours, RETR_LIST, CHAIN_APPROX_SIMPLE);
////		//���� �ε��� 0, �ε��� 1�� ����
////		drawContours(img_color, contours, 0, Scalar(0, 0, 255), 3);
////		drawContours(img_color, contours, 1, Scalar(0, 255, 0), 3);
////		//�ѹ��� ��� ����� �׸� �� ����
////		//drawContours(img_color, contours, -1, Scalar(0, 255, 0), 2);
////		//imshow("binary", img_binary); //����� �����ϱ� ���ؼ��� ����ȭ �۾��� ���ľ� ��
////		imshow("result", img_color);
////		waitKey(1);
////	}
////	return 0;
////}
//
//
//
//static void on_trackbar(int, void*)
//{
//
//}
//
//int main(void)
//{
//	//�÷��� �̹����� ������
//	VideoCapture cap(0);
//	if (!cap.isOpened())
//	{
//		cout << "ī�޶� ����" << endl;
//		return -1;
//	}
//	Mat img_color;
//
//	namedWindow("result", WINDOW_NORMAL);
//	createTrackbar("threshold", "result", 0, 255, on_trackbar);
//	setTrackbarPos("threshold", "result", 150);
//
//
//	while (1)
//	{
//
//		cap.read(img_color);
//		//�׷��� �����Ϸ� ��ȯ �� ����ȭ�Ͽ� ���̳ʸ� �̹����� ��ȯ
//		Mat img_gray;
//		cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
//
//		Mat img_binary;
//		int value = getTrackbarPos("threshold", "result");
//		threshold(img_gray, img_binary, value, 255, THRESH_BINARY_INV);
//
//		//����ȭ ����� �����ϱ� ���� �������� �ݱ� ������ ����(��â�� �� �� ħ��)
//		Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
//		morphologyEx(img_binary, img_binary, MORPH_CLOSE, kernel);
//
//		//x, y��ǥ ������ ��Ʈ�� �� ��ҷ� ������ ǥ���ϴ� ������ ����(���)����
//		vector<vector<Point>> contours;
//		//����� ����, �������� �Ϻ� ������ ������ ��� ���� ��ǥ�� �� ��ǥ�� ����
//		findContours(img_binary, contours, RETR_LIST, CHAIN_APPROX_SIMPLE);
//		//����� 2���� ������(��, �ﰢ��)�� �̹����� �׷���
//		//���� �ε��� 0, �ε��� 1�� ����
//
//		//�ΰ��� ����� �׸�
//		/*drawContours(img_color, contours, 0, Scalar(0, 0, 255), 3);
//		drawContours(img_color, contours, 1, Scalar(0, 255, 0), 3);*/
//
//		//�ѹ��� ��� ����� �׸� �� ����
//		drawContours(img_color, contours, -1, Scalar(0, 255, 0), 2);
//
//		imshow("result", img_color);
//		if (waitKey(1) == 27)
//			break;
//	}
//	cap.release();
//	return 0;
//}