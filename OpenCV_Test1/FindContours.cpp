//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
/////* FindContours() 함수를 이용한 컨투어 검출하기 코드 */
//////drawContours() 함수를 사용해서 컨투어 이미지를 그릴 수 있음
////int main()
////{
////	VideoCapture cap(0);
////	if (!cap.isOpened()) {
////		cout << "카메라를 열 수 없습니다." << endl;
////		return -1;
////	}
////	while (1)
////	{
////		Mat img_color;
////		bool ret = cap.read(img_color);
////		if (!ret) {
////			cout << "캡처 실패" << endl;
////			break;
////		}
////		//컬러로 이미지 가져오기
////		//img_color = imread("test.jpg", IMREAD_COLOR);
////		//그레이 스케일로 변환 후 이진화하여 바이너리 이미지로 변환
////		Mat img_gray;
////		cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
////		Mat img_binary;
////		threshold(img_gray, img_binary, 150, 255, THRESH_BINARY_INV); // 하위임계값 150, 상위임계값 255 이진화 작업
////		//이진화 결과를 개선하기 위해 모폴로지 닫기 연산(팽창을 하고나서 침식)
////		Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
////		morphologyEx(img_binary, img_binary, MORPH_CLOSE, kernel);
////		//x,y 좌표 데이터 셋트를 한 요소로 컨투어 표현하는 점들의 집합 선언
////		vector<vector<Point>> contours;
////		//컨투어를 검출, 컨투어의 일부 구간이 직선인 경우 시작 좌표와 끝 좌표만 저장
////		findContours(img_binary, contours, RETR_LIST, CHAIN_APPROX_SIMPLE);
////		//각각 인덱스 0, 인덱스 1로 지정
////		drawContours(img_color, contours, 0, Scalar(0, 0, 255), 3);
////		drawContours(img_color, contours, 1, Scalar(0, 255, 0), 3);
////		//한번에 모두 컨투어를 그릴 수 있음
////		//drawContours(img_color, contours, -1, Scalar(0, 255, 0), 2);
////		//imshow("binary", img_binary); //컨투어를 검출하기 위해서는 이진화 작업을 거쳐야 함
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
//	//컬러로 이미지를 가져오
//	VideoCapture cap(0);
//	if (!cap.isOpened())
//	{
//		cout << "카메라 닫힘" << endl;
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
//		//그레이 스케일로 변환 후 이진화하여 바이너리 이미지로 변환
//		Mat img_gray;
//		cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
//
//		Mat img_binary;
//		int value = getTrackbarPos("threshold", "result");
//		threshold(img_gray, img_binary, value, 255, THRESH_BINARY_INV);
//
//		//이진화 결과를 개선하기 위해 모폴로지 닫기 연산을 해줌(팽창을 한 뒤 침식)
//		Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
//		morphologyEx(img_binary, img_binary, MORPH_CLOSE, kernel);
//
//		//x, y좌표 데이터 세트를 한 요소로 컨투어 표현하는 점들의 집합(어레이)선언
//		vector<vector<Point>> contours;
//		//컨투어를 검출, 컨투어의 일부 구간이 직선인 경우 시작 좌표와 끝 좌표만 저장
//		findContours(img_binary, contours, RETR_LIST, CHAIN_APPROX_SIMPLE);
//		//검출된 2개의 컨투어(별, 삼각형)를 이미지에 그려줌
//		//각각 인덱스 0, 인덱스 1로 지정
//
//		//두가지 컨투어를 그림
//		/*drawContours(img_color, contours, 0, Scalar(0, 0, 255), 3);
//		drawContours(img_color, contours, 1, Scalar(0, 255, 0), 3);*/
//
//		//한번에 모든 컨투어를 그릴 수 있음
//		drawContours(img_color, contours, -1, Scalar(0, 255, 0), 2);
//
//		imshow("result", img_color);
//		if (waitKey(1) == 27)
//			break;
//	}
//	cap.release();
//	return 0;
//}