#pragma once

#include <iostream>
#include <cstdint>
#include <opencv2/opencv.hpp>

# define MS 1000
# define FPS 120

typedef struct classifier {
	cv::CascadeClassifier	detector;
	cv::Mat					gray_image;
	std::vector<cv::Rect>	rect;
} t_classifier;

extern t_classifier	config;

namespace logs {

	const std::string N_WEBCAM = "CAN NOT OPEN WEBCAM";
	const std::string N_LOAD_CASCADE = "CAN NOT LOAD THE CASCADE PATH";

	int error_msg(std::string msg);

}

namespace cv_handle {


	const int			ESC = 27;
	const uint8_t		INVERT_AXIS = 1;
	const uint8_t		WEBCAM_LOCATION = 0;
	const int8_t		WIN_NOT_EXISTS = -1;
	const u_int32_t		time_per_frame = MS / FPS;
	const std::string	WIN_NAME = "WEBCAM";
	const std::string	CASCADE_PATH = "../assets/haarcascade_frontalface_default.xml";
	const uint8_t		THICKNESS = 3;

	void showCam(cv::VideoCapture &cam);
	void face_dectection(cv::Mat &frame);
	static inline bool x_button_was_clicked(void);

}
