#include "header.hpp"

void cv_handle::showCam(cv::VideoCapture &cam) {
	cv::Mat frame;

	while (true) {
		cam >> frame;
		if (frame.empty())
			return ;
		cv::imshow(cv_handle::WIN_NAME, frame);
		cv::waitKey(cv_handle::time_per_fps);
	}
}


// Quando vou começar o estágio?