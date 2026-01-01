#include "header.hpp"

int	main(void) {

	cv::VideoCapture cam(cv_handle::WEBCAM_LOCATION);

	if (!cam.isOpened())
		return (logs::error_msg(logs::N_WEBCAM));
	cv_handle::showCam(cam);
	return (0);
}
