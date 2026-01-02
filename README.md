# Intruder Detector with OpenCV

This project, inspired by Head First C Lab 2, transforms your computer into a simple intruder detection system using OpenCV and a webcam. It continuously monitors the surroundings, detects movement via optical flow analysis, and saves images of potential intruders to a file (e.g., for syncing via Dropbox or a network drive).
## Features

- Captures real-time video from the default webcam.
- Uses Farneback optical flow to detect significant movement between frames.
- Saves detected intruder images as JPEG files.
- Optional: Displays live webcam feed in a window for testing.
- Includes a startup delay to avoid capturing the user leaving the room.

## Requirements

- OpenCV library installed (version 2.x or later recommended; see the [OpenCV Install Guide](http://opencv.willowgarage.com/wiki/InstallGuide) for details).
- C compiler (e.g., GCC on Linux/macOS, MinGW or MSVC on Windows).
- CMake (cross-platform build system generator).
- Build tool (e.g., Make on Linux/macOS, MinGW Make or NMake on Windows, or use Visual Studio IDE).
- Webcam connected to your computer.

## Usage

### Building on Linux or macOS
1. Create a build directory:
   ```
   mkdir build && cd build
   ```
2. Generate the build files with CMake:
   ```
   cmake ..
   ```
3. Build the project:
   ```
   make
   ```
4. Run the executable:
   ```
   ./intruder_detector
   ```