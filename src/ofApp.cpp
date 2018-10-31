#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofBackground(0, 10);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  ofSetColor(255, 100, 200);
  int cell = ofGetHeight() / grid;
  int radius = cell / 4;
  int offset = cell / 2;
  for (unsigned int i = 0; i < grid; i++) {
    int x = i * cell + offset;
    for (unsigned j = 0; j < grid; j++) {
      int y = j * cell + offset;
//      ofDrawCircle(x, y, radius);
      
      ofSetLineWidth(3);
      ofVec2f p1 = ofVec2f(x, y);
      ofVec2f p2long = ofVec2f(mouse.x - x, mouse.y - y);
      int distance = p1.distance(mouse);
//      ofVec2f p2 = p2long.getLimited(radius * 1.5);
      ofVec2f p2 = p2long.getLimited(distance * 0.25);
      ofDrawLine(p1.x, p1.y, p2.x + x, p2.y + y);
    };
  };
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
  mouse = ofVec2f(x, y);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
