#pragma once

#include "ofMain.h"
#include "ofxZmq.h"

class ofxZmqPublisher : public ofxZmqSocket
{
public:
	
	ofxZmqPublisher();
	
	void bind(string addr);
	void unbind(string addr);
	
	bool send(void *data, size_t len, bool nonblocking = false, bool more = false);
	bool send(string& data, bool nonblocking = false, bool more = false);
	bool send(ofBuffer& data, bool nonblocking = false, bool more = false);
	
};
