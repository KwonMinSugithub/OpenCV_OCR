//#include <opencv2/opencv.hpp>
//#include <iostream>
//using namespace cv;
//using namespace std;
//
//int main()
//{
//	//�̹����� �÷��� ������ �� �׷��� ������ �̹����� ��ȯ
//	Mat img_color = imread("test.jpg", IMREAD_COLOR);
//	Mat img_gray;
//	cvtColor(img_color, img_gray, COLOR_BGR2GRAY);
//	imshow("gray_result", img_gray);
//	waitKey(0);
//
//	//ĳ�� ��������
//	//����� ���� �κи� ����� ��
//	Mat img_edge;
//	Canny(img_gray, img_edge, 50, 150);
//	imshow("canny_result", img_edge);
//	waitKey(0);
//
//	//���� ��ü�� ����� �Ǿ�� �ϹǷ� ������Ŵ
//	bitwise_not(img_edge, img_edge);
//	imshow("bit_not_result", img_edge);
//	waitKey(0);
//
//	//������(Ư�������� ��踦 ���� ���� �ȼ����� ���� ������ �����ϴ� ��)�� ã�Ƽ� �ܰ����� ����
//	vector<vector<Point>>contours;
//	//�̹��� ����ȭ�ϱ�(5��, 16��), ��ü ������ ����
//	//�������� �Ϻ� ������ ������ ��� ���� ��ǥ�� �� ��ǥ�� ����
//	findContours(img_edge.clone(), contours, RETR_LIST, CHAIN_APPROX_SIMPLE);
//	drawContours(img_edge, contours, -1, Scalar(0, 0, 0), 1);
//	imshow("result", img_edge);
//	waitKey(0);
//	//��� ������ ���� �󺧸��� ��
//	Mat labels, stats, centroids;
//	int nlabels = connectedComponentsWithStats(img_edge, labels, stats, centroids);
//	for (int i = 0; i < nlabels; i++) {
//		//����� ���ܽ�Ŵ, 2���� ������ ��
//		if (i < 1) continue;
//		//��� ������ ũ��, �߽���ǥ, �ܰ� �簢���� ���� ������ ������
//		int area = stats.at<int>(i, CC_STAT_AREA);
//		int center_x = centroids.at<double>(i, 0);
//		int center_y = centroids.at<double>(i, 1);
//		int left = stats.at<int>(i, CC_STAT_LEFT);
//		int top = stats.at<int>(i, CC_STAT_TOP);
//		int width = stats.at<int>(i, CC_STAT_WIDTH);
//		int height = stats.at<int>(i, CC_STAT_HEIGHT);
//
//		//������ ũ�Ⱑ 50�̻��� ��� �ش翵���� ������ ���� ������ ǥ����
//		if (area > 50) {
//			//������Ʈ �����ܰ��� �簢���� �׸�
//			rectangle(img_color, Point(left, top), Point(left + width, top + height), Scalar(0, 0, 255), 1);
//			//������Ʈ ���� �߽ɿ� ���� �׸�
//			circle(img_color, Point(center_x, center_y), 5, (255, 0, 0), 1);
//			//�󺧹�ȣ�� ǥ����, i<2�� ���� 0, 1�� ���� 2���� �󺧸� ��
//			putText(img_color, std::to_string(i), Point(left + 20, top + 20), FONT_HERSHEY_SIMPLEX, 1, Scalar(255, 0, 0), 3);
//		}
//		imshow("label_result", img_color);
//		waitKey(0);
//	}
//}