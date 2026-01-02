#include "header.hpp"

t_classifier 		config;

/*
	The idea behind this function, trying to obtain the window property.
	If the getWindowsProperty function returns -1 with the WND_PROP_AUTOSIZE flag, 
	means that it was unable to obtain this windows information, so it does not exist, or there was a problem.
	It's a workaround because I'm using GTK as GUI lib, and it doesn't support 
	(I need to check: https://github.com/opencv/opencv/issues/25346) the WND_PROP_VISIBLE flag.  	
*/
static inline bool cv_handle::x_button_was_clicked() {

	double windows_exist;

	windows_exist = cv::getWindowProperty(cv_handle::WIN_NAME, cv::WND_PROP_AUTOSIZE);
	return (windows_exist == cv_handle::WIN_NOT_EXISTS);

}

void	cv_handle::face_dectection(cv::Mat &frame) {
	
	cv::cvtColor(frame, config.gray_image, cv::COLOR_BGR2GRAY);
	
	config.detector.detectMultiScale(
		config.gray_image,
		config.rect
	);

	for (int i = 0; i < config.rect.size(); i++) {
		cv::rectangle(frame,
			config.rect[i].tl(),
			config.rect[i].br(),
			cv::Scalar(0, 255, 0)
		);
	}

}

void cv_handle::showCam(cv::VideoCapture &cam) {
	
	cv::Mat frame;
	
	int		key = 0;

	cv::namedWindow(cv_handle::WIN_NAME, cv::WINDOW_NORMAL);
	while (true) {
		cam >> frame;
		if (frame.empty())
			return ;
		cv::flip(frame, frame, cv_handle::INVERT_AXIS);
		cv_handle::face_dectection(frame);
		cv::imshow(cv_handle::WIN_NAME, frame);
		key = cv::waitKey(cv_handle::time_per_frame);
		if (key == cv_handle::ESC)
			break ;
		if (x_button_was_clicked())
			break ;
	}
	std::cout << "Esc was pressed or X button" << std::endl;

}
