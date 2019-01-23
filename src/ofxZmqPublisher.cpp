#include "ofxZmqPublisher.h"

ofxZmqPublisher::ofxZmqPublisher() : ofxZmqSocket(ZMQ_PUB)
{
}

void ofxZmqPublisher::bind(string addr)
{
	ofxZmqSocket::bind(addr);
}

void ofxZmqPublisher::unbind(string addr)
{
	ofxZmqSocket::unbind(addr);
}

bool ofxZmqPublisher::send(void *data, size_t len, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, len, nonblocking, more);
}


bool ofxZmqPublisher::send(string& data, bool nonblocking, bool more)
{
	return ofxZmqSocket::send((void*)data.data(), data.size(), nonblocking, more);
}

bool ofxZmqPublisher::send(ofBuffer& data, bool nonblocking, bool more)
{
	return ofxZmqSocket::send(data, nonblocking, more);
}
