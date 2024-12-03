#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	mjpeg.connect("http://nfg-rpi-3-4.local:7111/ipvideo");
	//client.connect("http://83.161.133.106/axis-cgi/mjpg/video.cgi?resolution=480x300&dummy=1300696302973");
}

//--------------------------------------------------------------
void ofApp::update(){
	mjpeg.grabFrame();
}

//--------------------------------------------------------------
void ofApp::draw(){
	mjpeg.draw(20, 20);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
