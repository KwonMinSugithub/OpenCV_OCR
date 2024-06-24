//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//int main()
//{
//	//이미지를 컬러로 가져온 후 그레이 스케일 이미지로 변환
//	Mat img_color = imread("test.jpg", IMREAD_COLOR);
//	Mat img_gray;
//	cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
//	imshow("gray_result", img_gray);
//	waitKey(0);
//
//	//캐니 에지검출
//	//검출된 에지 부분만 흰색이 됨
//	Mat img_edge;
//	Canny(img_gray, img_edge, 50, 150);
//	imshow("canny_result", img_edge);
//	waitKey(0);
//
//	//관심 물체가 흰색이 되어야 하므로 반전시킴
//	bitwise_not(img_edge, img_edge);
//	imshow("bit_not_result", img_edge);
//	waitKey(0);
//
//	//컨투어(특정영역의 경계를 따라 같은 픽셀값을 갖는 지점을 연결하는 선)를 찾아서 외곽선을 보강
//	vector<vector<Point>>contours;
//	//이미지 이진화하기(5장, 16장), 전체 컨투어 검출
//	//컨투어의 일부 구간이 직선인 경우 시작 좌표와 끝 좌표만 저장
//	findContours(img_edge.clone(), contours, RETR_LIST, CHAIN_APPROX_SIMPLE);
//	drawContours(img_edge, contours, -1, Scalar(0, 0, 0), 1);
//	imshow("result", img_edge);
//	waitKey(0);
//	//흰색 영역에 대해 라벨링을 함
//	Mat labels, stats, centroids;
//	int nlabels = connectedComponentsWithStats(img_edge, labels, stats, centroids);
//	for (int i = 0; i < nlabels; i++) {
//		//배경을 제외시킴, 2부터 나오게 됨
//		if (i < 1) continue;
//		//흰색 영역의 크기, 중심좌표, 외각 사각형에 대한 정보를 가져옴
//		int area = stats.at<int>(i, CC_STAT_AREA);
//		int center_x = centroids.at<double>(i, 0);
//		int center_y = centroids.at<double>(i, 1);
//		int left = stats.at<int>(i, CC_STAT_LEFT);
//		int top = stats.at<int>(i, CC_STAT_TOP);
//		int width = stats.at<int>(i, CC_STAT_WIDTH);
//		int height = stats.at<int>(i, CC_STAT_HEIGHT);
//
//		//영역의 크기가 50이상인 경우 해당영역에 다음과 같은 정보를 표시함
//		if (area > 50) {
//			//오브젝트 영역외곽에 사각형을 그림
//			rectangle(img_color, Point(left, top), Point(left + width, top + height), Scalar(0, 0, 255), 1);
//			//오브젝트 영역 중심에 원을 그림
//			circle(img_color, Point(center_x, center_y), 5, (255, 0, 0), 1);
//			//라벨번호를 표시함, i<2에 의해 0, 1은 빼고 2부터 라벨링 됨
//			putText(img_color, std::to_string(i), Point(left + 20, top + 20), FONT_HERSHEY_SIMPLEX, 1, Scalar(255, 0, 0), 3);
//		}
//		imshow("label_result", img_color);
//		waitKey(0);
//	}
//}