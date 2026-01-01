#pragma once

#include <iostream>
#include <cstdint>
#include <opencv2/opencv.hpp>

# define MS 1000
# define FPS 60

namespace logs {

	const std::string N_WEBCAM = "CAN NOT OPEN WEBCAM";
	int error_msg(std::string msg);

}

namespace cv_handle {

	const uint8_t WEBCAM_LOCATION = 0;
	const u_int32_t time_per_fps = MS / FPS;
	const std::string WIN_NAME = "WEBCAM";

	void showCam(cv::VideoCapture &cam);
	
}
