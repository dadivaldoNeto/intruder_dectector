#include "header.hpp"

int	main(void) {

	cv::VideoCapture 		cam(cv_handle::WEBCAM_LOCATION);

	if (!cam.isOpened())
		return (logs::error_msg(logs::N_WEBCAM));
	config.detector.load(cv_handle::CASCADE_PATH);
	if (config.detector.empty())
		return (logs::error_msg(logs::N_LOAD_CASCADE));
	cv_handle::showCam(cam);
	return (0);

}
