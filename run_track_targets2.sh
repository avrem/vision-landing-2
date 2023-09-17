src/track_targets --width 1280 --height 720 --fps 30 \
-o 'appsrc ! videoconvert ! videorate ! openh264enc bitrate=1000000 ! rtph264pay ! udpsink host=172.17.1.1 port=5000' \
raw-tcp calibration/dji-mini-se-1280x720.yml