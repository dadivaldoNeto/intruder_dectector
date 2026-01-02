# Intruder Detector with OpenCV

This project, inspired by Head First C Lab 2, transforms your computer into a simple intruder detection system using OpenCV and a webcam. It continuously monitors the surroundings, detects movement via optical flow analysis, and saves images of potential intruders to a file (e.g., for syncing via Dropbox or a network drive).
## Features

- Captures real-time video from the default webcam.
- Uses Farneback optical flow to detect significant movement between frames.
- Saves detected intruder images as JPEG files.
- Optional: Displays live webcam feed in a window for testing.
- Includes a startup delay to avoid capturing the user leaving the room.
